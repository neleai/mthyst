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
VALUE Amethyst_spaces(VALUE self );
VALUE switchhash_AmethystParser_1;
VALUE switchhash_AmethystParser_2;
static VALUE s_Amethyst_fe41;
static VALUE s__bq__8333;
static VALUE s__bs__bs__7f81;
static VALUE s__bs__sh__le__a90f;
static VALUE s__co__at__4bf0;
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
static VALUE sy_AmethystParser_Apply_lb__dq_s_b3ee;
static VALUE sy_AmethystParser_Apply_lb__dq_t_f6a3;
static VALUE sy_AmethystParser_Apply_lb__lb_b_a4cc;
static VALUE sy_AmethystParser_Apply_lb_bi_9146;
static VALUE sy_AmethystParser_Args_lb__le__co_a_34c4;
static VALUE sy_AmethystParser_Args_lb__le__co_a_7d66;
static VALUE sy_AmethystParser_Args_lb__le__co_a_d997;
static VALUE sy_AmethystParser_Bind_lb_loc_eddf;
static VALUE sy_AmethystParser_Comment_lb__ba90;
static VALUE sy_AmethystParser_Enter_lb_Ap_3cd0;
static VALUE sy_AmethystParser_Enter_lb_bi_68d7;
static VALUE sy_AmethystParser_Global_lb_b_8edb;
static VALUE sy_AmethystParser_Grammar_dot__80c6;
static VALUE sy_AmethystParser_Key_lb_bind_20b7;
static VALUE sy_AmethystParser_Lambda_lb_B_780d;
static VALUE sy_AmethystParser_Lookahea_b11c;
static VALUE sy_AmethystParser_Many_lb_bin_33ac;
static VALUE sy_AmethystParser_Nested_lb_b_f1a4;
static VALUE sy_AmethystParser_Or_AST_dot_c_163b;
static VALUE sy_AmethystParser_Or_AST_lb_b_1d9d;
static VALUE sy_AmethystParser_Pass_lb_bin_9af8;
static VALUE sy_AmethystParser_Pred_lb_bin_4918;
static VALUE sy_AmethystParser_Result_lb__le__ae0e;
static VALUE sy_AmethystParser_Rule_dot_cre_e3af;
static VALUE sy_AmethystParser_Seq_dot_crea_abce;
static VALUE sy_AmethystParser_Seq_lb_Bind_50cd;
static VALUE sy_AmethystParser_Seq_lb_Cut_lb__3505;
static VALUE sy_AmethystParser_Strin_lb__lb__dq__b4c8;
static VALUE sy_AmethystParser_Strin_lb__lb__qu__e751;
static VALUE sy_AmethystParser__append_lp__0df6;
static VALUE sy_AmethystParser__append_lp__4b67;
static VALUE sy_AmethystParser__append_lp__4de3;
static VALUE sy_AmethystParser__append_lp__50ed;
static VALUE sy_AmethystParser__append_lp__565b;
static VALUE sy_AmethystParser__append_lp__66a2;
static VALUE sy_AmethystParser__append_lp__6948;
static VALUE sy_AmethystParser__append_lp__6f56;
static VALUE sy_AmethystParser__append_lp__8061;
static VALUE sy_AmethystParser__append_lp__81ec;
static VALUE sy_AmethystParser__append_lp__9ca5;
static VALUE sy_AmethystParser__append_lp__9e15;
static VALUE sy_AmethystParser__append_lp__a474;
static VALUE sy_AmethystParser__append_lp__b2a5;
static VALUE sy_AmethystParser__append_lp__b375;
static VALUE sy_AmethystParser__append_lp__bab9;
static VALUE sy_AmethystParser__append_lp__cbd1;
static VALUE sy_AmethystParser__append_lp__d113;
static VALUE sy_AmethystParser__append_lp__d1e3;
static VALUE sy_AmethystParser__append_lp__d43a;
static VALUE sy_AmethystParser__append_lp__d472;
static VALUE sy_AmethystParser__append_lp__dd73;
static VALUE sy_AmethystParser__append_lp__ded9;
static VALUE sy_AmethystParser__append_lp__f8f8;
static VALUE sy_AmethystParser__at_appends_5d33;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__4fc1;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_c4f3;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_567e;
static VALUE sy_AmethystParser__lb_bind_lb_25_dd55;
static VALUE sy_AmethystParser__lp_bind_lb_0_rb__418b;
static VALUE sy_AmethystParser_a_eq_autova_0926;
static VALUE sy_AmethystParser_a_eq_autova_a27c;
static VALUE sy_AmethystParser_bind_lb_0_rb_;
static VALUE sy_AmethystParser_bind_lb_0_rb__dot__206f;
static VALUE sy_AmethystParser_bind_lb_0_rb__dot__afad;
static VALUE sy_AmethystParser_bind_lb_10_rb__ed2a;
static VALUE sy_AmethystParser_bind_lb_10_rb__ff8c;
static VALUE sy_AmethystParser_bind_lb_14_rb__e68b;
static VALUE sy_AmethystParser_bind_lb_21_rb__d581;
static VALUE sy_AmethystParser_bind_lb_2_rb_;
static VALUE sy_AmethystParser_bind_lb_3_rb__dot__e626;
static VALUE sy_AmethystParser_bind_lb_3_rb__eq__bbe1;
static VALUE sy_AmethystParser_bind_lb_4_rb_;
static VALUE sy_AmethystParser_bind_lb_4_rb__dot__e4b4;
static VALUE sy_AmethystParser_bind_lb_4_rb__pl__13b0;
static VALUE sy_AmethystParser_bind_lb_5_rb__dot__028b;
static VALUE sy_AmethystParser_bind_lb_7_rb_;
static VALUE sy_AmethystParser_bind_lb_7_rb__dot__35cf;
static VALUE sy_AmethystParser_bind_lb_8_rb_;
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
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(11); bind_aset(bind,2/*o*/,a0);bind_aset(bind,0/*c*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*c*/); bind_aset(bind,1/*c*/,it);
it=bind_aget(bind,2/*o*/); bind_aset(bind,3/*o*/,it);
it=bind_aget(bind,3/*o*/); bind_aset(bind,4/*s*/,it);
 it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6f56,1,bind);  } break1: ptr->pos=oldpos1;   it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*r*/,it);
