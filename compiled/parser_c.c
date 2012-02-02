#include "cthyst.h"
VALUE cls_AmethystParser;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_argsOpt(VALUE self );
VALUE AmethystParser_call(VALUE self );
VALUE AmethystParser_cases(VALUE self );
VALUE AmethystParser_className(VALUE self );
VALUE AmethystParser_collect(VALUE self ,VALUE a0);
VALUE AmethystParser_expression(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_host_expr(VALUE self );
VALUE AmethystParser_igrammar(VALUE self );
VALUE AmethystParser_inline_host_expr(VALUE self );
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0);
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_local(VALUE self ,VALUE a0);
VALUE AmethystParser_name(VALUE self );
VALUE AmethystParser_nr(VALUE self );
VALUE AmethystParser_postfixed(VALUE self );
VALUE AmethystParser_prefixed(VALUE self );
VALUE AmethystParser_procargs(VALUE self );
VALUE AmethystParser_procargs2(VALUE self );
VALUE AmethystParser_rubyarg(VALUE self );
VALUE AmethystParser_rule(VALUE self );
VALUE AmethystParser_ruleargs(VALUE self );
VALUE AmethystParser_sequence(VALUE self );
VALUE AmethystParser_term(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_seq(VALUE self ,VALUE);
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE);
VALUE switchhash_AmethystParser_1;
VALUE switchhash_AmethystParser_2;
static VALUE s_;
static VALUE s_Amethyst_fe41;
static VALUE s__bq__8333;
static VALUE s__bs__bs__7f81;
static VALUE s__bs__dq__3bd8;
static VALUE s__co__at__4bf0;
static VALUE s__d41d;
static VALUE s__dot__dot__58b9;
static VALUE s__dot__dot__dot__2f43;
static VALUE s__gt__cedf;
static VALUE s__lb__8154;
static VALUE s__lb__rb__d751;
static VALUE s__le__f95b;
static VALUE s__lp__84c4;
static VALUE s__lt__524a;
static VALUE s__rb__0fbd;
static VALUE s__re__cbb1;
static VALUE s__rp__9371;
static VALUE sy_AmethystParser_Act_lb_Args_245f;
static VALUE sy_AmethystParser_Act_lb_bind_7d0b;
static VALUE sy_AmethystParser_Apply_lb__dq_a_1437;
static VALUE sy_AmethystParser_Apply_lb__dq_c_5c74;
static VALUE sy_AmethystParser_Apply_lb__dq_m_cb65;
static VALUE sy_AmethystParser_Apply_lb__dq_r_1a54;
static VALUE sy_AmethystParser_Apply_lb__dq_s_7f45;
static VALUE sy_AmethystParser_Apply_lb__dq_t_b788;
static VALUE sy_AmethystParser_Apply_lb__lb_b_a4cc;
static VALUE sy_AmethystParser_Apply_lb_bi_9146;
static VALUE sy_AmethystParser_Args_lb__le__co_a_189a;
static VALUE sy_AmethystParser_Args_lb__le__co_a_ef61;
static VALUE sy_AmethystParser_Args_lb__le__co_a_fc0c;
static VALUE sy_AmethystParser_Comment_lb__f189;
static VALUE sy_AmethystParser_Enter_lb_Ap_57b6;
static VALUE sy_AmethystParser_Enter_lb_bi_68d7;
static VALUE sy_AmethystParser_Global_lb_b_8edb;
static VALUE sy_AmethystParser_Grammar_dot__80c6;
static VALUE sy_AmethystParser_Key_lb_bind_20b7;
static VALUE sy_AmethystParser_Lambda_lb___e59d;
static VALUE sy_AmethystParser_Lookahea_b11c;
static VALUE sy_AmethystParser_Many_lb_bin_33ac;
static VALUE sy_AmethystParser_Nested_lb_b_ab2c;
static VALUE sy_AmethystParser_Or_AST_dot_c_163b;
static VALUE sy_AmethystParser_Or_AST_lb_b_1d9d;
static VALUE sy_AmethystParser_Pass_lb_bin_9af8;
static VALUE sy_AmethystParser_Pred_lb_bin_4918;
static VALUE sy_AmethystParser_Result_lb__le__ae0e;
static VALUE sy_AmethystParser_Rule_dot_cre_e3af;
static VALUE sy_AmethystParser_Seq_dot_crea_abce;
static VALUE sy_AmethystParser_Seq_lb_Cut_lb__3505;
static VALUE sy_AmethystParser_Seq_lb__Bin_6d20;
static VALUE sy_AmethystParser_Strin_lb__lb__dq__41d8;
static VALUE sy_AmethystParser_Strin_lb__lb__qu__b1e7;
static VALUE sy_AmethystParser__append_lp__088f;
static VALUE sy_AmethystParser__append_lp__2bc4;
static VALUE sy_AmethystParser__append_lp__2d45;
static VALUE sy_AmethystParser__append_lp__4de3;
static VALUE sy_AmethystParser__append_lp__66a2;
static VALUE sy_AmethystParser__append_lp__6f56;
static VALUE sy_AmethystParser__append_lp__7140;
static VALUE sy_AmethystParser__append_lp__73f1;
static VALUE sy_AmethystParser__append_lp__8061;
static VALUE sy_AmethystParser__append_lp__80de;
static VALUE sy_AmethystParser__append_lp__81ec;
static VALUE sy_AmethystParser__append_lp__89bf;
static VALUE sy_AmethystParser__append_lp__984f;
static VALUE sy_AmethystParser__append_lp__9ca5;
static VALUE sy_AmethystParser__append_lp__9e15;
static VALUE sy_AmethystParser__append_lp__a273;
static VALUE sy_AmethystParser__append_lp__a2a3;
static VALUE sy_AmethystParser__append_lp__b24c;
static VALUE sy_AmethystParser__append_lp__b2a5;
static VALUE sy_AmethystParser__append_lp__bab9;
static VALUE sy_AmethystParser__append_lp__cbd1;
static VALUE sy_AmethystParser__append_lp__d113;
static VALUE sy_AmethystParser__append_lp__d1e3;
static VALUE sy_AmethystParser__append_lp__d43a;
static VALUE sy_AmethystParser__append_lp__d472;
static VALUE sy_AmethystParser__append_lp__dd73;
static VALUE sy_AmethystParser__at_appends_fd76;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__4fc1;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_c4f3;
static VALUE sy_AmethystParser__body_lp_bi_152d;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_567e;
static VALUE sy_AmethystParser__dq__sh__dq__b65f;
static VALUE sy_AmethystParser__lb_bind_lb_27_275f;
static VALUE sy_AmethystParser__lp_bind_lb_0_rb__418b;
static VALUE sy_AmethystParser__qu__sh__le__qu__9722;
static VALUE sy_AmethystParser_a_eq_autova_a27c;
static VALUE sy_AmethystParser_a_eq_autova_aaba;
static VALUE sy_AmethystParser_bind_lb_0_rb_;
static VALUE sy_AmethystParser_bind_lb_0_rb__dot__206f;
static VALUE sy_AmethystParser_bind_lb_10_rb__ed2a;
static VALUE sy_AmethystParser_bind_lb_12_rb__b690;
static VALUE sy_AmethystParser_bind_lb_23_rb__7c7a;
static VALUE sy_AmethystParser_bind_lb_2_rb_;
static VALUE sy_AmethystParser_bind_lb_3_rb__eq__bbe1;
static VALUE sy_AmethystParser_bind_lb_4_rb_;
static VALUE sy_AmethystParser_bind_lb_4_rb__dot__e4b4;
static VALUE sy_AmethystParser_bind_lb_4_rb__pl__13b0;
static VALUE sy_AmethystParser_bind_lb_5_rb_;
static VALUE sy_AmethystParser_bind_lb_5_rb__dot__028b;
static VALUE sy_AmethystParser_bind_lb_5_rb__dot__bb1e;
static VALUE sy_AmethystParser_bind_lb_6_rb_;
static VALUE sy_AmethystParser_bind_lb_7_rb__dot__35cf;
static VALUE sy_AmethystParser_bind_lb_8_rb_;
static VALUE sy_AmethystParser_l_eq_Local_lb__52e1;
static VALUE sy_AmethystParser_local_lp_bi_4bf2;
VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(7); bind_aset(bind,0/*o*/,a0);bind_aset(bind,5/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*o*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*r*/,it);
it=bind_aget(bind,5/*c*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(10); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*c*/); bind_aset(bind,1/*c*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,3/*o*/,it);
 it=bind_aget(bind,3/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(fail); it=rb_obj_clone(s__d41d); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__088f,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,4/*autovar*/); bind_aset(bind,6/*r*/,it);
 it=bind_aget(bind,1/*c*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(fail);it=rb_funcall(self,sy_AmethystParser_bind_lb_6_rb_,1,bind);  bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_fc0c,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Amethyst__(self ); FAILTEST(alt2_2);cut2=1;goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;if (cut2) goto alt1_2;it=Qnil;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; goto alt1_2; break;
case '(' ... '(':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  } break1: ptr->pos=oldpos3;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt1_2; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__pl__13b0,1,bind);  bind_aset(bind,5/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,5/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystParser_procargs(self ); FAILTEST(pass2); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_ary_new3(0); bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_call(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*klas*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt1_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1; else goto alt1_2; break;
}  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__lb_b_a4cc,1,bind);  bind_aset(bind,3/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_3); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind);  bind_aset(bind,3/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_cases(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(15);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*clas*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; it=Qnil; break;
case ':' ... ':':; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1; else goto alt2_2;cut2=1;goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;if (cut2) goto alt1_2;it=Qnil;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
 break;
}it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_5c74,1,bind);  bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
  it=Amethyst_number(self ); FAILTEST(alt3_2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind); switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... UC(255):; goto alt3_2; break;
case '.' ... '.':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos4=ptr->pos;int cut4=0;
alt4_1:;if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2; else goto alt4_2;it=rb_obj_clone(s__dot__dot__dot__2f43); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*autovar*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1; else goto alt4_3;it=rb_obj_clone(s__dot__dot__58b9); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*autovar*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto alt3_2;
 accept4:;
 break;
}it=rb_funcall(self,sy_AmethystParser__append_lp__bab9,1,bind);   it=Amethyst_number(self ); FAILTEST(alt3_2); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9e15,1,bind); it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_7_rb__dot__35cf,1,bind);  bind_aset(bind,8/*num*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=Amethyst_number(self ); FAILTEST(alt3_3); bind_aset(bind,8/*num*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto alt1_3;
 accept3:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_cb65,1,bind);  bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_obj_clone(s__lt__524a); bind_aset(bind,9/*s*/,it);
 it=bind_aget(bind,9/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=bind_aget(bind,9/*s*/);it=rb_ary_new3(0); bind_aset(bind,10/*x*/,it);
int oldpos5; int stop1=0; while(1){oldpos5=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos6=ptr->pos;int cut5=0;
alt5_1:;it=rb_obj_clone(s__gt__cedf); bind_aset(bind,9/*s*/,it);
goto alt5_2;
;goto accept6;
alt5_2: ptr->pos=oldpos6;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind); 
;goto accept6;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept6:;
 break;
case '>' ... '>':; it=rb_obj_clone(s__gt__cedf); bind_aset(bind,9/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop1=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=rb_obj_clone(s__gt__cedf); bind_aset(bind,9/*s*/,it);
goto alt6_2;
;goto accept7;
alt6_2: ptr->pos=oldpos7;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d43a,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9ca5,1,bind); 
;goto accept7;
alt6_3: ptr->pos=oldpos7;goto break1;
 accept7:;
 break;
case '>' ... '>':; it=rb_obj_clone(s__gt__cedf); bind_aset(bind,9/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop1=1; break;
} break;
} if (stop1) goto accept5; } break1: goto alt1_4; accept5:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_10_rb__ed2a,1,bind);  bind_aset(bind,13/*_result*/,it);
it=bind_aget(bind,13/*_result*/); bind_aset(bind,14/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_1a54,1,bind);  bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;if (cut1) goto fail;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... UC(255):; goto fail; break;
case 'A' ... 'Z':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__028b,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*ors*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystParser_a_eq_autova_a27c,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_sequence(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;  it=rb_obj_clone(s_); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(break1);  it=AmethystParser_sequence(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  } break1: ptr->pos=oldpos2;   it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=Qnil;it=rb_ary_new3(0); bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Or_AST_dot_c_163b,1,bind);  bind_aset(bind,7/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto fail; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto fail; break;
}  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,0/*name*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... UC(255):; goto alt1_2; break;
case '<' ... '<':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,1/*parent*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_obj_clone(s_Amethyst_fe41); bind_aset(bind,1/*parent*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'z':;case '|' ... UC(255):; goto fail; break;
case '{' ... '{':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystParser_rule(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  } break1: ptr->pos=oldpos2;   it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*rules*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto fail; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Grammar_dot__80c6,1,bind);  bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... UC(255):;   it=AmethystParser_inline_host_expr(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case '-' ... '-':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_inline_host_expr(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else goto alt1_3;  it=Amethyst_line(self ); FAILTEST(alt1_3); bind_aset(bind,1/*s*/,it);
it=rb_funcall(self,sy_AmethystParser__dq__le__dq__pl_bind_567e,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystParser_inline_host_expr(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind); int oldpos3;  while(1){oldpos3=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
case 'a' ... 'a':; int oldpos4=ptr->pos;int cut2=0;
alt2_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto alt2_2;cut2=1;goto alt2_2;
;goto accept4;
alt2_2: ptr->pos=oldpos4;if (cut2) goto break2;it=Qnil;
;goto accept4;
alt2_3: ptr->pos=oldpos4;goto break2;
 accept4:;
  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
} } break2: ptr->pos=oldpos3;   it=bind_aget(bind,1/*autovar*/); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__e4b4,1,bind);  bind_aset(bind,5/*autovar*/,it);

;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystParser_grammar(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);

;goto accept2;
alt1_3: ptr->pos=oldpos2;  it=Amethyst_spaces(self ); FAILTEST(alt1_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt1_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=AmethystParser_expression(self ); FAILTEST(alt1_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt1_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_obj_clone(s__bq__8333); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*autovar*/,it);

;goto accept2;
alt1_4: ptr->pos=oldpos2;goto break1;
 accept2:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  break;
case 'a' ... 'a':; int oldpos5=ptr->pos;int cut3=0;
alt3_1:;it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos6=ptr->pos;int cut4=0;
alt4_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto alt4_2;cut4=1;goto alt4_2;
;goto accept6;
alt4_2: ptr->pos=oldpos6;if (cut4) goto alt3_2;it=Qnil;
;goto accept6;
alt4_3: ptr->pos=oldpos6;goto alt3_2;
 accept6:;
  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind); int oldpos7;  while(1){oldpos7=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
case 'a' ... 'a':; int oldpos8=ptr->pos;int cut5=0;
alt5_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto alt5_2;cut5=1;goto alt5_2;
;goto accept8;
alt5_2: ptr->pos=oldpos8;if (cut5) goto break3;it=Qnil;
;goto accept8;
alt5_3: ptr->pos=oldpos8;goto break3;
 accept8:;
  it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__8061,1,bind);  break;
} } break3: ptr->pos=oldpos7;   it=bind_aget(bind,1/*autovar*/); bind_aset(bind,4/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_4_rb__dot__e4b4,1,bind);  bind_aset(bind,5/*autovar*/,it);

;goto accept5;
alt3_2: ptr->pos=oldpos5;  it=AmethystParser_grammar(self ); FAILTEST(alt3_3); bind_aset(bind,5/*autovar*/,it);

;goto accept5;
alt3_3: ptr->pos=oldpos5;  it=Amethyst_spaces(self ); FAILTEST(alt3_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt3_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=AmethystParser_expression(self ); FAILTEST(alt3_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt3_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_obj_clone(s__bq__8333); bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,5/*autovar*/,it);

;goto accept5;
alt3_4: ptr->pos=oldpos5;goto break1;
 accept5:;
it=rb_funcall(self,sy_AmethystParser__append_lp__81ec,1,bind);  break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,7/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_inline_host_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'z':;case '|' ... UC(255):; goto fail; break;
case '{' ... '{':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*r*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto fail; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_2_rb_,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_245f,1,bind);  bind_aset(bind,5/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(17); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*s*/);cut1=1;stop1=1;
;goto accept2;
alt1_2: ptr->pos=oldpos2;if (cut1) goto break1;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,4/*o*/,it);
it=bind_aget(bind,4/*o*/); bind_aset(bind,5/*o*/,it);
 it=bind_aget(bind,5/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_3); it=rb_obj_clone(s__d41d); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break2); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d472,1,bind);  } break2: ptr->pos=oldpos3;   it=bind_aget(bind,6/*autovar*/); bind_aset(bind,8/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_8_rb_,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,10/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_ef61,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__66a2,1,bind); 
;goto accept2;
alt1_3: ptr->pos=oldpos2;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__73f1,1,bind); 
;goto accept2;
alt1_4: ptr->pos=oldpos2;goto break1;
 accept2:;
 break;
case UC(92) ... UC(92):; int oldpos4=ptr->pos;int cut2=0;
alt2_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*s*/);cut2=1;stop1=1;
;goto accept4;
alt2_2: ptr->pos=oldpos4;if (cut2) goto break1;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,3/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,4/*o*/,it);
it=bind_aget(bind,4/*o*/); bind_aset(bind,5/*o*/,it);
 it=bind_aget(bind,5/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt2_3); it=rb_obj_clone(s__d41d); arg0=it; it=Amethyst_token(self ,arg0); FAILTEST(alt2_3);it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos5;  while(1){oldpos5=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break3); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d472,1,bind);  } break3: ptr->pos=oldpos5;   it=bind_aget(bind,6/*autovar*/); bind_aset(bind,8/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt2_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_8_rb_,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,10/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_ef61,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__66a2,1,bind); 