it=bind_aget(bind,1/*c*/); bind_aset(bind,4/*s*/,it);
 it=bind_aget(bind,4/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,4/*s*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_7_rb_,1,bind);  bind_aset(bind,8/*_result*/,it);
it=bind_aget(bind,8/*_result*/); bind_aset(bind,9/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_34c4,1,bind);  bind_aset(bind,10/*_result*/,it);

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
int oldpos2;  while(1){oldpos2=ptr->pos;   it=Amethyst_spaces(self ); FAILTEST(break1);if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1; else goto break1;  it=AmethystParser_sequence(self ); FAILTEST(break1); bind_aset(bind,3/*autovar*/,it);
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
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(16); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(34):;case '$' ... '[':;case ']' ... UC(255):; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*s*/);cut1=1;stop1=1;
;goto accept2;
alt1_2: ptr->pos=oldpos2;if (cut1) goto break1;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 break;
case '#' ... '#':; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*s*/);cut2=1;stop1=1;
;goto accept3;
alt2_2: ptr->pos=oldpos3;if (cut2) goto break1;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,4/*c*/,it);
it=rb_obj_clone(s__bs__sh__le__a90f); bind_aset(bind,5/*o*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1; else goto alt2_3;  it=Amethyst_spaces(self ); FAILTEST(alt2_3);it=rb_ary_new3(0); bind_aset(bind,6/*autovar*/,it);
int oldpos4;  while(1){oldpos4=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break2); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d472,1,bind);  } break2: ptr->pos=oldpos4;   it=bind_aget(bind,6/*autovar*/); bind_aset(bind,8/*r*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto alt2_3; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_8_rb_,1,bind);  bind_aset(bind,9/*_result*/,it);
it=bind_aget(bind,9/*_result*/); bind_aset(bind,10/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_d997,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__66a2,1,bind); 
;goto accept3;
alt2_3: ptr->pos=oldpos3;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept3;
alt2_4: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case UC(92) ... UC(92):; int oldpos5=ptr->pos;int cut3=0;
alt3_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=bind_aget(bind,2/*s*/);cut3=1;stop1=1;
;goto accept5;
alt3_2: ptr->pos=oldpos5;if (cut3) goto break1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,13/*_result*/,it);
it=bind_aget(bind,13/*_result*/); bind_aset(bind,14/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__4b67,1,bind);   it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept5;
alt3_3: ptr->pos=oldpos5;goto break1;
 accept5:;
 break;
} if (stop1) goto accept1; } break1: goto fail; accept1:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb_,1,bind);  bind_aset(bind,15/*_result*/,it);

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
            
it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__afad,1,bind);  bind_aset(bind,1/*_result*/,it);

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
}it=rb_funcall(self,sy_AmethystParser__at_appends_5d33,1,bind);  bind_aset(bind,0/*from*/,it);