;goto accept4;
alt2_3: ptr->pos=oldpos4;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,14/*_result*/,it);
it=bind_aget(bind,14/*_result*/); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__80de,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__73f1,1,bind); 
;goto accept4;
alt2_4: ptr->pos=oldpos4;goto break1;
 accept4:;
 break;
} if (stop1) goto accept1; } break1: goto fail; accept1:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,16/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '?':;case 'A' ... UC(255):; goto fail; break;
case '@' ... '@':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_className(self ); FAILTEST(alt1_2); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Result_lb__le__ae0e,1,bind);  bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_name(self ); FAILTEST(alt1_3); bind_aset(bind,0/*name*/,it);
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_3); bind_aset(bind,2/*arg*/,it);
it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_20b7,1,bind);  bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt1_4;  it=AmethystParser_name(self ); FAILTEST(alt1_4); bind_aset(bind,0/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_Global_lb_b_8edb,1,bind);  bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_local(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*x*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystParser_l_eq_Local_lb__52e1,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind); it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4de3,1,bind);  break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,2/*autovar*/); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,5/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__028b,1,bind);  bind_aset(bind,6/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '<':;case '>' ... UC(255):; goto alt1_2; break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}cut1=1;goto alt1_2;
;goto accept1;
alt1_2: ptr->pos=oldpos1;if (cut1) goto fail;it=Qnil; bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_postfixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(7);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystParser_term(self ); FAILTEST(fail); bind_aset(bind,0/*from*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst__(self ); FAILTEST(alt1_2);cut1=1;goto alt1_2;
;goto accept2;
alt1_2: ptr->pos=oldpos2;if (cut1) goto break1;it=Qnil;
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case ',' ... '9':;case ';' ... '<':;case '>' ... '>':;case '@' ... 'Z':;case UC(92) ... UC(255):; goto break1; break;
case '*' ... '+':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,1/*one*/,it);
it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_33ac,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos3=ptr->pos;int cut2=0;
alt2_1:;int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystParser_key(self ); FAILTEST(alt3_2); bind_aset(bind,2/*name*/,it);

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystParser_name(self ); FAILTEST(alt3_3); bind_aset(bind,2/*name*/,it);

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto alt2_2;
 accept4:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; it=Qnil; bind_aset(bind,3/*append*/,it);
 break;
case '[' ... '[':; int oldpos5=ptr->pos;int cut4=0;
alt4_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt4_2;it=rb_obj_clone(s__lb__rb__d751); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,3/*append*/,it);

;goto accept5;
alt4_2: ptr->pos=oldpos5;it=Qnil; bind_aset(bind,3/*append*/,it);

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto alt2_2;
 accept5:;
 break;
}it=rb_funcall(self,sy_AmethystParser__at_appends_fd76,1,bind);  bind_aset(bind,0/*from*/,it);

;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystParser_inline_host_expr(self ); FAILTEST(alt2_3); bind_aset(bind,5/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_lb__Bin_6d20,1,bind);  bind_aset(bind,0/*from*/,it);

;goto accept3;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else goto break1;  it=AmethystParser_term(self ); FAILTEST(break1); bind_aset(bind,5/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Pass_lb_bin_9af8,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '?' ... '?':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_1d9d,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(break1); bind_aset(bind,5/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(break1);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto break1; break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Enter_lb_bi_68d7,1,bind);  bind_aset(bind,0/*from*/,it);
 break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*from*/); bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... '}':;case UC(127) ... UC(255):;   it=AmethystParser_postfixed(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case '&' ... '&':;case '~' ... '~':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*neg*/,it);
  it=AmethystParser_inline_host_expr(self ); FAILTEST(alt2_2); bind_aset(bind,4/*expr*/,it);
it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_4918,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*neg*/,it);
  it=AmethystParser_prefixed(self ); FAILTEST(alt2_3); bind_aset(bind,5/*m*/,it);
it=rb_funcall(self,sy_AmethystParser_Lookahea_b11c,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_postfixed(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystParser__at_ary_eq__lb__rb_,1,bind); int oldpos1;  while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_0_rb__418b,1,bind); FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystParser__at_ary_lt__lt_Ar_59e3,1,bind); 
;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystParser_procargs2(self ); FAILTEST(alt1_3);
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 } break1: ptr->pos=oldpos1;   it=rb_funcall(self,sy_AmethystParser__at_ary_ff69,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystParser_procargs2(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind);  } break1: ptr->pos=oldpos2;   it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*a*/,it);
it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_c4f3,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,5/*a*/,it);
it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_c4f3,1,bind);  bind_aset(bind,4/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(28);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '#':;case '%' ... '&':;case '*' ... '-':;case '/' ... '/':;case ';' ... 'Z':;case UC(92) ... UC(92):;case '^' ... '^':;case '|' ... '|':;case '~' ... UC(255):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break1: ptr->pos=oldpos2;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rp__9371); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_3);  it=Amethyst_spaces(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break2: ptr->pos=oldpos3;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rb__0fbd); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_4);  it=Amethyst_spaces(self ); FAILTEST(alt1_4);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break3: ptr->pos=oldpos4;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt1_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
 it=bind_aget(bind,11/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_5);it=bind_aget(bind,11/*s*/);it=rb_ary_new3(0); bind_aset(bind,12/*x*/,it);
int oldpos5; int stop4=0; while(1){oldpos5=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos6=ptr->pos;int cut2=0;
alt2_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt2_2;
;goto accept6;
alt2_2: ptr->pos=oldpos6;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt2_3);  it=Amethyst_spaces(self ); FAILTEST(alt2_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos7;  while(1){oldpos7=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break5); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break5: ptr->pos=oldpos7;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt2_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept6;
alt2_3: ptr->pos=oldpos6;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept6;
alt2_4: ptr->pos=oldpos6;goto break4;
 accept6:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop4=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos8=ptr->pos;int cut3=0;
alt3_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt3_2;
;goto accept8;
alt3_2: ptr->pos=oldpos8;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt3_3);  it=Amethyst_spaces(self ); FAILTEST(alt3_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos9;  while(1){oldpos9=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break6); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break6: ptr->pos=oldpos9;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt3_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept8;
alt3_3: ptr->pos=oldpos8;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a2a3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt3_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept8;
alt3_4: ptr->pos=oldpos8;goto break4;
 accept8:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop4=1; break;
} break;
} if (stop4) goto accept5; } break4: goto alt1_5; accept5:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_12_rb__b690,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__b1e7,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_5: ptr->pos=oldpos1;if (cut1) goto fail;int oldpos10=ptr->pos;int cut4=0;
alt4_1:;  it=Amethyst_spaces(self ); FAILTEST(alt4_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt4_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt4_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,19/*_result*/,it);
it=bind_aget(bind,19/*_result*/); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept10;
alt4_2: ptr->pos=oldpos10;it=Qnil;
;goto accept10;
alt4_3: ptr->pos=oldpos10;goto alt1_6;
 accept10:;
int oldpos11=ptr->pos;int cut5=0;
alt5_1:;  it=Amethyst__(self ); FAILTEST(alt5_2);cut5=1;goto alt5_2;
;goto accept11;
alt5_2: ptr->pos=oldpos11;if (cut5) goto alt1_6;it=Qnil;
;goto accept11;
alt5_3: ptr->pos=oldpos11;goto alt1_6;
 accept11:;
  it=AmethystParser_name(self ); FAILTEST(alt1_6); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_6: ptr->pos=oldpos1;  it=AmethystParser_key(self ); FAILTEST(alt1_7); bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_7: ptr->pos=oldpos1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_8: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case UC(34) ... UC(34):;case '(' ... ')':;case '[' ... '[':;case ']' ... ']':;case '{' ... '{':;case '}' ... '}':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos12=ptr->pos;int cut6=0;
alt6_1:;it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt6_2);  it=Amethyst_spaces(self ); FAILTEST(alt6_2);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos13;  while(1){oldpos13=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break7); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break7: ptr->pos=oldpos13;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rp__9371); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt6_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept12;
alt6_2: ptr->pos=oldpos12;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt6_3);  it=Amethyst_spaces(self ); FAILTEST(alt6_3);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos14;  while(1){oldpos14=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break8); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break8: ptr->pos=oldpos14;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rb__0fbd); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt6_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept12;
alt6_3: ptr->pos=oldpos12;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt6_4);  it=Amethyst_spaces(self ); FAILTEST(alt6_4);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos15;  while(1){oldpos15=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break9); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break9: ptr->pos=oldpos15;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt6_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept12;
alt6_4: ptr->pos=oldpos12;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
 it=bind_aget(bind,11/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt6_5);it=bind_aget(bind,11/*s*/);it=rb_ary_new3(0); bind_aset(bind,12/*x*/,it);
int oldpos16; int stop10=0; while(1){oldpos16=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos17=ptr->pos;int cut7=0;
alt7_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt7_2;
;goto accept17;
alt7_2: ptr->pos=oldpos17;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt7_3);  it=Amethyst_spaces(self ); FAILTEST(alt7_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos18;  while(1){oldpos18=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break11); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break11: ptr->pos=oldpos18;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt7_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept17;
alt7_3: ptr->pos=oldpos17;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt7_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept17;
alt7_4: ptr->pos=oldpos17;goto break10;
 accept17:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut6=1;stop10=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos19=ptr->pos;int cut8=0;
alt8_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt8_2;
;goto accept19;
alt8_2: ptr->pos=oldpos19;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt8_3);  it=Amethyst_spaces(self ); FAILTEST(alt8_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos20;  while(1){oldpos20=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break12); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break12: ptr->pos=oldpos20;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt8_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept19;
alt8_3: ptr->pos=oldpos19;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a2a3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt8_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept19;
alt8_4: ptr->pos=oldpos19;goto break10;
 accept19:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut6=1;stop10=1; break;
} break;
} if (stop10) goto accept16; } break10: goto alt6_5; accept16:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_12_rb__b690,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__b1e7,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept12;
alt6_5: ptr->pos=oldpos12;if (cut6) goto fail;int oldpos21=ptr->pos;int cut9=0;
alt9_1:;  it=Amethyst_spaces(self ); FAILTEST(alt9_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt9_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt9_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,19/*_result*/,it);
it=bind_aget(bind,19/*_result*/); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept21;
alt9_2: ptr->pos=oldpos21;it=Qnil;
;goto accept21;
alt9_3: ptr->pos=oldpos21;goto alt6_6;
 accept21:;
int oldpos22=ptr->pos;int cut10=0;
alt10_1:;  it=Amethyst__(self ); FAILTEST(alt10_2);cut10=1;goto alt10_2;
;goto accept22;
alt10_2: ptr->pos=oldpos22;if (cut10) goto alt6_6;it=Qnil;
;goto accept22;
alt10_3: ptr->pos=oldpos22;goto alt6_6;
 accept22:;
  it=AmethystParser_name(self ); FAILTEST(alt6_6); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept12;
alt6_6: ptr->pos=oldpos12;  it=AmethystParser_key(self ); FAILTEST(alt6_7); bind_aset(bind,9/*_result*/,it);

;goto accept12;
alt6_7: ptr->pos=oldpos12;goto fail;
 accept12:;
 break;
case '$' ... '$':;case ':' ... ':':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos23=ptr->pos;int cut11=0;
alt11_1:;it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt11_2);  it=Amethyst_spaces(self ); FAILTEST(alt11_2);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos24;  while(1){oldpos24=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break13); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break13: ptr->pos=oldpos24;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rp__9371); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt11_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept23;
alt11_2: ptr->pos=oldpos23;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt11_3);  it=Amethyst_spaces(self ); FAILTEST(alt11_3);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos25;  while(1){oldpos25=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break14); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break14: ptr->pos=oldpos25;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rb__0fbd); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt11_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept23;
alt11_3: ptr->pos=oldpos23;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt11_4);  it=Amethyst_spaces(self ); FAILTEST(alt11_4);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos26;  while(1){oldpos26=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break15); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break15: ptr->pos=oldpos26;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt11_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept23;
alt11_4: ptr->pos=oldpos23;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
 it=bind_aget(bind,11/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt11_5);it=bind_aget(bind,11/*s*/);it=rb_ary_new3(0); bind_aset(bind,12/*x*/,it);
int oldpos27; int stop16=0; while(1){oldpos27=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos28=ptr->pos;int cut12=0;
alt12_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt12_2;
;goto accept28;
alt12_2: ptr->pos=oldpos28;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt12_3);  it=Amethyst_spaces(self ); FAILTEST(alt12_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos29;  while(1){oldpos29=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break17); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break17: ptr->pos=oldpos29;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt12_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept28;
alt12_3: ptr->pos=oldpos28;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt12_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept28;
alt12_4: ptr->pos=oldpos28;goto break16;
 accept28:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut11=1;stop16=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos30=ptr->pos;int cut13=0;
alt13_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt13_2;
;goto accept30;
alt13_2: ptr->pos=oldpos30;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt13_3);  it=Amethyst_spaces(self ); FAILTEST(alt13_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos31;  while(1){oldpos31=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break18); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break18: ptr->pos=oldpos31;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt13_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept30;
alt13_3: ptr->pos=oldpos30;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a2a3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt13_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept30;
alt13_4: ptr->pos=oldpos30;goto break16;
 accept30:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut11=1;stop16=1; break;
} break;
} if (stop16) goto accept27; } break16: goto alt11_5; accept27:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_12_rb__b690,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__b1e7,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept23;
alt11_5: ptr->pos=oldpos23;if (cut11) goto fail;int oldpos32=ptr->pos;int cut14=0;
alt14_1:;  it=Amethyst_spaces(self ); FAILTEST(alt14_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt14_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt14_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,19/*_result*/,it);
it=bind_aget(bind,19/*_result*/); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept32;
alt14_2: ptr->pos=oldpos32;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,22/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a273,1,bind); 
;goto accept32;
alt14_3: ptr->pos=oldpos32;goto alt11_6;
 accept32:;
int oldpos33=ptr->pos;int cut15=0;
alt15_1:;  it=Amethyst__(self ); FAILTEST(alt15_2);cut15=1;goto alt15_2;
;goto accept33;
alt15_2: ptr->pos=oldpos33;if (cut15) goto alt11_6;it=Qnil;
;goto accept33;
alt15_3: ptr->pos=oldpos33;goto alt11_6;
 accept33:;
  it=AmethystParser_name(self ); FAILTEST(alt11_6); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept23;
alt11_6: ptr->pos=oldpos23;  it=AmethystParser_key(self ); FAILTEST(alt11_7); bind_aset(bind,9/*_result*/,it);

;goto accept23;
alt11_7: ptr->pos=oldpos23;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,9/*_result*/,it);

;goto accept23;
alt11_8: ptr->pos=oldpos23;goto fail;
 accept23:;
 break;
case UC(39) ... UC(39):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos34=ptr->pos;int cut16=0;
alt16_1:;it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt16_2);  it=Amethyst_spaces(self ); FAILTEST(alt16_2);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos35;  while(1){oldpos35=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break19); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break19: ptr->pos=oldpos35;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rp__9371); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt16_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept34;
alt16_2: ptr->pos=oldpos34;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt16_3);  it=Amethyst_spaces(self ); FAILTEST(alt16_3);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos36;  while(1){oldpos36=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break20); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break20: ptr->pos=oldpos36;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rb__0fbd); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt16_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept34;
alt16_3: ptr->pos=oldpos34;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt16_4);  it=Amethyst_spaces(self ); FAILTEST(alt16_4);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos37;  while(1){oldpos37=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break21); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break21: ptr->pos=oldpos37;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt16_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept34;
alt16_4: ptr->pos=oldpos34;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
 it=bind_aget(bind,11/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt16_5);it=bind_aget(bind,11/*s*/);it=rb_ary_new3(0); bind_aset(bind,12/*x*/,it);
int oldpos38; int stop22=0; while(1){oldpos38=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos39=ptr->pos;int cut17=0;
alt17_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt17_2;
;goto accept39;
alt17_2: ptr->pos=oldpos39;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt17_3);  it=Amethyst_spaces(self ); FAILTEST(alt17_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos40;  while(1){oldpos40=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break23); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break23: ptr->pos=oldpos40;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt17_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept39;
alt17_3: ptr->pos=oldpos39;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt17_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept39;
alt17_4: ptr->pos=oldpos39;goto break22;
 accept39:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut16=1;stop22=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos41=ptr->pos;int cut18=0;
alt18_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt18_2;
;goto accept41;
alt18_2: ptr->pos=oldpos41;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt18_3);  it=Amethyst_spaces(self ); FAILTEST(alt18_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos42;  while(1){oldpos42=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break24); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break24: ptr->pos=oldpos42;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt18_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept41;
alt18_3: ptr->pos=oldpos41;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a2a3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt18_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept41;
alt18_4: ptr->pos=oldpos41;goto break22;
 accept41:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut16=1;stop22=1; break;
} break;
} if (stop22) goto accept38; } break22: goto alt16_5; accept38:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_12_rb__b690,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__b1e7,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept34;
alt16_5: ptr->pos=oldpos34;if (cut16) goto fail;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); bind_aset(bind,23/*x*/,it);
int oldpos43; int stop25=0; while(1){oldpos43=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break25); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__89bf,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut16=1;stop25=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,25/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b24c,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break25); bind_aset(bind,24/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__89bf,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut16=1;stop25=1; break;
} break;
} if (stop25) goto accept43; } break25: goto alt16_6; accept43:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_23_rb__7c7a,1,bind);  bind_aset(bind,26/*_result*/,it);
it=bind_aget(bind,26/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__dq__41d8,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept34;
alt16_6: ptr->pos=oldpos34;if (cut16) goto fail;int oldpos44=ptr->pos;int cut19=0;
alt19_1:;  it=Amethyst_spaces(self ); FAILTEST(alt19_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt19_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt19_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,19/*_result*/,it);
it=bind_aget(bind,19/*_result*/); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept44;
alt19_2: ptr->pos=oldpos44;it=Qnil;
;goto accept44;
alt19_3: ptr->pos=oldpos44;goto alt16_7;
 accept44:;
int oldpos45=ptr->pos;int cut20=0;
alt20_1:;  it=Amethyst__(self ); FAILTEST(alt20_2);cut20=1;goto alt20_2;
;goto accept45;
alt20_2: ptr->pos=oldpos45;if (cut20) goto alt16_7;it=Qnil;
;goto accept45;
alt20_3: ptr->pos=oldpos45;goto alt16_7;
 accept45:;
  it=AmethystParser_name(self ); FAILTEST(alt16_7); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept34;
alt16_7: ptr->pos=oldpos34;  it=AmethystParser_key(self ); FAILTEST(alt16_8); bind_aset(bind,9/*_result*/,it);

;goto accept34;
alt16_8: ptr->pos=oldpos34;goto fail;
 accept34:;
 break;
case '.' ... '.':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos46=ptr->pos;int cut21=0;
alt21_1:;it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt21_2);  it=Amethyst_spaces(self ); FAILTEST(alt21_2);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos47;  while(1){oldpos47=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break26); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break26: ptr->pos=oldpos47;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rp__9371); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt21_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept46;
alt21_2: ptr->pos=oldpos46;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt21_3);  it=Amethyst_spaces(self ); FAILTEST(alt21_3);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos48;  while(1){oldpos48=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break27); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break27: ptr->pos=oldpos48;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rb__0fbd); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt21_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept46;
alt21_3: ptr->pos=oldpos46;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt21_4);  it=Amethyst_spaces(self ); FAILTEST(alt21_4);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos49;  while(1){oldpos49=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break28); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break28: ptr->pos=oldpos49;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt21_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept46;
alt21_4: ptr->pos=oldpos46;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
 it=bind_aget(bind,11/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt21_5);it=bind_aget(bind,11/*s*/);it=rb_ary_new3(0); bind_aset(bind,12/*x*/,it);