;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystParser_inline_host_expr(self ); FAILTEST(alt2_3); bind_aset(bind,5/*e*/,it);
it=rb_funcall(self,sy_AmethystParser_Seq_lb_Bind_50cd,1,bind);  bind_aset(bind,0/*from*/,it);

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
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(26);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '#':;case '%' ... '&':;case '*' ... '-':;case '/' ... '/':;case ';' ... 'Z':;case UC(92) ... UC(92):;case '^' ... '^':;case '|' ... '|':;case '~' ... UC(255):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Amethyst_spaces(self ); FAILTEST(alt2_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt2_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt2_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept2;
alt2_2: ptr->pos=oldpos2;it=Qnil;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
int oldpos3=ptr->pos;int cut3=0;
alt3_1:;  it=Amethyst__(self ); FAILTEST(alt3_2);cut3=1;goto alt3_2;
;goto accept3;
alt3_2: ptr->pos=oldpos3;if (cut3) goto alt1_2;it=Qnil;
;goto accept3;
alt3_3: ptr->pos=oldpos3;goto alt1_2;
 accept3:;
  it=AmethystParser_name(self ); FAILTEST(alt1_2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_key(self ); FAILTEST(alt1_3); bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case '{' ... '{':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,6/*c*/,it);
it=rb_obj_clone(s__le__f95b); bind_aset(bind,7/*o*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(alt4_2);it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos5;  while(1){oldpos5=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b375,1,bind);  } break1: ptr->pos=oldpos5;   it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*r*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto alt4_2; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_10_rb__ff8c,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,12/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_7d66,1,bind);  bind_aset(bind,13/*_result*/,it);
it=bind_aget(bind,13/*_result*/); bind_aset(bind,5/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;int oldpos6=ptr->pos;int cut5=0;
alt5_1:;  it=Amethyst_spaces(self ); FAILTEST(alt5_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt5_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt5_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept6;
alt5_2: ptr->pos=oldpos6;it=Qnil;
;goto accept6;
alt5_3: ptr->pos=oldpos6;goto alt4_3;
 accept6:;
int oldpos7=ptr->pos;int cut6=0;
alt6_1:;  it=Amethyst__(self ); FAILTEST(alt6_2);cut6=1;goto alt6_2;
;goto accept7;
alt6_2: ptr->pos=oldpos7;if (cut6) goto alt4_3;it=Qnil;
;goto accept7;
alt6_3: ptr->pos=oldpos7;goto alt4_3;
 accept7:;
  it=AmethystParser_name(self ); FAILTEST(alt4_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;  it=AmethystParser_key(self ); FAILTEST(alt4_4); bind_aset(bind,5/*_result*/,it);

;goto accept4;
alt4_4: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case UC(34) ... UC(34):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos8=ptr->pos;int cut7=0;
alt7_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); bind_aset(bind,14/*x*/,it);
int oldpos9; int stop2=0; while(1){oldpos9=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '[':;case ']' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a474,1,bind);  break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut7=1;stop2=1; break;
case '#' ... '#':; int oldpos10=ptr->pos;int cut8=0;
alt8_1:;it=rb_obj_clone(s__re__cbb1); bind_aset(bind,6/*c*/,it);
it=rb_obj_clone(s__bs__sh__le__a90f); bind_aset(bind,7/*o*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1; else goto alt8_2;  it=Amethyst_spaces(self ); FAILTEST(alt8_2);it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos11;  while(1){oldpos11=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b375,1,bind);  } break3: ptr->pos=oldpos11;   it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*r*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto alt8_2; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_10_rb__ff8c,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,12/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_7d66,1,bind);  bind_aset(bind,13/*_result*/,it);
it=bind_aget(bind,13/*_result*/); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__50ed,1,bind); 
;goto accept10;
alt8_2: ptr->pos=oldpos10;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a474,1,bind); 
;goto accept10;
alt8_3: ptr->pos=oldpos10;goto break2;
 accept10:;
 break;
case UC(92) ... UC(92):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__ded9,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,15/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__a474,1,bind);  break;
} if (stop2) goto accept9; } break2: goto alt7_2; accept9:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_14_rb__e68b,1,bind);  bind_aset(bind,18/*_result*/,it);
it=bind_aget(bind,18/*_result*/); bind_aset(bind,19/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__e751,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept8;
alt7_2: ptr->pos=oldpos8;if (cut7) goto fail;int oldpos12=ptr->pos;int cut9=0;
alt9_1:;  it=Amethyst_spaces(self ); FAILTEST(alt9_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt9_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt9_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept12;
alt9_2: ptr->pos=oldpos12;it=Qnil;
;goto accept12;
alt9_3: ptr->pos=oldpos12;goto alt7_3;
 accept12:;
int oldpos13=ptr->pos;int cut10=0;
alt10_1:;  it=Amethyst__(self ); FAILTEST(alt10_2);cut10=1;goto alt10_2;
;goto accept13;
alt10_2: ptr->pos=oldpos13;if (cut10) goto alt7_3;it=Qnil;
;goto accept13;
alt10_3: ptr->pos=oldpos13;goto alt7_3;
 accept13:;
  it=AmethystParser_name(self ); FAILTEST(alt7_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept8;
alt7_3: ptr->pos=oldpos8;  it=AmethystParser_key(self ); FAILTEST(alt7_4); bind_aset(bind,5/*_result*/,it);

;goto accept8;
alt7_4: ptr->pos=oldpos8;goto fail;
 accept8:;
 break;
case '$' ... '$':;case ':' ... ':':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos14=ptr->pos;int cut11=0;
alt11_1:;int oldpos15=ptr->pos;int cut12=0;
alt12_1:;  it=Amethyst_spaces(self ); FAILTEST(alt12_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt12_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt12_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept15;
alt12_2: ptr->pos=oldpos15;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept15;
alt12_3: ptr->pos=oldpos15;goto alt11_2;
 accept15:;
int oldpos16=ptr->pos;int cut13=0;
alt13_1:;  it=Amethyst__(self ); FAILTEST(alt13_2);cut13=1;goto alt13_2;
;goto accept16;
alt13_2: ptr->pos=oldpos16;if (cut13) goto alt11_2;it=Qnil;
;goto accept16;
alt13_3: ptr->pos=oldpos16;goto alt11_2;
 accept16:;
  it=AmethystParser_name(self ); FAILTEST(alt11_2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept14;
alt11_2: ptr->pos=oldpos14;  it=AmethystParser_key(self ); FAILTEST(alt11_3); bind_aset(bind,5/*_result*/,it);

;goto accept14;
alt11_3: ptr->pos=oldpos14;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,5/*_result*/,it);

;goto accept14;
alt11_4: ptr->pos=oldpos14;goto fail;
 accept14:;
 break;
case UC(39) ... UC(39):; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos17=ptr->pos;int cut14=0;
alt14_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); bind_aset(bind,21/*x*/,it);
int oldpos18; int stop4=0; while(1){oldpos18=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,22/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0df6,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut14=1;stop4=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,23/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__565b,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,22/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__0df6,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut14=1;stop4=1; break;
} break;
} if (stop4) goto accept18; } break4: goto alt14_2; accept18:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_21_rb__d581,1,bind);  bind_aset(bind,24/*_result*/,it);
it=bind_aget(bind,24/*_result*/); bind_aset(bind,19/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__dq__b4c8,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept17;
alt14_2: ptr->pos=oldpos17;if (cut14) goto fail;int oldpos19=ptr->pos;int cut15=0;
alt15_1:;  it=Amethyst_spaces(self ); FAILTEST(alt15_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt15_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt15_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept19;
alt15_2: ptr->pos=oldpos19;it=Qnil;
;goto accept19;
alt15_3: ptr->pos=oldpos19;goto alt14_3;
 accept19:;
int oldpos20=ptr->pos;int cut16=0;
alt16_1:;  it=Amethyst__(self ); FAILTEST(alt16_2);cut16=1;goto alt16_2;
;goto accept20;
alt16_2: ptr->pos=oldpos20;if (cut16) goto alt14_3;it=Qnil;
;goto accept20;
alt16_3: ptr->pos=oldpos20;goto alt14_3;
 accept20:;
  it=AmethystParser_name(self ); FAILTEST(alt14_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept17;
alt14_3: ptr->pos=oldpos17;  it=AmethystParser_key(self ); FAILTEST(alt14_4); bind_aset(bind,5/*_result*/,it);

;goto accept17;
alt14_4: ptr->pos=oldpos17;goto fail;
 accept17:;
 break;
case '(' ... '(':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos21=ptr->pos;int cut17=0;
alt17_1:;it=rb_obj_clone(s__rp__9371); bind_aset(bind,6/*c*/,it);
it=rb_obj_clone(s__lp__84c4); bind_aset(bind,7/*o*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(alt17_2);it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos22;  while(1){oldpos22=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break5); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b375,1,bind);  } break5: ptr->pos=oldpos22;   it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*r*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt17_2; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_10_rb__ff8c,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,12/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_7d66,1,bind);  bind_aset(bind,13/*_result*/,it);
it=bind_aget(bind,13/*_result*/); bind_aset(bind,5/*_result*/,it);

;goto accept21;
alt17_2: ptr->pos=oldpos21;int oldpos23=ptr->pos;int cut18=0;
alt18_1:;  it=Amethyst_spaces(self ); FAILTEST(alt18_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt18_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt18_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept23;
alt18_2: ptr->pos=oldpos23;it=Qnil;
;goto accept23;
alt18_3: ptr->pos=oldpos23;goto alt17_3;
 accept23:;
int oldpos24=ptr->pos;int cut19=0;
alt19_1:;  it=Amethyst__(self ); FAILTEST(alt19_2);cut19=1;goto alt19_2;
;goto accept24;
alt19_2: ptr->pos=oldpos24;if (cut19) goto alt17_3;it=Qnil;
;goto accept24;
alt19_3: ptr->pos=oldpos24;goto alt17_3;
 accept24:;
  it=AmethystParser_name(self ); FAILTEST(alt17_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept21;
alt17_3: ptr->pos=oldpos21;  it=AmethystParser_key(self ); FAILTEST(alt17_4); bind_aset(bind,5/*_result*/,it);

;goto accept21;
alt17_4: ptr->pos=oldpos21;goto fail;
 accept21:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos25=ptr->pos;int cut20=0;
alt20_1:;int oldpos26=ptr->pos;int cut21=0;
alt21_1:;  it=Amethyst_spaces(self ); FAILTEST(alt21_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt21_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt21_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept26;
alt21_2: ptr->pos=oldpos26;it=Qnil;
;goto accept26;
alt21_3: ptr->pos=oldpos26;goto alt20_2;
 accept26:;
int oldpos27=ptr->pos;int cut22=0;
alt22_1:;  it=Amethyst__(self ); FAILTEST(alt22_2);cut22=1;goto alt22_2;
;goto accept27;
alt22_2: ptr->pos=oldpos27;if (cut22) goto alt20_2;it=Qnil;
;goto accept27;
alt22_3: ptr->pos=oldpos27;goto alt20_2;
 accept27:;
  it=AmethystParser_name(self ); FAILTEST(alt20_2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept25;
alt20_2: ptr->pos=oldpos25;  it=AmethystParser_key(self ); FAILTEST(alt20_3); bind_aset(bind,5/*_result*/,it);

;goto accept25;
alt20_3: ptr->pos=oldpos25;goto fail;
 accept25:;
 break;
case '.' ... '.':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos28=ptr->pos;int cut23=0;
alt23_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos29=ptr->pos;int cut24=0;
alt24_1:;if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2; else goto alt24_2;it=rb_obj_clone(s__dot__dot__dot__2f43); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,5/*_result*/,it);

;goto accept29;
alt24_2: ptr->pos=oldpos29;if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1; else goto alt24_3;it=rb_obj_clone(s__dot__dot__58b9); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,5/*_result*/,it);

;goto accept29;
alt24_3: ptr->pos=oldpos29;goto alt23_2;
 accept29:;

;goto accept28;
alt23_2: ptr->pos=oldpos28;int oldpos30=ptr->pos;int cut25=0;
alt25_1:;  it=Amethyst_spaces(self ); FAILTEST(alt25_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt25_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt25_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept30;
alt25_2: ptr->pos=oldpos30;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__d1e3,1,bind); 
;goto accept30;
alt25_3: ptr->pos=oldpos30;goto alt23_3;
 accept30:;
int oldpos31=ptr->pos;int cut26=0;
alt26_1:;  it=Amethyst__(self ); FAILTEST(alt26_2);cut26=1;goto alt26_2;
;goto accept31;
alt26_2: ptr->pos=oldpos31;if (cut26) goto alt23_3;it=Qnil;
;goto accept31;
alt26_3: ptr->pos=oldpos31;goto alt23_3;
 accept31:;
  it=AmethystParser_name(self ); FAILTEST(alt23_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept28;
alt23_3: ptr->pos=oldpos28;  it=AmethystParser_key(self ); FAILTEST(alt23_4); bind_aset(bind,5/*_result*/,it);

;goto accept28;
alt23_4: ptr->pos=oldpos28;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,5/*_result*/,it);

;goto accept28;
alt23_5: ptr->pos=oldpos28;goto fail;
 accept28:;
 break;
case '0' ... '9':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos32=ptr->pos;int cut27=0;
alt27_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,25/*e*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... UC(255):; goto alt27_2; break;
case '<' ... '<':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1; else goto alt27_2; break;
}it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_25_dd55,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept32;
alt27_2: ptr->pos=oldpos32;int oldpos33=ptr->pos;int cut28=0;
alt28_1:;  it=Amethyst_spaces(self ); FAILTEST(alt28_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt28_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt28_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept33;
alt28_2: ptr->pos=oldpos33;it=Qnil;
;goto accept33;
alt28_3: ptr->pos=oldpos33;goto alt27_3;
 accept33:;
int oldpos34=ptr->pos;int cut29=0;
alt29_1:;  it=Amethyst__(self ); FAILTEST(alt29_2);cut29=1;goto alt29_2;
;goto accept34;
alt29_2: ptr->pos=oldpos34;if (cut29) goto alt27_3;it=Qnil;
;goto accept34;
alt29_3: ptr->pos=oldpos34;goto alt27_3;
 accept34:;
  it=AmethystParser_name(self ); FAILTEST(alt27_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept32;
alt27_3: ptr->pos=oldpos32;  it=AmethystParser_key(self ); FAILTEST(alt27_4); bind_aset(bind,5/*_result*/,it);

;goto accept32;
alt27_4: ptr->pos=oldpos32;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,5/*_result*/,it);

;goto accept32;
alt27_5: ptr->pos=oldpos32;goto fail;
 accept32:;
 break;
case '[' ... '[':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos35=ptr->pos;int cut30=0;
alt30_1:;it=rb_obj_clone(s__rb__0fbd); bind_aset(bind,6/*c*/,it);
it=rb_obj_clone(s__lb__8154); bind_aset(bind,7/*o*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(alt30_2);it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos36;  while(1){oldpos36=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break6); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b375,1,bind);  } break6: ptr->pos=oldpos36;   it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*r*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto alt30_2; break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_bind_lb_10_rb__ff8c,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,12/*r*/,it);
it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_7d66,1,bind);  bind_aset(bind,13/*_result*/,it);
it=bind_aget(bind,13/*_result*/); bind_aset(bind,5/*_result*/,it);

;goto accept35;
alt30_2: ptr->pos=oldpos35;int oldpos37=ptr->pos;int cut31=0;
alt31_1:;  it=Amethyst_spaces(self ); FAILTEST(alt31_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt31_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt31_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept37;
alt31_2: ptr->pos=oldpos37;it=Qnil;
;goto accept37;
alt31_3: ptr->pos=oldpos37;goto alt30_3;
 accept37:;
int oldpos38=ptr->pos;int cut32=0;
alt32_1:;  it=Amethyst__(self ); FAILTEST(alt32_2);cut32=1;goto alt32_2;
;goto accept38;
alt32_2: ptr->pos=oldpos38;if (cut32) goto alt30_3;it=Qnil;
;goto accept38;
alt32_3: ptr->pos=oldpos38;goto alt30_3;
 accept38:;
  it=AmethystParser_name(self ); FAILTEST(alt30_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept35;
alt30_3: ptr->pos=oldpos35;  it=AmethystParser_key(self ); FAILTEST(alt30_4); bind_aset(bind,5/*_result*/,it);

;goto accept35;
alt30_4: ptr->pos=oldpos35;goto fail;
 accept35:;
 break;
case '`' ... '`':; it=rb_ary_new3(0); bind_aset(bind,0/*n*/,it);
int oldpos39=ptr->pos;int cut33=0;
alt33_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt33_2); bind_aset(bind,25/*e*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt33_2; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Lambda_lb_B_780d,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept39;
alt33_2: ptr->pos=oldpos39;int oldpos40=ptr->pos;int cut34=0;
alt34_1:;  it=Amethyst_spaces(self ); FAILTEST(alt34_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt34_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt34_2; break;
}it=rb_obj_clone(s__co__at__4bf0); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__f8f8,1,bind); 
;goto accept40;
alt34_2: ptr->pos=oldpos40;it=Qnil;
;goto accept40;
alt34_3: ptr->pos=oldpos40;goto alt33_3;
 accept40:;
int oldpos41=ptr->pos;int cut35=0;
alt35_1:;  it=Amethyst__(self ); FAILTEST(alt35_2);cut35=1;goto alt35_2;
;goto accept41;
alt35_2: ptr->pos=oldpos41;if (cut35) goto alt33_3;it=Qnil;
;goto accept41;
alt35_3: ptr->pos=oldpos41;goto alt33_3;
 accept41:;
  it=AmethystParser_name(self ); FAILTEST(alt33_3); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__b2a5,1,bind); it=rb_funcall(self,sy_AmethystParser_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,5/*_result*/,it);

;goto accept39;
alt33_3: ptr->pos=oldpos39;  it=AmethystParser_key(self ); FAILTEST(alt33_4); bind_aset(bind,5/*_result*/,it);

;goto accept39;
alt33_4: ptr->pos=oldpos39;goto fail;
 accept39:;
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
it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_eddf,1,bind);  bind_aset(bind,3/*body*/,it);
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
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '&':;case ')' ... '-':;case '/' ... 'Z':;case UC(92) ... 'a':;case 'c' ... 'm':;case 'o' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
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
alt1_6: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 'n' ... 'n':; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='s'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='e'&&ame_curstr2(ptr)[4]=='d'&&ame_curstr2(ptr)[5]=='(')  ptr->pos+=6; else goto alt2_2;  it=AmethystParser_expression(self ); FAILTEST(alt2_2); bind_aset(bind,2/*expr*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt2_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt2_2; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Nested_lb_b_f1a4,1,bind);  bind_aset(bind,0/*_result*/,it);

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
alt2_7: ptr->pos=oldpos3;goto fail;
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
alt3_6: ptr->pos=oldpos5;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); bind_aset(bind,3/*x*/,it);
int oldpos7; int stop1=0; while(1){oldpos7=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut3=1;stop1=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6948,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut3=1;stop1=1; break;
} break;
} if (stop1) goto accept7; } break1: goto alt3_7; accept7:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_3_rb__dot__e626,1,bind);  bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_f6a3,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept5;
alt3_7: ptr->pos=oldpos5;if (cut3) goto fail;goto fail;
 accept5:;
 break;