int oldpos50; int stop29=0; while(1){oldpos50=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos51=ptr->pos;int cut22=0;
alt22_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt22_2;
;goto accept51;
alt22_2: ptr->pos=oldpos51;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt22_3);  it=Amethyst_spaces(self ); FAILTEST(alt22_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos52;  while(1){oldpos52=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break30); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break30: ptr->pos=oldpos52;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt22_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept51;
alt22_3: ptr->pos=oldpos51;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt22_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept51;
alt22_4: ptr->pos=oldpos51;goto break29;
 accept51:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut21=1;stop29=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos53=ptr->pos;int cut23=0;
alt23_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt23_2;
;goto accept53;
alt23_2: ptr->pos=oldpos53;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt23_3);  it=Amethyst_spaces(self ); FAILTEST(alt23_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos54;  while(1){oldpos54=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break31); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break31: ptr->pos=oldpos54;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt23_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept53;
alt23_3: ptr->pos=oldpos53;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a2a3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt23_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept53;
alt23_4: ptr->pos=oldpos53;goto break29;
 accept53:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut21=1;stop29=1; break;
} break;
} if (stop29) goto accept50; } break29: goto alt21_5; accept50:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_12_rb__b690,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__b1e7,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept46;
alt21_5: ptr->pos=oldpos46;if (cut21) goto fail;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos55=ptr->pos;int cut24=0;
alt24_1:;if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2; else goto alt24_2;it=rb_obj_clone(s__dot__dot__dot__2f43); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept55;
alt24_2: ptr->pos=oldpos55;if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1; else goto alt24_3;it=rb_obj_clone(s__dot__dot__58b9); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept55;
alt24_3: ptr->pos=oldpos55;goto alt21_6;
 accept55:;

;goto accept46;
alt21_6: ptr->pos=oldpos46;int oldpos56=ptr->pos;int cut25=0;
alt25_1:;  it=Amethyst_spaces(self ); FAILTEST(alt25_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt25_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt25_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,19/*_result*/,it);
it=bind_aget(bind,19/*_result*/); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept56;
alt25_2: ptr->pos=oldpos56;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,22/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a273,1,bind); 
;goto accept56;
alt25_3: ptr->pos=oldpos56;goto alt21_7;
 accept56:;
int oldpos57=ptr->pos;int cut26=0;
alt26_1:;  it=Amethyst__(self ); FAILTEST(alt26_2);cut26=1;goto alt26_2;
;goto accept57;
alt26_2: ptr->pos=oldpos57;if (cut26) goto alt21_7;it=Qnil;
;goto accept57;
alt26_3: ptr->pos=oldpos57;goto alt21_7;
 accept57:;
  it=AmethystParser_name(self ); FAILTEST(alt21_7); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept46;
alt21_7: ptr->pos=oldpos46;  it=AmethystParser_key(self ); FAILTEST(alt21_8); bind_aset(bind,9/*_result*/,it);

;goto accept46;
alt21_8: ptr->pos=oldpos46;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,9/*_result*/,it);

;goto accept46;
alt21_9: ptr->pos=oldpos46;goto fail;
 accept46:;
 break;
case '0' ... '9':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos58=ptr->pos;int cut27=0;
alt27_1:;it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt27_2);  it=Amethyst_spaces(self ); FAILTEST(alt27_2);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos59;  while(1){oldpos59=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break32); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break32: ptr->pos=oldpos59;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rp__9371); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt27_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_2: ptr->pos=oldpos58;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt27_3);  it=Amethyst_spaces(self ); FAILTEST(alt27_3);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos60;  while(1){oldpos60=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break33); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break33: ptr->pos=oldpos60;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rb__0fbd); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt27_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_3: ptr->pos=oldpos58;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt27_4);  it=Amethyst_spaces(self ); FAILTEST(alt27_4);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos61;  while(1){oldpos61=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break34); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break34: ptr->pos=oldpos61;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt27_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_4: ptr->pos=oldpos58;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
 it=bind_aget(bind,11/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt27_5);it=bind_aget(bind,11/*s*/);it=rb_ary_new3(0); bind_aset(bind,12/*x*/,it);
int oldpos62; int stop35=0; while(1){oldpos62=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos63=ptr->pos;int cut28=0;
alt28_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt28_2;
;goto accept63;
alt28_2: ptr->pos=oldpos63;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt28_3);  it=Amethyst_spaces(self ); FAILTEST(alt28_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos64;  while(1){oldpos64=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break36); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break36: ptr->pos=oldpos64;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt28_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept63;
alt28_3: ptr->pos=oldpos63;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt28_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept63;
alt28_4: ptr->pos=oldpos63;goto break35;
 accept63:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut27=1;stop35=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos65=ptr->pos;int cut29=0;
alt29_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt29_2;
;goto accept65;
alt29_2: ptr->pos=oldpos65;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt29_3);  it=Amethyst_spaces(self ); FAILTEST(alt29_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos66;  while(1){oldpos66=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break37); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break37: ptr->pos=oldpos66;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt29_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept65;
alt29_3: ptr->pos=oldpos65;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a2a3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt29_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept65;
alt29_4: ptr->pos=oldpos65;goto break35;
 accept65:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut27=1;stop35=1; break;
} break;
} if (stop35) goto accept62; } break35: goto alt27_5; accept62:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_12_rb__b690,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__b1e7,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_5: ptr->pos=oldpos58;if (cut27) goto fail;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,27/*e*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... UC(255):; goto alt27_6; break;
case '<' ... '<':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1; else goto alt27_6; break;
}it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_27_275f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_6: ptr->pos=oldpos58;int oldpos67=ptr->pos;int cut30=0;
alt30_1:;  it=Amethyst_spaces(self ); FAILTEST(alt30_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt30_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt30_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,19/*_result*/,it);
it=bind_aget(bind,19/*_result*/); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept67;
alt30_2: ptr->pos=oldpos67;it=Qnil;
;goto accept67;
alt30_3: ptr->pos=oldpos67;goto alt27_7;
 accept67:;
int oldpos68=ptr->pos;int cut31=0;
alt31_1:;  it=Amethyst__(self ); FAILTEST(alt31_2);cut31=1;goto alt31_2;
;goto accept68;
alt31_2: ptr->pos=oldpos68;if (cut31) goto alt27_7;it=Qnil;
;goto accept68;
alt31_3: ptr->pos=oldpos68;goto alt27_7;
 accept68:;
  it=AmethystParser_name(self ); FAILTEST(alt27_7); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_7: ptr->pos=oldpos58;  it=AmethystParser_key(self ); FAILTEST(alt27_8); bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_8: ptr->pos=oldpos58;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,9/*_result*/,it);

;goto accept58;
alt27_9: ptr->pos=oldpos58;goto fail;
 accept58:;
 break;
case '`' ... '`':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos69=ptr->pos;int cut32=0;
alt32_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt32_2); bind_aset(bind,27/*e*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt32_2; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Lambda_lb___e59d,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept69;
alt32_2: ptr->pos=oldpos69;it=rb_obj_clone(s__rp__9371); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lp__84c4); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt32_3);  it=Amethyst_spaces(self ); FAILTEST(alt32_3);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos70;  while(1){oldpos70=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break38); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break38: ptr->pos=oldpos70;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rp__9371); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt32_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept69;
alt32_3: ptr->pos=oldpos69;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,2/*o*/,it);
 it=rb_obj_clone(s__lb__8154); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt32_4);  it=Amethyst_spaces(self ); FAILTEST(alt32_4);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos71;  while(1){oldpos71=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break39); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break39: ptr->pos=oldpos71;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__rb__0fbd); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt32_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept69;
alt32_4: ptr->pos=oldpos69;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,2/*o*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt32_5);  it=Amethyst_spaces(self ); FAILTEST(alt32_5);it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos72;  while(1){oldpos72=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break40); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break40: ptr->pos=oldpos72;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt32_5);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*_result*/,it);

;goto accept69;
alt32_5: ptr->pos=oldpos69;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
 it=bind_aget(bind,11/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt32_6);it=bind_aget(bind,11/*s*/);it=rb_ary_new3(0); bind_aset(bind,12/*x*/,it);
int oldpos73; int stop41=0; while(1){oldpos73=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos74=ptr->pos;int cut33=0;
alt33_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt33_2;
;goto accept74;
alt33_2: ptr->pos=oldpos74;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt33_3);  it=Amethyst_spaces(self ); FAILTEST(alt33_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos75;  while(1){oldpos75=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break42); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break42: ptr->pos=oldpos75;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt33_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept74;
alt33_3: ptr->pos=oldpos74;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt33_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept74;
alt33_4: ptr->pos=oldpos74;goto break41;
 accept74:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut32=1;stop41=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; int oldpos76=ptr->pos;int cut34=0;
alt34_1:;it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
goto alt34_2;
;goto accept76;
alt34_2: ptr->pos=oldpos76;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,1/*c*/,it);
it=rb_funcall(self,sy_AmethystParser__qu__sh__le__qu__9722,1,bind);  bind_aset(bind,2/*o*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,10/*o*/,it);
 it=bind_aget(bind,10/*o*/); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt34_3);  it=Amethyst_spaces(self ); FAILTEST(alt34_3);it=rb_obj_clone(s__d41d); bind_aset(bind,11/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos77;  while(1){oldpos77=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break43); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  } break43: ptr->pos=oldpos77;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,5/*r*/,it);
 it=rb_obj_clone(s__re__cbb1); arg0=it; it=Amethyst_seq(self ,arg0); FAILTEST(alt34_3);it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb_,1,bind);  bind_aset(bind,6/*_result*/,it);
it=bind_aget(bind,6/*_result*/); bind_aset(bind,7/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_189a,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__7140,1,bind); 
;goto accept76;
alt34_3: ptr->pos=oldpos76;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a2a3,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt34_4); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__984f,1,bind); 
;goto accept76;
alt34_4: ptr->pos=oldpos76;goto break41;
 accept76:;
 break;
case UC(34) ... UC(34):; it=rb_obj_clone(s__bs__dq__3bd8); bind_aset(bind,11/*s*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut32=1;stop41=1; break;
} break;
} if (stop41) goto accept73; } break41: goto alt32_6; accept73:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_12_rb__b690,1,bind);  bind_aset(bind,17/*_result*/,it);
it=bind_aget(bind,17/*_result*/); bind_aset(bind,18/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__b1e7,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept69;
alt32_6: ptr->pos=oldpos69;if (cut32) goto fail;int oldpos78=ptr->pos;int cut35=0;
alt35_1:;  it=Amethyst_spaces(self ); FAILTEST(alt35_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt35_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt35_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,15/*_result*/,it);
it=bind_aget(bind,15/*_result*/); bind_aset(bind,19/*_result*/,it);
it=bind_aget(bind,19/*_result*/); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept78;
alt35_2: ptr->pos=oldpos78;it=Qnil;
;goto accept78;
alt35_3: ptr->pos=oldpos78;goto alt32_7;
 accept78:;
int oldpos79=ptr->pos;int cut36=0;
alt36_1:;  it=Amethyst__(self ); FAILTEST(alt36_2);cut36=1;goto alt36_2;
;goto accept79;
alt36_2: ptr->pos=oldpos79;if (cut36) goto alt32_7;it=Qnil;
;goto accept79;
alt36_3: ptr->pos=oldpos79;goto alt32_7;
 accept79:;
  it=AmethystParser_name(self ); FAILTEST(alt32_7); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2bc4,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,9/*_result*/,it);

;goto accept69;
alt32_7: ptr->pos=oldpos69;  it=AmethystParser_key(self ); FAILTEST(alt32_8); bind_aset(bind,9/*_result*/,it);

;goto accept69;
alt32_8: ptr->pos=oldpos69;goto fail;
 accept69:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind); it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind);  bind_aset(bind,0/*bnding*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); bind_aset(bind,1/*name*/,it);
  it=AmethystParser_ruleargs(self ); FAILTEST(fail); bind_aset(bind,2/*args*/,it);
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '<':;case '>' ... UC(255):; goto fail; break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=AmethystParser_expression(self ); FAILTEST(fail); bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__body_lp_bi_152d,1,bind);  bind_aset(bind,3/*body*/,it);
it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind);  bind_aset(bind,4/*locals*/,it);
it=rb_funcall(self,sy_AmethystParser_bind_lb_3_rb__eq__bbe1,1,bind); it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_e3af,1,bind);  bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystParser_argsOpt(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,0/*autovar*/);ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; it=ame_curobj2(ptr)               ;ptr->pos++; bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,4/*name*/,it);
it=rb_funcall(self,sy_AmethystParser_local_lp_bi_4bf2,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__9e15,1,bind);  break;
case 1/*Object*/:; goto break1; break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,2/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_nr(self ); FAILTEST(break1);  it=Amethyst_spaces(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__cbd1,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*ary*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_dot_crea_abce,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(14);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '&':;case ')' ... '-':;case '/' ... 'Z':;case UC(92) ... 'a':;case 'c' ... 'm':;case 'o' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_cases(self ); FAILTEST(alt1_2); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_call(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;int oldpos2=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject1; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ptr->pos=oldpos2; if (x==0) goto alt1_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;  it=AmethystParser_key(self ); FAILTEST(alt1_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_5: ptr->pos=oldpos1;  it=AmethystParser_host_expr(self ); FAILTEST(alt1_6); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_6: ptr->pos=oldpos1;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_7);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt1_7); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_7: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 'n' ... 'n':; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='s'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='e'&&ame_curstr2(ptr)[4]=='d'&&ame_curstr2(ptr)[5]=='(')  ptr->pos+=6; else goto alt2_2;  it=AmethystParser_expression(self ); FAILTEST(alt2_2); bind_aset(bind,4/*expr*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt2_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt2_2; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Nested_lb_b_ab2c,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystParser_cases(self ); FAILTEST(alt2_3); bind_aset(bind,0/*_result*/,it);

;goto accept3;
alt2_3: ptr->pos=oldpos3;  it=AmethystParser_call(self ); FAILTEST(alt2_4); bind_aset(bind,0/*_result*/,it);

;goto accept3;
alt2_4: ptr->pos=oldpos3;int oldpos4=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject2; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept4;  reject2: x=0; accept4: it=Qnil; ptr->pos=oldpos4; if (x==0) goto alt2_5;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept3;
alt2_5: ptr->pos=oldpos3;  it=AmethystParser_key(self ); FAILTEST(alt2_6); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept3;
alt2_6: ptr->pos=oldpos3;  it=AmethystParser_host_expr(self ); FAILTEST(alt2_7); bind_aset(bind,0/*_result*/,it);

;goto accept3;
alt2_7: ptr->pos=oldpos3;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_8);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt2_8); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept3;
alt2_8: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case UC(34) ... UC(34):; int oldpos5=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystParser_cases(self ); FAILTEST(alt3_2); bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_2: ptr->pos=oldpos5;  it=AmethystParser_call(self ); FAILTEST(alt3_3); bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_3: ptr->pos=oldpos5;int oldpos6=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject3; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept6;  reject3: x=0; accept6: it=Qnil; ptr->pos=oldpos6; if (x==0) goto alt3_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_4: ptr->pos=oldpos5;  it=AmethystParser_key(self ); FAILTEST(alt3_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_5: ptr->pos=oldpos5;  it=AmethystParser_host_expr(self ); FAILTEST(alt3_6); bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_6: ptr->pos=oldpos5;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); bind_aset(bind,5/*x*/,it);
int oldpos7; int stop1=0; while(1){oldpos7=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6f56,1,bind);  break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut3=1;stop1=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2d45,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6f56,1,bind);  break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut3=1;stop1=1; break;
} break;
} if (stop1) goto accept7; } break1: goto alt3_7; accept7:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__bb1e,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_b788,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_7: ptr->pos=oldpos5;if (cut3) goto fail;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_8);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt3_8); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_8: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case UC(39) ... UC(39):; int oldpos8=ptr->pos;int cut4=0;
alt4_1:;  it=AmethystParser_cases(self ); FAILTEST(alt4_2); bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_2: ptr->pos=oldpos8;  it=AmethystParser_call(self ); FAILTEST(alt4_3); bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_3: ptr->pos=oldpos8;int oldpos9=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject4; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept9;  reject4: x=0; accept9: it=Qnil; ptr->pos=oldpos9; if (x==0) goto alt4_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_4: ptr->pos=oldpos8;  it=AmethystParser_key(self ); FAILTEST(alt4_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_5: ptr->pos=oldpos8;  it=AmethystParser_host_expr(self ); FAILTEST(alt4_6); bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_6: ptr->pos=oldpos8;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); bind_aset(bind,5/*x*/,it);
int oldpos10; int stop2=0; while(1){oldpos10=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6f56,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut4=1;stop2=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__2d45,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6f56,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut4=1;stop2=1; break;
} break;
} if (stop2) goto accept10; } break2: goto alt4_7; accept10:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_5_rb__dot__bb1e,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_7f45,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_7: ptr->pos=oldpos8;if (cut4) goto fail;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt4_8);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt4_8); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_8: ptr->pos=oldpos8;goto fail;
 accept8:;
 break;
case '(' ... '(':; int oldpos11=ptr->pos;int cut5=0;
alt5_1:;  it=AmethystParser_cases(self ); FAILTEST(alt5_2); bind_aset(bind,0/*_result*/,it);

;goto accept11;
alt5_2: ptr->pos=oldpos11;  it=AmethystParser_call(self ); FAILTEST(alt5_3); bind_aset(bind,0/*_result*/,it);

;goto accept11;
alt5_3: ptr->pos=oldpos11;int oldpos12=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject5; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept12;  reject5: x=0; accept12: it=Qnil; ptr->pos=oldpos12; if (x==0) goto alt5_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept11;
alt5_4: ptr->pos=oldpos11;  it=AmethystParser_key(self ); FAILTEST(alt5_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept11;
alt5_5: ptr->pos=oldpos11;  it=AmethystParser_host_expr(self ); FAILTEST(alt5_6); bind_aset(bind,0/*_result*/,it);

;goto accept11;
alt5_6: ptr->pos=oldpos11;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt5_7);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt5_7); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept11;
alt5_7: ptr->pos=oldpos11;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt5_8); bind_aset(bind,10/*x*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt5_8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt5_8; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; it=Qnil;it=bind_aget(bind,10/*x*/); bind_aset(bind,0/*_result*/,it);
 break;