case '#' ... '#':; int oldpos8=ptr->pos;int cut4=0;
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
alt4_6: ptr->pos=oldpos8;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_line(self ); FAILTEST(alt4_7); bind_aset(bind,8/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Comment_lb__ba90,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept8;
alt4_7: ptr->pos=oldpos8;goto fail;
 accept8:;
 break;
case UC(39) ... UC(39):; int oldpos10=ptr->pos;int cut5=0;
alt5_1:;  it=AmethystParser_cases(self ); FAILTEST(alt5_2); bind_aset(bind,0/*_result*/,it);

;goto accept10;
alt5_2: ptr->pos=oldpos10;  it=AmethystParser_call(self ); FAILTEST(alt5_3); bind_aset(bind,0/*_result*/,it);

;goto accept10;
alt5_3: ptr->pos=oldpos10;int oldpos11=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject5; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept11;  reject5: x=0; accept11: it=Qnil; ptr->pos=oldpos11; if (x==0) goto alt5_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept10;
alt5_4: ptr->pos=oldpos10;  it=AmethystParser_key(self ); FAILTEST(alt5_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept10;
alt5_5: ptr->pos=oldpos10;  it=AmethystParser_host_expr(self ); FAILTEST(alt5_6); bind_aset(bind,0/*_result*/,it);

;goto accept10;
alt5_6: ptr->pos=oldpos10;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); bind_aset(bind,3/*x*/,it);
int oldpos12; int stop2=0; while(1){oldpos12=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut5=1;stop2=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__6948,1,bind);   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_AmethystParser__append_lp__dd73,1,bind);  break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut5=1;stop2=1; break;
} break;
} if (stop2) goto accept12; } break2: goto alt5_7; accept12:;   it=rb_funcall(self,sy_AmethystParser_bind_lb_3_rb__dot__e626,1,bind);  bind_aset(bind,7/*_result*/,it);
it=bind_aget(bind,7/*_result*/); bind_aset(bind,8/*s*/,it);
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_b3ee,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept10;
alt5_7: ptr->pos=oldpos10;if (cut5) goto fail;goto fail;
 accept10:;
 break;