case '[' ... '[':; int oldpos13=ptr->pos;int cut6=0;
alt6_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt6_2;it=bind_aget(bind,10/*x*/); bind_aset(bind,11/*ors*/,it);
it=rb_funcall(self,sy_AmethystParser_a_eq_autova_aaba,1,bind);  bind_aset(bind,12/*_result*/,it);
it=bind_aget(bind,12/*_result*/); bind_aset(bind,0/*_result*/,it);

;goto accept13;
alt6_2: ptr->pos=oldpos13;it=Qnil;it=bind_aget(bind,10/*x*/); bind_aset(bind,0/*_result*/,it);

;goto accept13;
alt6_3: ptr->pos=oldpos13;goto alt5_8;
 accept13:;
 break;
}
;goto accept11;
alt5_8: ptr->pos=oldpos11;goto fail;
 accept11:;
 break;
case '.' ... '.':; int oldpos14=ptr->pos;int cut7=0;
alt7_1:;  it=AmethystParser_cases(self ); FAILTEST(alt7_2); bind_aset(bind,0/*_result*/,it);

;goto accept14;
alt7_2: ptr->pos=oldpos14;  it=AmethystParser_call(self ); FAILTEST(alt7_3); bind_aset(bind,0/*_result*/,it);

;goto accept14;
alt7_3: ptr->pos=oldpos14;int oldpos15=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject6; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept15;  reject6: x=0; accept15: it=Qnil; ptr->pos=oldpos15; if (x==0) goto alt7_4;int oldpos16=ptr->pos;int cut8=0;
alt8_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;
;goto accept16;
alt8_2: ptr->pos=oldpos16;it=Qnil;
;goto accept16;
alt8_3: ptr->pos=oldpos16;goto alt7_4;
 accept16:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept14;
alt7_4: ptr->pos=oldpos14;  it=AmethystParser_key(self ); FAILTEST(alt7_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept14;
alt7_5: ptr->pos=oldpos14;  it=AmethystParser_host_expr(self ); FAILTEST(alt7_6); bind_aset(bind,0/*_result*/,it);

;goto accept14;
alt7_6: ptr->pos=oldpos14;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt7_7);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt7_7); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept14;
alt7_7: ptr->pos=oldpos14;goto fail;
 accept14:;
 break;
case '[' ... '[':; int oldpos17=ptr->pos;int cut9=0;
alt9_1:;  it=AmethystParser_cases(self ); FAILTEST(alt9_2); bind_aset(bind,0/*_result*/,it);

;goto accept17;
alt9_2: ptr->pos=oldpos17;  it=AmethystParser_call(self ); FAILTEST(alt9_3); bind_aset(bind,0/*_result*/,it);

;goto accept17;
alt9_3: ptr->pos=oldpos17;int oldpos18=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject7; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept18;  reject7: x=0; accept18: it=Qnil; ptr->pos=oldpos18; if (x==0) goto alt9_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept17;
alt9_4: ptr->pos=oldpos17;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt9_5); bind_aset(bind,13/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt9_5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto alt9_5; break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Enter_lb_Ap_57b6,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept17;
alt9_5: ptr->pos=oldpos17;  it=AmethystParser_key(self ); FAILTEST(alt9_6); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept17;
alt9_6: ptr->pos=oldpos17;  it=AmethystParser_host_expr(self ); FAILTEST(alt9_7); bind_aset(bind,0/*_result*/,it);

;goto accept17;
alt9_7: ptr->pos=oldpos17;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt9_8);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt9_8); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept17;
alt9_8: ptr->pos=oldpos17;goto fail;
 accept17:;
 break;