case '(' ... '(':; int oldpos13=ptr->pos;int cut6=0;
alt6_1:;  it=AmethystParser_cases(self ); FAILTEST(alt6_2); bind_aset(bind,0/*_result*/,it);

;goto accept13;
alt6_2: ptr->pos=oldpos13;  it=AmethystParser_call(self ); FAILTEST(alt6_3); bind_aset(bind,0/*_result*/,it);

;goto accept13;
alt6_3: ptr->pos=oldpos13;int oldpos14=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject6; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept14;  reject6: x=0; accept14: it=Qnil; ptr->pos=oldpos14; if (x==0) goto alt6_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept13;
alt6_4: ptr->pos=oldpos13;  it=AmethystParser_key(self ); FAILTEST(alt6_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept13;
alt6_5: ptr->pos=oldpos13;  it=AmethystParser_host_expr(self ); FAILTEST(alt6_6); bind_aset(bind,0/*_result*/,it);

;goto accept13;
alt6_6: ptr->pos=oldpos13;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt6_7); bind_aset(bind,9/*x*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt6_7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt6_7; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; it=Qnil;it=bind_aget(bind,9/*x*/); bind_aset(bind,0/*_result*/,it);
 break;
case '[' ... '[':; int oldpos15=ptr->pos;int cut7=0;
alt7_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt7_2;it=bind_aget(bind,9/*x*/); bind_aset(bind,10/*ors*/,it);
it=rb_funcall(self,sy_AmethystParser_a_eq_autova_0926,1,bind);  bind_aset(bind,11/*_result*/,it);
it=bind_aget(bind,11/*_result*/); bind_aset(bind,0/*_result*/,it);

;goto accept15;
alt7_2: ptr->pos=oldpos15;it=Qnil;it=bind_aget(bind,9/*x*/); bind_aset(bind,0/*_result*/,it);

;goto accept15;
alt7_3: ptr->pos=oldpos15;goto alt6_7;
 accept15:;
 break;
}
;goto accept13;
alt6_7: ptr->pos=oldpos13;goto fail;
 accept13:;
 break;
case '.' ... '.':; int oldpos16=ptr->pos;int cut8=0;
alt8_1:;  it=AmethystParser_cases(self ); FAILTEST(alt8_2); bind_aset(bind,0/*_result*/,it);

;goto accept16;
alt8_2: ptr->pos=oldpos16;  it=AmethystParser_call(self ); FAILTEST(alt8_3); bind_aset(bind,0/*_result*/,it);

;goto accept16;
alt8_3: ptr->pos=oldpos16;int oldpos17=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject7; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept17;  reject7: x=0; accept17: it=Qnil; ptr->pos=oldpos17; if (x==0) goto alt8_4;int oldpos18=ptr->pos;int cut9=0;
alt9_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;
;goto accept18;
alt9_2: ptr->pos=oldpos18;it=Qnil;
;goto accept18;
alt9_3: ptr->pos=oldpos18;goto alt8_4;
 accept18:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept16;
alt8_4: ptr->pos=oldpos16;  it=AmethystParser_key(self ); FAILTEST(alt8_5); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept16;
alt8_5: ptr->pos=oldpos16;  it=AmethystParser_host_expr(self ); FAILTEST(alt8_6); bind_aset(bind,0/*_result*/,it);

;goto accept16;
alt8_6: ptr->pos=oldpos16;goto fail;
 accept16:;
 break;