case 'b' ... 'b':; int oldpos19=ptr->pos;int cut10=0;
alt10_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='k')  ptr->pos+=4; else goto alt10_2;it=rb_funcall(self,sy_AmethystParser_Seq_lb_Cut_lb__3505,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_2: ptr->pos=oldpos19;  it=AmethystParser_cases(self ); FAILTEST(alt10_3); bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_3: ptr->pos=oldpos19;  it=AmethystParser_call(self ); FAILTEST(alt10_4); bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_4: ptr->pos=oldpos19;int oldpos20=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject8; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept20;  reject8: x=0; accept20: it=Qnil; ptr->pos=oldpos20; if (x==0) goto alt10_5;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_5: ptr->pos=oldpos19;  it=AmethystParser_key(self ); FAILTEST(alt10_6); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_6: ptr->pos=oldpos19;  it=AmethystParser_host_expr(self ); FAILTEST(alt10_7); bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_7: ptr->pos=oldpos19;it=rb_funcall(self,sy_AmethystParser__dq__sh__dq__b65f,1,bind);  bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt10_8);it=bind_aget(bind,2/*s*/);  it=Amethyst_line(self ); FAILTEST(alt10_8); bind_aset(bind,3/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__f189,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_8: ptr->pos=oldpos19;goto fail;
 accept19:;
 break;
}
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    s_=rb_str_new2("|");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_);
s_Amethyst_fe41=rb_str_new2("Amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_Amethyst_fe41);
s__bq__8333=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bq__8333);
s__bs__bs__7f81=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__bs__7f81);
s__bs__dq__3bd8=rb_str_new2("\"");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__dq__3bd8);
s__co__at__4bf0=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__co__at__4bf0);
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s__dot__dot__58b9=rb_str_new2("..");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot__58b9);
s__dot__dot__dot__2f43=rb_str_new2("...");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__dot__dot__dot__2f43);
s__gt__cedf=rb_str_new2(">");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__gt__cedf);
s__lb__8154=rb_str_new2("[");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb__8154);
s__lb__rb__d751=rb_str_new2("[]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lb__rb__d751);
s__le__f95b=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__le__f95b);
s__lp__84c4=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lp__84c4);
s__lt__524a=rb_str_new2("<");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__lt__524a);
s__rb__0fbd=rb_str_new2("]");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rb__0fbd);
s__re__cbb1=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__re__cbb1);
s__rp__9371=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__rp__9371);
switchhash_AmethystParser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystParser_1);;
switchhash_AmethystParser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_AmethystParser_2);;
sy_AmethystParser_Act_lb_Args_245f=rb_intern("AmethystParser_Act_lb_Args_245f");
sy_AmethystParser_Act_lb_bind_7d0b=rb_intern("AmethystParser_Act_lb_bind_7d0b");
sy_AmethystParser_Apply_lb__dq_a_1437=rb_intern("AmethystParser_Apply_lb__dq_a_1437");
sy_AmethystParser_Apply_lb__dq_c_5c74=rb_intern("AmethystParser_Apply_lb__dq_c_5c74");
sy_AmethystParser_Apply_lb__dq_m_cb65=rb_intern("AmethystParser_Apply_lb__dq_m_cb65");
sy_AmethystParser_Apply_lb__dq_r_1a54=rb_intern("AmethystParser_Apply_lb__dq_r_1a54");
sy_AmethystParser_Apply_lb__dq_s_7f45=rb_intern("AmethystParser_Apply_lb__dq_s_7f45");
sy_AmethystParser_Apply_lb__dq_t_b788=rb_intern("AmethystParser_Apply_lb__dq_t_b788");
sy_AmethystParser_Apply_lb__lb_b_a4cc=rb_intern("AmethystParser_Apply_lb__lb_b_a4cc");
sy_AmethystParser_Apply_lb_bi_9146=rb_intern("AmethystParser_Apply_lb_bi_9146");
sy_AmethystParser_Args_lb__le__co_a_189a=rb_intern("AmethystParser_Args_lb__le__co_a_189a");
sy_AmethystParser_Args_lb__le__co_a_ef61=rb_intern("AmethystParser_Args_lb__le__co_a_ef61");
sy_AmethystParser_Args_lb__le__co_a_fc0c=rb_intern("AmethystParser_Args_lb__le__co_a_fc0c");
sy_AmethystParser_Comment_lb__f189=rb_intern("AmethystParser_Comment_lb__f189");
sy_AmethystParser_Enter_lb_Ap_57b6=rb_intern("AmethystParser_Enter_lb_Ap_57b6");
sy_AmethystParser_Enter_lb_bi_68d7=rb_intern("AmethystParser_Enter_lb_bi_68d7");
sy_AmethystParser_Global_lb_b_8edb=rb_intern("AmethystParser_Global_lb_b_8edb");
sy_AmethystParser_Grammar_dot__80c6=rb_intern("AmethystParser_Grammar_dot__80c6");
sy_AmethystParser_Key_lb_bind_20b7=rb_intern("AmethystParser_Key_lb_bind_20b7");
sy_AmethystParser_Lambda_lb___e59d=rb_intern("AmethystParser_Lambda_lb___e59d");
sy_AmethystParser_Lookahea_b11c=rb_intern("AmethystParser_Lookahea_b11c");
sy_AmethystParser_Many_lb_bin_33ac=rb_intern("AmethystParser_Many_lb_bin_33ac");
sy_AmethystParser_Nested_lb_b_ab2c=rb_intern("AmethystParser_Nested_lb_b_ab2c");
sy_AmethystParser_Or_AST_dot_c_163b=rb_intern("AmethystParser_Or_AST_dot_c_163b");
sy_AmethystParser_Or_AST_lb_b_1d9d=rb_intern("AmethystParser_Or_AST_lb_b_1d9d");
sy_AmethystParser_Pass_lb_bin_9af8=rb_intern("AmethystParser_Pass_lb_bin_9af8");
sy_AmethystParser_Pred_lb_bin_4918=rb_intern("AmethystParser_Pred_lb_bin_4918");
sy_AmethystParser_Result_lb__le__ae0e=rb_intern("AmethystParser_Result_lb__le__ae0e");
sy_AmethystParser_Rule_dot_cre_e3af=rb_intern("AmethystParser_Rule_dot_cre_e3af");
sy_AmethystParser_Seq_dot_crea_abce=rb_intern("AmethystParser_Seq_dot_crea_abce");
sy_AmethystParser_Seq_lb_Cut_lb__3505=rb_intern("AmethystParser_Seq_lb_Cut_lb__3505");
sy_AmethystParser_Seq_lb__Bin_6d20=rb_intern("AmethystParser_Seq_lb__Bin_6d20");
sy_AmethystParser_Strin_lb__lb__dq__41d8=rb_intern("AmethystParser_Strin_lb__lb__dq__41d8");
sy_AmethystParser_Strin_lb__lb__qu__b1e7=rb_intern("AmethystParser_Strin_lb__lb__qu__b1e7");
sy_AmethystParser__append_lp__088f=rb_intern("AmethystParser__append_lp__088f");
sy_AmethystParser__append_lp__2bc4=rb_intern("AmethystParser__append_lp__2bc4");
sy_AmethystParser__append_lp__2d45=rb_intern("AmethystParser__append_lp__2d45");
sy_AmethystParser__append_lp__4de3=rb_intern("AmethystParser__append_lp__4de3");
sy_AmethystParser__append_lp__66a2=rb_intern("AmethystParser__append_lp__66a2");
sy_AmethystParser__append_lp__6f56=rb_intern("AmethystParser__append_lp__6f56");
sy_AmethystParser__append_lp__7140=rb_intern("AmethystParser__append_lp__7140");
sy_AmethystParser__append_lp__73f1=rb_intern("AmethystParser__append_lp__73f1");
sy_AmethystParser__append_lp__8061=rb_intern("AmethystParser__append_lp__8061");
sy_AmethystParser__append_lp__80de=rb_intern("AmethystParser__append_lp__80de");
sy_AmethystParser__append_lp__81ec=rb_intern("AmethystParser__append_lp__81ec");
sy_AmethystParser__append_lp__89bf=rb_intern("AmethystParser__append_lp__89bf");
sy_AmethystParser__append_lp__984f=rb_intern("AmethystParser__append_lp__984f");
sy_AmethystParser__append_lp__9ca5=rb_intern("AmethystParser__append_lp__9ca5");
sy_AmethystParser__append_lp__9e15=rb_intern("AmethystParser__append_lp__9e15");
sy_AmethystParser__append_lp__a273=rb_intern("AmethystParser__append_lp__a273");
sy_AmethystParser__append_lp__a2a3=rb_intern("AmethystParser__append_lp__a2a3");
sy_AmethystParser__append_lp__b24c=rb_intern("AmethystParser__append_lp__b24c");
sy_AmethystParser__append_lp__b2a5=rb_intern("AmethystParser__append_lp__b2a5");
sy_AmethystParser__append_lp__bab9=rb_intern("AmethystParser__append_lp__bab9");
sy_AmethystParser__append_lp__cbd1=rb_intern("AmethystParser__append_lp__cbd1");
sy_AmethystParser__append_lp__d113=rb_intern("AmethystParser__append_lp__d113");
sy_AmethystParser__append_lp__d1e3=rb_intern("AmethystParser__append_lp__d1e3");
sy_AmethystParser__append_lp__d43a=rb_intern("AmethystParser__append_lp__d43a");
sy_AmethystParser__append_lp__d472=rb_intern("AmethystParser__append_lp__d472");
sy_AmethystParser__append_lp__dd73=rb_intern("AmethystParser__append_lp__dd73");
sy_AmethystParser__at_appends_fd76=rb_intern("AmethystParser__at_appends_fd76");
sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
sy_AmethystParser__at_locals_eq__4fc1=rb_intern("AmethystParser__at_locals_eq__4fc1");
sy_AmethystParser__at_tmp_lt__lt_bi_c4f3=rb_intern("AmethystParser__at_tmp_lt__lt_bi_c4f3");
sy_AmethystParser__body_lp_bi_152d=rb_intern("AmethystParser__body_lp_bi_152d");
sy_AmethystParser__dq__le__dq__pl_bind_567e=rb_intern("AmethystParser__dq__le__dq__pl_bind_567e");
sy_AmethystParser__dq__sh__dq__b65f=rb_intern("AmethystParser__dq__sh__dq__b65f");
sy_AmethystParser__lb_bind_lb_27_275f=rb_intern("AmethystParser__lb_bind_lb_27_275f");
sy_AmethystParser__lp_bind_lb_0_rb__418b=rb_intern("AmethystParser__lp_bind_lb_0_rb__418b");
sy_AmethystParser__qu__sh__le__qu__9722=rb_intern("AmethystParser__qu__sh__le__qu__9722");
sy_AmethystParser_a_eq_autova_a27c=rb_intern("AmethystParser_a_eq_autova_a27c");
sy_AmethystParser_a_eq_autova_aaba=rb_intern("AmethystParser_a_eq_autova_aaba");
sy_AmethystParser_bind_lb_0_rb_=rb_intern("AmethystParser_bind_lb_0_rb_");
sy_AmethystParser_bind_lb_0_rb__dot__206f=rb_intern("AmethystParser_bind_lb_0_rb__dot__206f");
sy_AmethystParser_bind_lb_10_rb__ed2a=rb_intern("AmethystParser_bind_lb_10_rb__ed2a");
sy_AmethystParser_bind_lb_12_rb__b690=rb_intern("AmethystParser_bind_lb_12_rb__b690");
sy_AmethystParser_bind_lb_23_rb__7c7a=rb_intern("AmethystParser_bind_lb_23_rb__7c7a");
sy_AmethystParser_bind_lb_2_rb_=rb_intern("AmethystParser_bind_lb_2_rb_");
sy_AmethystParser_bind_lb_3_rb__eq__bbe1=rb_intern("AmethystParser_bind_lb_3_rb__eq__bbe1");
sy_AmethystParser_bind_lb_4_rb_=rb_intern("AmethystParser_bind_lb_4_rb_");
sy_AmethystParser_bind_lb_4_rb__dot__e4b4=rb_intern("AmethystParser_bind_lb_4_rb__dot__e4b4");
sy_AmethystParser_bind_lb_4_rb__pl__13b0=rb_intern("AmethystParser_bind_lb_4_rb__pl__13b0");
sy_AmethystParser_bind_lb_5_rb_=rb_intern("AmethystParser_bind_lb_5_rb_");
sy_AmethystParser_bind_lb_5_rb__dot__028b=rb_intern("AmethystParser_bind_lb_5_rb__dot__028b");
sy_AmethystParser_bind_lb_5_rb__dot__bb1e=rb_intern("AmethystParser_bind_lb_5_rb__dot__bb1e");
sy_AmethystParser_bind_lb_6_rb_=rb_intern("AmethystParser_bind_lb_6_rb_");
sy_AmethystParser_bind_lb_7_rb__dot__35cf=rb_intern("AmethystParser_bind_lb_7_rb__dot__35cf");
sy_AmethystParser_bind_lb_8_rb_=rb_intern("AmethystParser_bind_lb_8_rb_");
sy_AmethystParser_l_eq_Local_lb__52e1=rb_intern("AmethystParser_l_eq_Local_lb__52e1");
sy_AmethystParser_local_lp_bi_4bf2=rb_intern("AmethystParser_local_lp_bi_4bf2");
                    rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,0);
rb_define_method(cls_AmethystParser,"call",AmethystParser_call,0);
rb_define_method(cls_AmethystParser,"cases",AmethystParser_cases,0);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"host_expr",AmethystParser_host_expr,0);
rb_define_method(cls_AmethystParser,"igrammar",AmethystParser_igrammar,0);
rb_define_method(cls_AmethystParser,"inline_host_expr",AmethystParser_inline_host_expr,0);
rb_define_method(cls_AmethystParser,"interpolated",AmethystParser_interpolated,1);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
rb_define_method(cls_AmethystParser,"local",AmethystParser_local,1);
rb_define_method(cls_AmethystParser,"name",AmethystParser_name,0);
rb_define_method(cls_AmethystParser,"nr",AmethystParser_nr,0);
rb_define_method(cls_AmethystParser,"postfixed",AmethystParser_postfixed,0);
rb_define_method(cls_AmethystParser,"prefixed",AmethystParser_prefixed,0);
rb_define_method(cls_AmethystParser,"procargs",AmethystParser_procargs,0);
rb_define_method(cls_AmethystParser,"procargs2",AmethystParser_procargs2,0);
rb_define_method(cls_AmethystParser,"rubyarg",AmethystParser_rubyarg,0);
rb_define_method(cls_AmethystParser,"rule",AmethystParser_rule,0);
rb_define_method(cls_AmethystParser,"ruleargs",AmethystParser_ruleargs,0);
rb_define_method(cls_AmethystParser,"sequence",AmethystParser_sequence,0);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
                    rb_eval_string("testversionparser('f4d16020025c7a7ded69ddacd0bafbbf')");}