case '[' ... '[':; int oldpos19=ptr->pos;int cut10=0;
alt10_1:;  it=AmethystParser_cases(self ); FAILTEST(alt10_2); bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_2: ptr->pos=oldpos19;  it=AmethystParser_call(self ); FAILTEST(alt10_3); bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_3: ptr->pos=oldpos19;int oldpos20=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject8; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept20;  reject8: x=0; accept20: it=Qnil; ptr->pos=oldpos20; if (x==0) goto alt10_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_4: ptr->pos=oldpos19;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt10_5); bind_aset(bind,12/*e*/,it);
  it=Amethyst_spaces(self ); FAILTEST(alt10_5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto alt10_5; break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_funcall(self,sy_AmethystParser_Enter_lb_Ap_3cd0,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_5: ptr->pos=oldpos19;  it=AmethystParser_key(self ); FAILTEST(alt10_6); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_6: ptr->pos=oldpos19;  it=AmethystParser_host_expr(self ); FAILTEST(alt10_7); bind_aset(bind,0/*_result*/,it);

;goto accept19;
alt10_7: ptr->pos=oldpos19;goto fail;
 accept19:;
 break;
case 'b' ... 'b':; int oldpos21=ptr->pos;int cut11=0;
alt11_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='k')  ptr->pos+=4; else goto alt11_2;it=rb_funcall(self,sy_AmethystParser_Seq_lb_Cut_lb__3505,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept21;
alt11_2: ptr->pos=oldpos21;  it=AmethystParser_cases(self ); FAILTEST(alt11_3); bind_aset(bind,0/*_result*/,it);

;goto accept21;
alt11_3: ptr->pos=oldpos21;  it=AmethystParser_call(self ); FAILTEST(alt11_4); bind_aset(bind,0/*_result*/,it);

;goto accept21;
alt11_4: ptr->pos=oldpos21;int oldpos22=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject9; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept22;  reject9: x=0; accept22: it=Qnil; ptr->pos=oldpos22; if (x==0) goto alt11_5;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept21;
alt11_5: ptr->pos=oldpos21;  it=AmethystParser_key(self ); FAILTEST(alt11_6); bind_aset(bind,1/*it*/,it);
it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind);  bind_aset(bind,0/*_result*/,it);

;goto accept21;
alt11_6: ptr->pos=oldpos21;  it=AmethystParser_host_expr(self ); FAILTEST(alt11_7); bind_aset(bind,0/*_result*/,it);

;goto accept21;
alt11_7: ptr->pos=oldpos21;goto fail;
 accept21:;
 break;
}
return it;
fail: return failobj; }
void Init_parser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    s_Amethyst_fe41=rb_str_new2("Amethyst");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_Amethyst_fe41);
s__bq__8333=rb_str_new2("`");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bq__8333);
s__bs__bs__7f81=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__bs__7f81);
s__bs__sh__le__a90f=rb_str_new2("\#{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__sh__le__a90f);
s__co__at__4bf0=rb_str_new2(":@");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__co__at__4bf0);
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
sy_AmethystParser_Apply_lb__dq_s_b3ee=rb_intern("AmethystParser_Apply_lb__dq_s_b3ee");
sy_AmethystParser_Apply_lb__dq_t_f6a3=rb_intern("AmethystParser_Apply_lb__dq_t_f6a3");
sy_AmethystParser_Apply_lb__lb_b_a4cc=rb_intern("AmethystParser_Apply_lb__lb_b_a4cc");
sy_AmethystParser_Apply_lb_bi_9146=rb_intern("AmethystParser_Apply_lb_bi_9146");
sy_AmethystParser_Args_lb__le__co_a_34c4=rb_intern("AmethystParser_Args_lb__le__co_a_34c4");
sy_AmethystParser_Args_lb__le__co_a_7d66=rb_intern("AmethystParser_Args_lb__le__co_a_7d66");
sy_AmethystParser_Args_lb__le__co_a_d997=rb_intern("AmethystParser_Args_lb__le__co_a_d997");
sy_AmethystParser_Bind_lb_loc_eddf=rb_intern("AmethystParser_Bind_lb_loc_eddf");
sy_AmethystParser_Comment_lb__ba90=rb_intern("AmethystParser_Comment_lb__ba90");
sy_AmethystParser_Enter_lb_Ap_3cd0=rb_intern("AmethystParser_Enter_lb_Ap_3cd0");
sy_AmethystParser_Enter_lb_bi_68d7=rb_intern("AmethystParser_Enter_lb_bi_68d7");
sy_AmethystParser_Global_lb_b_8edb=rb_intern("AmethystParser_Global_lb_b_8edb");
sy_AmethystParser_Grammar_dot__80c6=rb_intern("AmethystParser_Grammar_dot__80c6");
sy_AmethystParser_Key_lb_bind_20b7=rb_intern("AmethystParser_Key_lb_bind_20b7");
sy_AmethystParser_Lambda_lb_B_780d=rb_intern("AmethystParser_Lambda_lb_B_780d");
sy_AmethystParser_Lookahea_b11c=rb_intern("AmethystParser_Lookahea_b11c");
sy_AmethystParser_Many_lb_bin_33ac=rb_intern("AmethystParser_Many_lb_bin_33ac");
sy_AmethystParser_Nested_lb_b_f1a4=rb_intern("AmethystParser_Nested_lb_b_f1a4");
sy_AmethystParser_Or_AST_dot_c_163b=rb_intern("AmethystParser_Or_AST_dot_c_163b");
sy_AmethystParser_Or_AST_lb_b_1d9d=rb_intern("AmethystParser_Or_AST_lb_b_1d9d");
sy_AmethystParser_Pass_lb_bin_9af8=rb_intern("AmethystParser_Pass_lb_bin_9af8");
sy_AmethystParser_Pred_lb_bin_4918=rb_intern("AmethystParser_Pred_lb_bin_4918");
sy_AmethystParser_Result_lb__le__ae0e=rb_intern("AmethystParser_Result_lb__le__ae0e");
sy_AmethystParser_Rule_dot_cre_e3af=rb_intern("AmethystParser_Rule_dot_cre_e3af");
sy_AmethystParser_Seq_dot_crea_abce=rb_intern("AmethystParser_Seq_dot_crea_abce");
sy_AmethystParser_Seq_lb_Bind_50cd=rb_intern("AmethystParser_Seq_lb_Bind_50cd");
sy_AmethystParser_Seq_lb_Cut_lb__3505=rb_intern("AmethystParser_Seq_lb_Cut_lb__3505");
sy_AmethystParser_Strin_lb__lb__dq__b4c8=rb_intern("AmethystParser_Strin_lb__lb__dq__b4c8");
sy_AmethystParser_Strin_lb__lb__qu__e751=rb_intern("AmethystParser_Strin_lb__lb__qu__e751");
sy_AmethystParser__append_lp__0df6=rb_intern("AmethystParser__append_lp__0df6");
sy_AmethystParser__append_lp__4b67=rb_intern("AmethystParser__append_lp__4b67");
sy_AmethystParser__append_lp__4de3=rb_intern("AmethystParser__append_lp__4de3");
sy_AmethystParser__append_lp__50ed=rb_intern("AmethystParser__append_lp__50ed");
sy_AmethystParser__append_lp__565b=rb_intern("AmethystParser__append_lp__565b");
sy_AmethystParser__append_lp__66a2=rb_intern("AmethystParser__append_lp__66a2");
sy_AmethystParser__append_lp__6948=rb_intern("AmethystParser__append_lp__6948");
sy_AmethystParser__append_lp__6f56=rb_intern("AmethystParser__append_lp__6f56");
sy_AmethystParser__append_lp__8061=rb_intern("AmethystParser__append_lp__8061");
sy_AmethystParser__append_lp__81ec=rb_intern("AmethystParser__append_lp__81ec");
sy_AmethystParser__append_lp__9ca5=rb_intern("AmethystParser__append_lp__9ca5");
sy_AmethystParser__append_lp__9e15=rb_intern("AmethystParser__append_lp__9e15");
sy_AmethystParser__append_lp__a474=rb_intern("AmethystParser__append_lp__a474");
sy_AmethystParser__append_lp__b2a5=rb_intern("AmethystParser__append_lp__b2a5");
sy_AmethystParser__append_lp__b375=rb_intern("AmethystParser__append_lp__b375");
sy_AmethystParser__append_lp__bab9=rb_intern("AmethystParser__append_lp__bab9");
sy_AmethystParser__append_lp__cbd1=rb_intern("AmethystParser__append_lp__cbd1");
sy_AmethystParser__append_lp__d113=rb_intern("AmethystParser__append_lp__d113");
sy_AmethystParser__append_lp__d1e3=rb_intern("AmethystParser__append_lp__d1e3");
sy_AmethystParser__append_lp__d43a=rb_intern("AmethystParser__append_lp__d43a");
sy_AmethystParser__append_lp__d472=rb_intern("AmethystParser__append_lp__d472");
sy_AmethystParser__append_lp__dd73=rb_intern("AmethystParser__append_lp__dd73");
sy_AmethystParser__append_lp__ded9=rb_intern("AmethystParser__append_lp__ded9");
sy_AmethystParser__append_lp__f8f8=rb_intern("AmethystParser__append_lp__f8f8");
sy_AmethystParser__at_appends_5d33=rb_intern("AmethystParser__at_appends_5d33");
sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
sy_AmethystParser__at_locals_eq__4fc1=rb_intern("AmethystParser__at_locals_eq__4fc1");
sy_AmethystParser__at_tmp_lt__lt_bi_c4f3=rb_intern("AmethystParser__at_tmp_lt__lt_bi_c4f3");
sy_AmethystParser__dq__le__dq__pl_bind_567e=rb_intern("AmethystParser__dq__le__dq__pl_bind_567e");
sy_AmethystParser__lb_bind_lb_25_dd55=rb_intern("AmethystParser__lb_bind_lb_25_dd55");
sy_AmethystParser__lp_bind_lb_0_rb__418b=rb_intern("AmethystParser__lp_bind_lb_0_rb__418b");
sy_AmethystParser_a_eq_autova_0926=rb_intern("AmethystParser_a_eq_autova_0926");
sy_AmethystParser_a_eq_autova_a27c=rb_intern("AmethystParser_a_eq_autova_a27c");
sy_AmethystParser_bind_lb_0_rb_=rb_intern("AmethystParser_bind_lb_0_rb_");
sy_AmethystParser_bind_lb_0_rb__dot__206f=rb_intern("AmethystParser_bind_lb_0_rb__dot__206f");
sy_AmethystParser_bind_lb_0_rb__dot__afad=rb_intern("AmethystParser_bind_lb_0_rb__dot__afad");
sy_AmethystParser_bind_lb_10_rb__ed2a=rb_intern("AmethystParser_bind_lb_10_rb__ed2a");
sy_AmethystParser_bind_lb_10_rb__ff8c=rb_intern("AmethystParser_bind_lb_10_rb__ff8c");
sy_AmethystParser_bind_lb_14_rb__e68b=rb_intern("AmethystParser_bind_lb_14_rb__e68b");
sy_AmethystParser_bind_lb_21_rb__d581=rb_intern("AmethystParser_bind_lb_21_rb__d581");
sy_AmethystParser_bind_lb_2_rb_=rb_intern("AmethystParser_bind_lb_2_rb_");
sy_AmethystParser_bind_lb_3_rb__dot__e626=rb_intern("AmethystParser_bind_lb_3_rb__dot__e626");
sy_AmethystParser_bind_lb_3_rb__eq__bbe1=rb_intern("AmethystParser_bind_lb_3_rb__eq__bbe1");
sy_AmethystParser_bind_lb_4_rb_=rb_intern("AmethystParser_bind_lb_4_rb_");
sy_AmethystParser_bind_lb_4_rb__dot__e4b4=rb_intern("AmethystParser_bind_lb_4_rb__dot__e4b4");
sy_AmethystParser_bind_lb_4_rb__pl__13b0=rb_intern("AmethystParser_bind_lb_4_rb__pl__13b0");
sy_AmethystParser_bind_lb_5_rb__dot__028b=rb_intern("AmethystParser_bind_lb_5_rb__dot__028b");
sy_AmethystParser_bind_lb_7_rb_=rb_intern("AmethystParser_bind_lb_7_rb_");
sy_AmethystParser_bind_lb_7_rb__dot__35cf=rb_intern("AmethystParser_bind_lb_7_rb__dot__35cf");
sy_AmethystParser_bind_lb_8_rb_=rb_intern("AmethystParser_bind_lb_8_rb_");
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
                    rb_eval_string("testversionparser('af3a82a789729006a42f4eae54e767d3')");}
