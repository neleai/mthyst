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
static VALUE sy_AmethystParser_Act_lb_Args_23b1;
static VALUE sy_AmethystParser_Act_lb_bind_7d0b;
static VALUE sy_AmethystParser_Apply_lb__dq_a_1437;
static VALUE sy_AmethystParser_Apply_lb__dq_c_a8b6;
static VALUE sy_AmethystParser_Apply_lb__dq_m_2ec1;
static VALUE sy_AmethystParser_Apply_lb__dq_r_269c;
static VALUE sy_AmethystParser_Apply_lb__dq_s_9322;
static VALUE sy_AmethystParser_Apply_lb__dq_t_e958;
static VALUE sy_AmethystParser_Apply_lb__lb_b_099b;
static VALUE sy_AmethystParser_Apply_lb_bi_9146;
static VALUE sy_AmethystParser_Args_lb__le__co_a_9abe;
static VALUE sy_AmethystParser_Bind_lb_loc_37df;
static VALUE sy_AmethystParser_Comment_lb__ed6f;
static VALUE sy_AmethystParser_Enter_lb_Ap_7d1f;
static VALUE sy_AmethystParser_Enter_lb_bi_9246;
static VALUE sy_AmethystParser_Global_lb_b_0216;
static VALUE sy_AmethystParser_Grammar_dot__a510;
static VALUE sy_AmethystParser_Key_lb_bind_5e9f;
static VALUE sy_AmethystParser_Lambda_lb_B_2c90;
static VALUE sy_AmethystParser_Lookahea_0946;
static VALUE sy_AmethystParser_Many_lb_bin_14d1;
static VALUE sy_AmethystParser_Nested_lb_b_1ac2;
static VALUE sy_AmethystParser_Or_AST_dot_c_19e2;
static VALUE sy_AmethystParser_Or_AST_lb_b_0657;
static VALUE sy_AmethystParser_Pass_lb_bin_2f93;
static VALUE sy_AmethystParser_Pred_lb_bin_ae38;
static VALUE sy_AmethystParser_Result_lb__le__a3b4;
static VALUE sy_AmethystParser_Rule_dot_cre_3767;
static VALUE sy_AmethystParser_Seq_dot_crea_bfbb;
static VALUE sy_AmethystParser_Seq_lb_Bind_bbb6;
static VALUE sy_AmethystParser_Seq_lb_Cut_lb__3505;
static VALUE sy_AmethystParser_Strin_lb__lb__dq__b20e;
static VALUE sy_AmethystParser_Strin_lb__lb__qu__88c8;
static VALUE sy_AmethystParser__append_lp__d113;
static VALUE sy_AmethystParser__at_appends_975f;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__4fc1;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_b81c;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_567e;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__6281;
static VALUE sy_AmethystParser__lp_bind_lb_1_rb__a724;
static VALUE sy_AmethystParser_a_eq_autova_5b84;
static VALUE sy_AmethystParser_bind_lb_1_rb_;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__7b93;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__cc9d;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__e879;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__f15c;
static VALUE sy_AmethystParser_bind_lb_1_rb__pl__b087;
static VALUE sy_AmethystParser_local_lp_bi_196b;

#include "../lib/c/memo.c"
 memo_struct *mem;VALUE memo_val;VALUE profile_report(VALUE self){printf("argsOpt hit: %i miss: %i\n",mem->hits[113],mem->miss[113]);printf("name hit: %i miss: %i\n",mem->hits[115],mem->miss[115]);return Qnil;}VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16); var0/*o*/=a0;;var5/*c*/=a1;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=var0/*o*/; var1/*s*/=it;;
 it=var1/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=var1/*s*/;  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var2/*autovar*/; var4/*r*/=it;;
it=var5/*c*/; var1/*s*/=it;;
 it=var1/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=var1/*s*/;bind_aset(bind2,1,var4/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var4/*r*/=bind_aget(bind2,1);; var6/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10; ;VALUE bind2=bind_new2(16); var2/*o*/=a0;;var0/*c*/=a1;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=var0/*c*/; var1/*c*/=it;;
it=var2/*o*/; var3/*o*/=it;;
it=var3/*o*/; var4/*s*/=it;;
 it=var4/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=var4/*s*/;  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); var5/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); var6/*autovar*/=it;;
bind_aset(bind2,1,var5/*autovar*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var5/*autovar*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var5/*autovar*/; var7/*r*/=it;;
it=var1/*c*/; var4/*s*/=it;;
 it=var4/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=var4/*s*/;bind_aset(bind2,1,var7/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var7/*r*/=bind_aget(bind2,1);; var8/*_result*/=it;;
it=var8/*_result*/; var9/*r*/=it;;
bind_aset(bind2,1,var2/*o*/);bind_aset(bind2,2,var9/*r*/);bind_aset(bind2,3,var0/*c*/);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);var2/*o*/=bind_aget(bind2,1);;var9/*r*/=bind_aget(bind2,2);;var0/*c*/=bind_aget(bind2,3);; var10/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_argsOpt(VALUE self ){VALUE vals[0]; VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
int oldpos=ptr->pos;if (memo_pos(mem,115,ptr->src,ptr->pos)!=-1) {it=memo_value(mem,115,ptr->src,ptr->pos);ptr->pos=memo_pos(mem,115,ptr->src,ptr->pos);return it;} int oldpos1=ptr->pos;int cut1=0;
alt1_1:;int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Amethyst__(self ); FAILTEST(alt2_2);cut2=1;goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;if (cut2) goto alt1_2;it=Qnil;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; goto alt1_2; break;
case '(' ... '(':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos3;   it=var0/*autovar*/; var2/*r*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt1_2; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var2/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var2/*r*/=bind_aget(bind2,1);; var3/*_result*/=it;;
it=var3/*_result*/; var4/*r*/=it;;
bind_aset(bind2,1,var4/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__pl__b087,1,bind2);var4/*r*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var5/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var6/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystParser_procargs(self ); FAILTEST(pass2); var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var8/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var8/*autovar*/; var9/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_ary_new3(0); var9/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

 memo_add(mem,115,ptr->src,oldpos,it,ptr->pos); return it;
fail: memo_add(mem,115,ptr->src,oldpos,failobj,ptr->pos); return failobj; }
VALUE AmethystParser_call(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_className(self ); FAILTEST(alt1_2); var0/*klas*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt1_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1; else goto alt1_2; break;
}  it=AmethystParser_name(self ); FAILTEST(alt1_2); var1/*name*/=it;;
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2); var2/*arg*/=it;;
bind_aset(bind2,1,var0/*klas*/);bind_aset(bind2,2,var1/*name*/);bind_aset(bind2,3,var2/*arg*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__lb_b_099b,1,bind2);var0/*klas*/=bind_aget(bind2,1);;var1/*name*/=bind_aget(bind2,2);;var2/*arg*/=bind_aget(bind2,3);; var3/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_name(self ); FAILTEST(alt1_3); var1/*name*/=it;;
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_3); var2/*arg*/=it;;
bind_aset(bind2,1,var1/*name*/);bind_aset(bind2,2,var2/*arg*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind2);var1/*name*/=bind_aget(bind2,1);;var2/*arg*/=bind_aget(bind2,2);; var3/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_cases(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_className(self ); FAILTEST(alt1_2); var0/*clas*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; it=Qnil; break;
case ':' ... ':':; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1; else goto alt2_2;cut2=1;goto alt2_2;
;goto accept2;
alt2_2: ptr->pos=oldpos2;if (cut2) goto alt1_2;it=Qnil;
;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;
 break;
}bind_aset(bind2,1,var0/*clas*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_a8b6,1,bind2);var0/*clas*/=bind_aget(bind2,1);; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;int oldpos3=ptr->pos;int cut3=0;
alt3_1:;it=rb_ary_new3(0); var2/*autovar*/=it;;
  it=Amethyst_number(self ); FAILTEST(alt3_2); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... UC(255):; goto alt3_2; break;
case '.' ... '.':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos4=ptr->pos;int cut4=0;
alt4_1:;if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2; else goto alt4_2;it=rb_obj_clone(s__dot__dot__dot__2f43); var4/*_result*/=it;;
it=var4/*_result*/; var5/*autovar*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1; else goto alt4_3;it=rb_obj_clone(s__dot__dot__58b9); var4/*_result*/=it;;
it=var4/*_result*/; var5/*autovar*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto alt3_2;
 accept4:;
 break;
}bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;  it=Amethyst_number(self ); FAILTEST(alt3_2); var6/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);;it=var2/*autovar*/; var7/*it*/=it;;
bind_aset(bind2,1,var7/*it*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);var7/*it*/=bind_aget(bind2,1);; var8/*num*/=it;;

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=Amethyst_number(self ); FAILTEST(alt3_3); var8/*num*/=it;;

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto alt1_3;
 accept3:;
bind_aset(bind2,1,var8/*num*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_2ec1,1,bind2);var8/*num*/=bind_aget(bind2,1);; var1/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_obj_clone(s__lt__524a); var9/*s*/=it;;
 it=var9/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_4);it=var9/*s*/;it=rb_ary_new3(0); var10/*x*/=it;;
int oldpos5; int stop1=0; while(1){oldpos5=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos6=ptr->pos;int cut5=0;
alt5_1:;it=rb_obj_clone(s__gt__cedf); var9/*s*/=it;;
goto alt5_2;
;goto accept6;
alt5_2: ptr->pos=oldpos6;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); var11/*autovar*/=it;;
bind_aset(bind2,1,var10/*x*/);bind_aset(bind2,2,var11/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var10/*x*/=bind_aget(bind2,1);;var11/*autovar*/=bind_aget(bind2,2);;
;goto accept6;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept6:;
 break;
case '>' ... '>':; it=rb_obj_clone(s__gt__cedf); var9/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop1=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '=':;case '?' ... UC(255):; int oldpos7=ptr->pos;int cut6=0;
alt6_1:;it=rb_obj_clone(s__gt__cedf); var9/*s*/=it;;
goto alt6_2;
;goto accept7;
alt6_2: ptr->pos=oldpos7;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); var12/*autovar*/=it;;
bind_aset(bind2,1,var10/*x*/);bind_aset(bind2,2,var12/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var10/*x*/=bind_aget(bind2,1);;var12/*autovar*/=bind_aget(bind2,2);;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); var11/*autovar*/=it;;
bind_aset(bind2,1,var10/*x*/);bind_aset(bind2,2,var11/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var10/*x*/=bind_aget(bind2,1);;var11/*autovar*/=bind_aget(bind2,2);;
;goto accept7;
alt6_3: ptr->pos=oldpos7;goto break1;
 accept7:;
 break;
case '>' ... '>':; it=rb_obj_clone(s__gt__cedf); var9/*s*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut1=1;stop1=1; break;
} break;
} if (stop1) goto accept5; } break1: goto alt1_4; accept5:;   bind_aset(bind2,1,var10/*x*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var10/*x*/=bind_aget(bind2,1);; var13/*_result*/=it;;
it=var13/*_result*/; var14/*s*/=it;;
bind_aset(bind2,1,var14/*s*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_r_269c,1,bind2);var14/*s*/=bind_aget(bind2,1);; var1/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;if (cut1) goto fail;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_className(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... UC(255):; goto fail; break;
case 'A' ... 'Z':; it=rb_ary_new3(0); var0/*autovar*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; break;
} } break1: ptr->pos=oldpos1;   it=var2/*autovar*/; var4/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);;it=var0/*autovar*/; var5/*it*/=it;;
bind_aset(bind2,1,var5/*it*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);var5/*it*/=bind_aget(bind2,1);; var6/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16); var0/*ors*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*ors*/);it=rb_funcall(self,sy_AmethystParser_a_eq_autova_5b84,1,bind2);var0/*ors*/=bind_aget(bind2,1);; var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*f*/=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_sequence(self ); FAILTEST(alt1_2); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*f*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*f*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos;   it=Amethyst_spaces(self ); FAILTEST(break1);if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1; else goto break1;  it=AmethystParser_sequence(self ); FAILTEST(break1); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos2;   it=var2/*autovar*/; var4/*autovar*/=it;;
bind_aset(bind2,1,var0/*f*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*f*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*f*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var0/*f*/=bind_aget(bind2,1);; var5/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=Qnil;it=rb_ary_new3(0); var5/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
it=var5/*_result*/; var6/*ary*/=it;;
bind_aset(bind2,1,var6/*ary*/);it=rb_funcall(self,sy_AmethystParser_Or_AST_dot_c_19e2,1,bind2);var6/*ary*/=bind_aget(bind2,1);; var7/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto fail; break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto fail; break;
}  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); var0/*name*/=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... UC(255):; goto alt1_2; break;
case '<' ... '<':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2); var1/*parent*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_obj_clone(s_Amethyst_fe41); var1/*parent*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'z':;case '|' ... UC(255):; goto fail; break;
case '{' ... '{':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystParser_rule(self ); FAILTEST(break1); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos2;   it=var2/*autovar*/; var4/*rules*/=it;;
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto fail; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var0/*name*/);bind_aset(bind2,2,var1/*parent*/);bind_aset(bind2,3,var4/*rules*/);it=rb_funcall(self,sy_AmethystParser_Grammar_dot__a510,1,bind2);var0/*name*/=bind_aget(bind2,1);;var1/*parent*/=bind_aget(bind2,2);;var4/*rules*/=bind_aget(bind2,3);; var5/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_host_expr(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... UC(255):;   it=AmethystParser_inline_host_expr(self ); FAILTEST(fail); var0/*_result*/=it;;
 break;
case '-' ... '-':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_inline_host_expr(self ); FAILTEST(alt1_2); var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else goto alt1_3;  it=Amethyst_line(self ); FAILTEST(alt1_3); var1/*s*/=it;;
bind_aset(bind2,1,var1/*s*/);it=rb_funcall(self,sy_AmethystParser__dq__le__dq__pl_bind_567e,1,bind2);var1/*s*/=bind_aget(bind2,1);; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var2/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystParser_inline_host_expr(self ); FAILTEST(pass2); var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=var4/*autovar*/; var5/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=var5/*autovar*/; var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_igrammar(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=rb_ary_new3(0); var1/*autovar*/=it;;
it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); var2/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;int oldpos3;  while(1){oldpos3=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break2); var3/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; break;
case 'a' ... 'a':; int oldpos4=ptr->pos;int cut2=0;
alt2_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto alt2_2;cut2=1;goto alt2_2;
;goto accept4;
alt2_2: ptr->pos=oldpos4;if (cut2) goto break2;it=Qnil;
;goto accept4;
alt2_3: ptr->pos=oldpos4;goto break2;
 accept4:;
  it=AmethystCore_anything(self ); FAILTEST(break2); var3/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; break;
} } break2: ptr->pos=oldpos3;   it=var1/*autovar*/; var4/*it*/=it;;
bind_aset(bind2,1,var4/*it*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);var4/*it*/=bind_aget(bind2,1);; var5/*autovar*/=it;;

;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystParser_grammar(self ); FAILTEST(alt1_3); var5/*autovar*/=it;;

;goto accept2;
alt1_3: ptr->pos=oldpos2;  it=Amethyst_spaces(self ); FAILTEST(alt1_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt1_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=AmethystParser_expression(self ); FAILTEST(alt1_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt1_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_obj_clone(s__bq__8333); var6/*_result*/=it;;
it=var6/*_result*/; var5/*autovar*/=it;;

;goto accept2;
alt1_4: ptr->pos=oldpos2;goto break1;
 accept2:;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; break;
case 'a' ... 'a':; int oldpos5=ptr->pos;int cut3=0;
alt3_1:;it=rb_ary_new3(0); var1/*autovar*/=it;;
int oldpos6=ptr->pos;int cut4=0;
alt4_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto alt4_2;cut4=1;goto alt4_2;
;goto accept6;
alt4_2: ptr->pos=oldpos6;if (cut4) goto alt3_2;it=Qnil;
;goto accept6;
alt4_3: ptr->pos=oldpos6;goto alt3_2;
 accept6:;
  it=AmethystCore_anything(self ); FAILTEST(alt3_2); var2/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;int oldpos7;  while(1){oldpos7=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break3); var3/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; break;
case 'a' ... 'a':; int oldpos8=ptr->pos;int cut5=0;
alt5_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else goto alt5_2;cut5=1;goto alt5_2;
;goto accept8;
alt5_2: ptr->pos=oldpos8;if (cut5) goto break3;it=Qnil;
;goto accept8;
alt5_3: ptr->pos=oldpos8;goto break3;
 accept8:;
  it=AmethystCore_anything(self ); FAILTEST(break3); var3/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; break;
} } break3: ptr->pos=oldpos7;   it=var1/*autovar*/; var4/*it*/=it;;
bind_aset(bind2,1,var4/*it*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);var4/*it*/=bind_aget(bind2,1);; var5/*autovar*/=it;;

;goto accept5;
alt3_2: ptr->pos=oldpos5;  it=AmethystParser_grammar(self ); FAILTEST(alt3_3); var5/*autovar*/=it;;

;goto accept5;
alt3_3: ptr->pos=oldpos5;  it=Amethyst_spaces(self ); FAILTEST(alt3_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt3_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=AmethystParser_expression(self ); FAILTEST(alt3_4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt3_4; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_obj_clone(s__bq__8333); var6/*_result*/=it;;
it=var6/*_result*/; var5/*autovar*/=it;;

;goto accept5;
alt3_4: ptr->pos=oldpos5;goto break1;
 accept5:;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; break;
} } break1: ptr->pos=oldpos1;   it=var0/*autovar*/; var7/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_inline_host_expr(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'z':;case '|' ... UC(255):; goto fail; break;
case '{' ... '{':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(fail);it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var0/*autovar*/; var2/*r*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto fail; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var2/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var2/*r*/=bind_aget(bind2,1);; var3/*_result*/=it;;
it=var3/*_result*/; var4/*r*/=it;;
bind_aset(bind2,1,var4/*r*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_23b1,1,bind2);var4/*r*/=bind_aget(bind2,1);; var5/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14; ;VALUE bind2=bind_new2(16); var1/*e*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*x*/=it;;
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(34):;case '$' ... '[':;case ']' ... UC(255):; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=var1/*e*/; var2/*s*/=it;;
 it=var2/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=var2/*s*/;cut1=1;stop1=1;
;goto accept2;
alt1_2: ptr->pos=oldpos2;if (cut1) goto break1;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var3/*autovar*/=it;;
bind_aset(bind2,1,var0/*x*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*x*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);;
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 break;
case '#' ... '#':; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=var1/*e*/; var2/*s*/=it;;
 it=var2/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=var2/*s*/;cut2=1;stop1=1;
;goto accept3;
alt2_2: ptr->pos=oldpos3;if (cut2) goto break1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1; else goto alt2_3;  it=Amethyst_spaces(self ); FAILTEST(alt2_3);it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos4;  while(1){oldpos4=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break2); var5/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; } break2: ptr->pos=oldpos4;   it=var4/*autovar*/; var6/*r*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto alt2_3; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var6/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var6/*r*/=bind_aget(bind2,1);; var7/*_result*/=it;;
it=var7/*_result*/; var8/*r*/=it;;
it=rb_obj_clone(s__bs__sh__le__a90f); var9/*o*/=it;;
it=rb_obj_clone(s__re__cbb1); var10/*c*/=it;;
bind_aset(bind2,1,var9/*o*/);bind_aset(bind2,2,var8/*r*/);bind_aset(bind2,3,var10/*c*/);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);var9/*o*/=bind_aget(bind2,1);;var8/*r*/=bind_aget(bind2,2);;var10/*c*/=bind_aget(bind2,3);; var11/*_result*/=it;;
it=var11/*_result*/; var12/*autovar*/=it;;
bind_aset(bind2,1,var0/*x*/);bind_aset(bind2,2,var12/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*x*/=bind_aget(bind2,1);;var12/*autovar*/=bind_aget(bind2,2);;
;goto accept3;
alt2_3: ptr->pos=oldpos3;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var3/*autovar*/=it;;
bind_aset(bind2,1,var0/*x*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*x*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);;
;goto accept3;
alt2_4: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case UC(92) ... UC(92):; int oldpos5=ptr->pos;int cut3=0;
alt3_1:;it=var1/*e*/; var2/*s*/=it;;
 it=var2/*s*/; arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt3_2);it=var2/*s*/;cut3=1;stop1=1;
;goto accept5;
alt3_2: ptr->pos=oldpos5;if (cut3) goto break1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); var13/*autovar*/=it;;
bind_aset(bind2,1,var0/*x*/);bind_aset(bind2,2,var13/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*x*/=bind_aget(bind2,1);;var13/*autovar*/=bind_aget(bind2,2);;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var3/*autovar*/=it;;
bind_aset(bind2,1,var0/*x*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*x*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);;
;goto accept5;
alt3_3: ptr->pos=oldpos5;goto break1;
 accept5:;
 break;
} if (stop1) goto accept1; } break1: goto fail; accept1:;   bind_aset(bind2,1,var0/*x*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var0/*x*/=bind_aget(bind2,1);; var14/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_key(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '?':;case 'A' ... UC(255):; goto fail; break;
case '@' ... '@':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_className(self ); FAILTEST(alt1_2); var0/*name*/=it;;
bind_aset(bind2,1,var0/*name*/);it=rb_funcall(self,sy_AmethystParser_Result_lb__le__a3b4,1,bind2);var0/*name*/=bind_aget(bind2,1);; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_name(self ); FAILTEST(alt1_3); var0/*name*/=it;;
  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_3); var2/*arg*/=it;;
bind_aset(bind2,1,var0/*name*/);bind_aset(bind2,2,var2/*arg*/);it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_5e9f,1,bind2);var0/*name*/=bind_aget(bind2,1);;var2/*arg*/=bind_aget(bind2,2);; var1/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt1_4;  it=AmethystParser_name(self ); FAILTEST(alt1_4); var0/*name*/=it;;
bind_aset(bind2,1,var0/*name*/);it=rb_funcall(self,sy_AmethystParser_Global_lb_b_0216,1,bind2);var0/*name*/=bind_aget(bind2,1);; var1/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_local(VALUE self ,VALUE a0){VALUE vals[1];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16); var0/*x*/=a0;; int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,var0/*x*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__cc9d,1,bind2);var0/*x*/=bind_aget(bind2,1);; var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
int oldpos=ptr->pos;if (memo_pos(mem,113,ptr->src,ptr->pos)!=-1) {it=memo_value(mem,113,ptr->src,ptr->pos);ptr->pos=memo_pos(mem,113,ptr->src,ptr->pos);return it;} switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); var0/*autovar*/=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; break;
} } break1: ptr->pos=oldpos1;   it=var2/*autovar*/; var4/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);;it=var0/*autovar*/; var5/*it*/=it;;
bind_aset(bind2,1,var5/*it*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);var5/*it*/=bind_aget(bind2,1);; var6/*_result*/=it;;
 break;
}
 memo_add(mem,113,ptr->src,oldpos,it,ptr->pos); return it;
fail: memo_add(mem,113,ptr->src,oldpos,failobj,ptr->pos); return failobj; }
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0];  VALUE var0; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst_spaces(self ); FAILTEST(alt1_2);  it=AmethystParser_name(self ); FAILTEST(alt1_2);  it=AmethystParser_argsOpt(self ); FAILTEST(alt1_2);  it=Amethyst_spaces(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '<':;case '>' ... UC(255):; goto alt1_2; break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}cut1=1;goto alt1_2;
;goto accept1;
alt1_2: ptr->pos=oldpos1;if (cut1) goto fail;it=Qnil; var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE AmethystParser_postfixed(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystParser_term(self ); FAILTEST(fail); var0/*from*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst__(self ); FAILTEST(alt1_2);cut1=1;goto alt1_2;
;goto accept2;
alt1_2: ptr->pos=oldpos2;if (cut1) goto break1;it=Qnil;
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case ',' ... '9':;case ';' ... '<':;case '>' ... '>':;case '@' ... 'Z':;case UC(92) ... UC(255):; goto break1; break;
case '*' ... '+':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var1/*one*/=it;;
bind_aset(bind2,1,var0/*from*/);bind_aset(bind2,2,var1/*one*/);it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_14d1,1,bind2);var0/*from*/=bind_aget(bind2,1);;var1/*one*/=bind_aget(bind2,2);; var0/*from*/=it;;
 break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos3=ptr->pos;int cut2=0;
alt2_1:;int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystParser_key(self ); FAILTEST(alt3_2); var2/*name*/=it;;

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystParser_name(self ); FAILTEST(alt3_3); var2/*name*/=it;;

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto alt2_2;
 accept4:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; it=Qnil; var3/*append*/=it;;
 break;
case '[' ... '[':; int oldpos5=ptr->pos;int cut4=0;
alt4_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt4_2;it=rb_obj_clone(s__lb__rb__d751); var4/*_result*/=it;;
it=var4/*_result*/; var3/*append*/=it;;

;goto accept5;
alt4_2: ptr->pos=oldpos5;it=Qnil; var3/*append*/=it;;

;goto accept5;
alt4_3: ptr->pos=oldpos5;goto alt2_2;
 accept5:;
 break;
}bind_aset(bind2,1,var2/*name*/);bind_aset(bind2,2,var3/*append*/);bind_aset(bind2,3,var0/*from*/);it=rb_funcall(self,sy_AmethystParser__at_appends_975f,1,bind2);var2/*name*/=bind_aget(bind2,1);;var3/*append*/=bind_aget(bind2,2);;var0/*from*/=bind_aget(bind2,3);; var0/*from*/=it;;

;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystParser_inline_host_expr(self ); FAILTEST(alt2_3); var5/*e*/=it;;
bind_aset(bind2,1,var0/*from*/);bind_aset(bind2,2,var5/*e*/);it=rb_funcall(self,sy_AmethystParser_Seq_lb_Bind_bbb6,1,bind2);var0/*from*/=bind_aget(bind2,1);;var5/*e*/=bind_aget(bind2,2);; var0/*from*/=it;;

;goto accept3;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else goto break1;  it=AmethystParser_term(self ); FAILTEST(break1); var5/*e*/=it;;
bind_aset(bind2,1,var0/*from*/);bind_aset(bind2,2,var5/*e*/);it=rb_funcall(self,sy_AmethystParser_Pass_lb_bin_2f93,1,bind2);var0/*from*/=bind_aget(bind2,1);;var5/*e*/=bind_aget(bind2,2);; var0/*from*/=it;;
 break;
case '?' ... '?':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;bind_aset(bind2,1,var0/*from*/);it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_0657,1,bind2);var0/*from*/=bind_aget(bind2,1);; var0/*from*/=it;;
 break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(break1); var5/*e*/=it;;
  it=Amethyst_spaces(self ); FAILTEST(break1);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto break1; break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var0/*from*/);bind_aset(bind2,2,var5/*e*/);it=rb_funcall(self,sy_AmethystParser_Enter_lb_bi_9246,1,bind2);var0/*from*/=bind_aget(bind2,1);;var5/*e*/=bind_aget(bind2,2);; var0/*from*/=it;;
 break;
} } break1: ptr->pos=oldpos1;   it=var0/*from*/; var6/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... '}':;case UC(127) ... UC(255):;   it=AmethystParser_postfixed(self ); FAILTEST(fail); var0/*_result*/=it;;
 break;
case '&' ... '&':;case '~' ... '~':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var1/*autovar*/=it;;
it=var1/*autovar*/; var2/*autovar*/=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=var2/*autovar*/; var3/*neg*/=it;;
  it=AmethystParser_inline_host_expr(self ); FAILTEST(alt2_2); var4/*expr*/=it;;
bind_aset(bind2,1,var4/*expr*/);bind_aset(bind2,2,var3/*neg*/);it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_ae38,1,bind2);var4/*expr*/=bind_aget(bind2,1);;var3/*neg*/=bind_aget(bind2,2);; var0/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=var2/*autovar*/; var3/*neg*/=it;;
  it=AmethystParser_prefixed(self ); FAILTEST(alt2_3); var5/*m*/=it;;
bind_aset(bind2,1,var5/*m*/);bind_aset(bind2,2,var3/*neg*/);it=rb_funcall(self,sy_AmethystParser_Lookahea_0946,1,bind2);var5/*m*/=bind_aget(bind2,1);;var3/*neg*/=bind_aget(bind2,2);; var0/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_postfixed(self ); FAILTEST(alt1_3); var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystParser__at_ary_eq__lb__rb_,1,bind2);int oldpos1;  while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); var0/*c*/=it;;
bind_aset(bind2,1,var0/*c*/);it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_1_rb__a724,1,bind2);var0/*c*/=bind_aget(bind2,1);;FAILTEST(alt1_2);it=rb_funcall(self,sy_AmethystParser__at_ary_lt__lt_Ar_59e3,1,bind2);
;goto accept2;
alt1_2: ptr->pos=oldpos2;  it=AmethystParser_procargs2(self ); FAILTEST(alt1_3);
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 } break1: ptr->pos=oldpos1;   it=rb_funcall(self,sy_AmethystParser__at_ary_ff69,1,bind2); var1/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=ame_curobj2(ptr)               ;ptr->pos++; var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var0/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var1/*autovar*/=it;;
int oldpos2;  while(1){oldpos2=ptr->pos;   it=AmethystParser_procargs2(self ); FAILTEST(break1); var2/*autovar*/=it;;
bind_aset(bind2,1,var1/*autovar*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var1/*autovar*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos2;   it=var1/*autovar*/; var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_2;
                   success1: *ptr=oldpass1;
                it=var3/*autovar*/; var4/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); var5/*a*/=it;;
bind_aset(bind2,1,var5/*a*/);it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_b81c,1,bind2);var5/*a*/=bind_aget(bind2,1);; var4/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); var5/*a*/=it;;
bind_aset(bind2,1,var5/*a*/);it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_b81c,1,bind2);var5/*a*/=bind_aget(bind2,1);; var4/*_result*/=it;;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11;VALUE var12;VALUE var13;VALUE var14;VALUE var15;VALUE var16;VALUE var17;VALUE var18;VALUE var19;VALUE var20;VALUE var21;VALUE var22;VALUE var23;VALUE var24; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '#':;case '%' ... '&':;case '*' ... '-':;case '/' ... '/':;case ';' ... 'Z':;case UC(92) ... UC(92):;case '^' ... '^':;case '|' ... '|':;case '~' ... UC(255):; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=Amethyst_spaces(self ); FAILTEST(alt2_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt2_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt2_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
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
  it=AmethystParser_name(self ); FAILTEST(alt1_2); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_key(self ); FAILTEST(alt1_3); var3/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var3/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case '{' ... '{':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(alt4_2);it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos5;  while(1){oldpos5=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break1); var5/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos5;   it=var4/*autovar*/; var6/*r*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto alt4_2; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var6/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var6/*r*/=bind_aget(bind2,1);; var7/*_result*/=it;;
it=var7/*_result*/; var8/*r*/=it;;
it=rb_obj_clone(s__le__f95b); var9/*o*/=it;;
it=rb_obj_clone(s__re__cbb1); var10/*c*/=it;;
bind_aset(bind2,1,var9/*o*/);bind_aset(bind2,2,var8/*r*/);bind_aset(bind2,3,var10/*c*/);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);var9/*o*/=bind_aget(bind2,1);;var8/*r*/=bind_aget(bind2,2);;var10/*c*/=bind_aget(bind2,3);; var11/*_result*/=it;;
it=var11/*_result*/; var3/*_result*/=it;;

;goto accept4;
alt4_2: ptr->pos=oldpos4;int oldpos6=ptr->pos;int cut5=0;
alt5_1:;  it=Amethyst_spaces(self ); FAILTEST(alt5_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt5_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt5_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
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
  it=AmethystParser_name(self ); FAILTEST(alt4_3); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept4;
alt4_3: ptr->pos=oldpos4;  it=AmethystParser_key(self ); FAILTEST(alt4_4); var3/*_result*/=it;;

;goto accept4;
alt4_4: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); var12/*x*/=it;;
int oldpos8; int stop2=0; while(1){oldpos8=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '[':;case ']' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break2); var13/*autovar*/=it;;
bind_aset(bind2,1,var12/*x*/);bind_aset(bind2,2,var13/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var12/*x*/=bind_aget(bind2,1);;var13/*autovar*/=bind_aget(bind2,2);; break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;stop2=1; break;
case '#' ... '#':; int oldpos9=ptr->pos;int cut7=0;
alt7_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1; else goto alt7_2;  it=Amethyst_spaces(self ); FAILTEST(alt7_2);it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos10;  while(1){oldpos10=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break3); var5/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; } break3: ptr->pos=oldpos10;   it=var4/*autovar*/; var6/*r*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; goto alt7_2; break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var6/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var6/*r*/=bind_aget(bind2,1);; var7/*_result*/=it;;
it=var7/*_result*/; var8/*r*/=it;;
it=rb_obj_clone(s__bs__sh__le__a90f); var9/*o*/=it;;
it=rb_obj_clone(s__re__cbb1); var10/*c*/=it;;
bind_aset(bind2,1,var9/*o*/);bind_aset(bind2,2,var8/*r*/);bind_aset(bind2,3,var10/*c*/);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);var9/*o*/=bind_aget(bind2,1);;var8/*r*/=bind_aget(bind2,2);;var10/*c*/=bind_aget(bind2,3);; var11/*_result*/=it;;
it=var11/*_result*/; var14/*autovar*/=it;;
bind_aset(bind2,1,var12/*x*/);bind_aset(bind2,2,var14/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var12/*x*/=bind_aget(bind2,1);;var14/*autovar*/=bind_aget(bind2,2);;
;goto accept9;
alt7_2: ptr->pos=oldpos9;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt7_3); var13/*autovar*/=it;;
bind_aset(bind2,1,var12/*x*/);bind_aset(bind2,2,var13/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var12/*x*/=bind_aget(bind2,1);;var13/*autovar*/=bind_aget(bind2,2);;
;goto accept9;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept9:;
 break;
case UC(92) ... UC(92):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); var15/*autovar*/=it;;
bind_aset(bind2,1,var12/*x*/);bind_aset(bind2,2,var15/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var12/*x*/=bind_aget(bind2,1);;var15/*autovar*/=bind_aget(bind2,2);;  it=AmethystCore_anything(self ); FAILTEST(break2); var13/*autovar*/=it;;
bind_aset(bind2,1,var12/*x*/);bind_aset(bind2,2,var13/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var12/*x*/=bind_aget(bind2,1);;var13/*autovar*/=bind_aget(bind2,2);; break;
} if (stop2) goto accept8; } break2: goto fail; accept8:;   bind_aset(bind2,1,var12/*x*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var12/*x*/=bind_aget(bind2,1);; var16/*_result*/=it;;
it=var16/*_result*/; var17/*s*/=it;;
bind_aset(bind2,1,var17/*s*/);it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__88c8,1,bind2);var17/*s*/=bind_aget(bind2,1);; var3/*_result*/=it;;
 break;
case '$' ... '$':;case ':' ... ':':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos11=ptr->pos;int cut8=0;
alt8_1:;int oldpos12=ptr->pos;int cut9=0;
alt9_1:;  it=Amethyst_spaces(self ); FAILTEST(alt9_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt9_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt9_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
;goto accept12;
alt9_2: ptr->pos=oldpos12;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var18/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var18/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var18/*autovar*/=bind_aget(bind2,2);;
;goto accept12;
alt9_3: ptr->pos=oldpos12;goto alt8_2;
 accept12:;
int oldpos13=ptr->pos;int cut10=0;
alt10_1:;  it=Amethyst__(self ); FAILTEST(alt10_2);cut10=1;goto alt10_2;
;goto accept13;
alt10_2: ptr->pos=oldpos13;if (cut10) goto alt8_2;it=Qnil;
;goto accept13;
alt10_3: ptr->pos=oldpos13;goto alt8_2;
 accept13:;
  it=AmethystParser_name(self ); FAILTEST(alt8_2); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept11;
alt8_2: ptr->pos=oldpos11;  it=AmethystParser_key(self ); FAILTEST(alt8_3); var3/*_result*/=it;;

;goto accept11;
alt8_3: ptr->pos=oldpos11;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var3/*_result*/=it;;

;goto accept11;
alt8_4: ptr->pos=oldpos11;goto fail;
 accept11:;
 break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); var19/*x*/=it;;
int oldpos14; int stop4=0; while(1){oldpos14=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break4); var20/*autovar*/=it;;
bind_aset(bind2,1,var19/*x*/);bind_aset(bind2,2,var20/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var19/*x*/=bind_aget(bind2,1);;var20/*autovar*/=bind_aget(bind2,2);; break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;stop4=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); var21/*autovar*/=it;;
bind_aset(bind2,1,var19/*x*/);bind_aset(bind2,2,var21/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var19/*x*/=bind_aget(bind2,1);;var21/*autovar*/=bind_aget(bind2,2);;  it=AmethystCore_anything(self ); FAILTEST(break4); var20/*autovar*/=it;;
bind_aset(bind2,1,var19/*x*/);bind_aset(bind2,2,var20/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var19/*x*/=bind_aget(bind2,1);;var20/*autovar*/=bind_aget(bind2,2);; break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;stop4=1; break;
} break;
} if (stop4) goto accept14; } break4: goto fail; accept14:;   bind_aset(bind2,1,var19/*x*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var19/*x*/=bind_aget(bind2,1);; var22/*_result*/=it;;
it=var22/*_result*/; var17/*s*/=it;;
bind_aset(bind2,1,var17/*s*/);it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__dq__b20e,1,bind2);var17/*s*/=bind_aget(bind2,1);; var3/*_result*/=it;;
 break;
case '(' ... '(':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos15=ptr->pos;int cut11=0;
alt11_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(alt11_2);it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos16;  while(1){oldpos16=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break5); var5/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; } break5: ptr->pos=oldpos16;   it=var4/*autovar*/; var6/*r*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt11_2; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var6/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var6/*r*/=bind_aget(bind2,1);; var7/*_result*/=it;;
it=var7/*_result*/; var8/*r*/=it;;
it=rb_obj_clone(s__lp__84c4); var9/*o*/=it;;
it=rb_obj_clone(s__rp__9371); var10/*c*/=it;;
bind_aset(bind2,1,var9/*o*/);bind_aset(bind2,2,var8/*r*/);bind_aset(bind2,3,var10/*c*/);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);var9/*o*/=bind_aget(bind2,1);;var8/*r*/=bind_aget(bind2,2);;var10/*c*/=bind_aget(bind2,3);; var11/*_result*/=it;;
it=var11/*_result*/; var3/*_result*/=it;;

;goto accept15;
alt11_2: ptr->pos=oldpos15;int oldpos17=ptr->pos;int cut12=0;
alt12_1:;  it=Amethyst_spaces(self ); FAILTEST(alt12_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt12_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt12_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
;goto accept17;
alt12_2: ptr->pos=oldpos17;it=Qnil;
;goto accept17;
alt12_3: ptr->pos=oldpos17;goto alt11_3;
 accept17:;
int oldpos18=ptr->pos;int cut13=0;
alt13_1:;  it=Amethyst__(self ); FAILTEST(alt13_2);cut13=1;goto alt13_2;
;goto accept18;
alt13_2: ptr->pos=oldpos18;if (cut13) goto alt11_3;it=Qnil;
;goto accept18;
alt13_3: ptr->pos=oldpos18;goto alt11_3;
 accept18:;
  it=AmethystParser_name(self ); FAILTEST(alt11_3); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept15;
alt11_3: ptr->pos=oldpos15;  it=AmethystParser_key(self ); FAILTEST(alt11_4); var3/*_result*/=it;;

;goto accept15;
alt11_4: ptr->pos=oldpos15;goto fail;
 accept15:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos19=ptr->pos;int cut14=0;
alt14_1:;int oldpos20=ptr->pos;int cut15=0;
alt15_1:;  it=Amethyst_spaces(self ); FAILTEST(alt15_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt15_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt15_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
;goto accept20;
alt15_2: ptr->pos=oldpos20;it=Qnil;
;goto accept20;
alt15_3: ptr->pos=oldpos20;goto alt14_2;
 accept20:;
int oldpos21=ptr->pos;int cut16=0;
alt16_1:;  it=Amethyst__(self ); FAILTEST(alt16_2);cut16=1;goto alt16_2;
;goto accept21;
alt16_2: ptr->pos=oldpos21;if (cut16) goto alt14_2;it=Qnil;
;goto accept21;
alt16_3: ptr->pos=oldpos21;goto alt14_2;
 accept21:;
  it=AmethystParser_name(self ); FAILTEST(alt14_2); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept19;
alt14_2: ptr->pos=oldpos19;  it=AmethystParser_key(self ); FAILTEST(alt14_3); var3/*_result*/=it;;

;goto accept19;
alt14_3: ptr->pos=oldpos19;goto fail;
 accept19:;
 break;
case '.' ... '.':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos22=ptr->pos;int cut17=0;
alt17_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos23=ptr->pos;int cut18=0;
alt18_1:;if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2; else goto alt18_2;it=rb_obj_clone(s__dot__dot__dot__2f43); var23/*_result*/=it;;
it=var23/*_result*/; var3/*_result*/=it;;

;goto accept23;
alt18_2: ptr->pos=oldpos23;if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1; else goto alt18_3;it=rb_obj_clone(s__dot__dot__58b9); var23/*_result*/=it;;
it=var23/*_result*/; var3/*_result*/=it;;

;goto accept23;
alt18_3: ptr->pos=oldpos23;goto alt17_2;
 accept23:;

;goto accept22;
alt17_2: ptr->pos=oldpos22;int oldpos24=ptr->pos;int cut19=0;
alt19_1:;  it=Amethyst_spaces(self ); FAILTEST(alt19_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt19_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt19_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
;goto accept24;
alt19_2: ptr->pos=oldpos24;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var18/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var18/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var18/*autovar*/=bind_aget(bind2,2);;
;goto accept24;
alt19_3: ptr->pos=oldpos24;goto alt17_3;
 accept24:;
int oldpos25=ptr->pos;int cut20=0;
alt20_1:;  it=Amethyst__(self ); FAILTEST(alt20_2);cut20=1;goto alt20_2;
;goto accept25;
alt20_2: ptr->pos=oldpos25;if (cut20) goto alt17_3;it=Qnil;
;goto accept25;
alt20_3: ptr->pos=oldpos25;goto alt17_3;
 accept25:;
  it=AmethystParser_name(self ); FAILTEST(alt17_3); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept22;
alt17_3: ptr->pos=oldpos22;  it=AmethystParser_key(self ); FAILTEST(alt17_4); var3/*_result*/=it;;

;goto accept22;
alt17_4: ptr->pos=oldpos22;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var3/*_result*/=it;;

;goto accept22;
alt17_5: ptr->pos=oldpos22;goto fail;
 accept22:;
 break;
case '0' ... '9':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos26=ptr->pos;int cut21=0;
alt21_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var24/*e*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... UC(255):; goto alt21_2; break;
case '<' ... '<':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1; else goto alt21_2; break;
}bind_aset(bind2,1,var24/*e*/);it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__6281,1,bind2);var24/*e*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept26;
alt21_2: ptr->pos=oldpos26;int oldpos27=ptr->pos;int cut22=0;
alt22_1:;  it=Amethyst_spaces(self ); FAILTEST(alt22_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt22_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt22_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
;goto accept27;
alt22_2: ptr->pos=oldpos27;it=Qnil;
;goto accept27;
alt22_3: ptr->pos=oldpos27;goto alt21_3;
 accept27:;
int oldpos28=ptr->pos;int cut23=0;
alt23_1:;  it=Amethyst__(self ); FAILTEST(alt23_2);cut23=1;goto alt23_2;
;goto accept28;
alt23_2: ptr->pos=oldpos28;if (cut23) goto alt21_3;it=Qnil;
;goto accept28;
alt23_3: ptr->pos=oldpos28;goto alt21_3;
 accept28:;
  it=AmethystParser_name(self ); FAILTEST(alt21_3); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept26;
alt21_3: ptr->pos=oldpos26;  it=AmethystParser_key(self ); FAILTEST(alt21_4); var3/*_result*/=it;;

;goto accept26;
alt21_4: ptr->pos=oldpos26;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; var3/*_result*/=it;;

;goto accept26;
alt21_5: ptr->pos=oldpos26;goto fail;
 accept26:;
 break;
case '[' ... '[':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos29=ptr->pos;int cut24=0;
alt24_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self ); FAILTEST(alt24_2);it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos30;  while(1){oldpos30=ptr->pos;   it=AmethystParser_rubyarg(self ); FAILTEST(break6); var5/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; } break6: ptr->pos=oldpos30;   it=var4/*autovar*/; var6/*r*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto alt24_2; break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var6/*r*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);var6/*r*/=bind_aget(bind2,1);; var7/*_result*/=it;;
it=var7/*_result*/; var8/*r*/=it;;
it=rb_obj_clone(s__lb__8154); var9/*o*/=it;;
it=rb_obj_clone(s__rb__0fbd); var10/*c*/=it;;
bind_aset(bind2,1,var9/*o*/);bind_aset(bind2,2,var8/*r*/);bind_aset(bind2,3,var10/*c*/);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);var9/*o*/=bind_aget(bind2,1);;var8/*r*/=bind_aget(bind2,2);;var10/*c*/=bind_aget(bind2,3);; var11/*_result*/=it;;
it=var11/*_result*/; var3/*_result*/=it;;

;goto accept29;
alt24_2: ptr->pos=oldpos29;int oldpos31=ptr->pos;int cut25=0;
alt25_1:;  it=Amethyst_spaces(self ); FAILTEST(alt25_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt25_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt25_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
;goto accept31;
alt25_2: ptr->pos=oldpos31;it=Qnil;
;goto accept31;
alt25_3: ptr->pos=oldpos31;goto alt24_3;
 accept31:;
int oldpos32=ptr->pos;int cut26=0;
alt26_1:;  it=Amethyst__(self ); FAILTEST(alt26_2);cut26=1;goto alt26_2;
;goto accept32;
alt26_2: ptr->pos=oldpos32;if (cut26) goto alt24_3;it=Qnil;
;goto accept32;
alt26_3: ptr->pos=oldpos32;goto alt24_3;
 accept32:;
  it=AmethystParser_name(self ); FAILTEST(alt24_3); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept29;
alt24_3: ptr->pos=oldpos29;  it=AmethystParser_key(self ); FAILTEST(alt24_4); var3/*_result*/=it;;

;goto accept29;
alt24_4: ptr->pos=oldpos29;goto fail;
 accept29:;
 break;
case '`' ... '`':; it=rb_ary_new3(0); var0/*n*/=it;;
int oldpos33=ptr->pos;int cut27=0;
alt27_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt27_2); var24/*e*/=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; goto alt27_2; break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var24/*e*/);it=rb_funcall(self,sy_AmethystParser_Lambda_lb_B_2c90,1,bind2);var24/*e*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept33;
alt27_2: ptr->pos=oldpos33;int oldpos34=ptr->pos;int cut28=0;
alt28_1:;  it=Amethyst_spaces(self ); FAILTEST(alt28_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; goto alt28_2; break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else goto alt28_2; break;
}it=rb_obj_clone(s__co__at__4bf0); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);;
;goto accept34;
alt28_2: ptr->pos=oldpos34;it=Qnil;
;goto accept34;
alt28_3: ptr->pos=oldpos34;goto alt27_3;
 accept34:;
int oldpos35=ptr->pos;int cut29=0;
alt29_1:;  it=Amethyst__(self ); FAILTEST(alt29_2);cut29=1;goto alt29_2;
;goto accept35;
alt29_2: ptr->pos=oldpos35;if (cut29) goto alt27_3;it=Qnil;
;goto accept35;
alt29_3: ptr->pos=oldpos35;goto alt27_3;
 accept35:;
  it=AmethystParser_name(self ); FAILTEST(alt27_3); var2/*autovar*/=it;;
bind_aset(bind2,1,var0/*n*/);bind_aset(bind2,2,var2/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*n*/=bind_aget(bind2,1);;var2/*autovar*/=bind_aget(bind2,2);;bind_aset(bind2,1,var0/*n*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var0/*n*/=bind_aget(bind2,1);; var3/*_result*/=it;;

;goto accept33;
alt27_3: ptr->pos=oldpos33;  it=AmethystParser_key(self ); FAILTEST(alt27_4); var3/*_result*/=it;;

;goto accept33;
alt27_4: ptr->pos=oldpos33;goto fail;
 accept33:;
 break;
}
return it;
fail: return failobj; }
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind2); var0/*bnding*/=it;;
  it=Amethyst_spaces(self ); FAILTEST(fail);  it=AmethystParser_name(self ); FAILTEST(fail); var1/*name*/=it;;
  it=AmethystParser_ruleargs(self ); FAILTEST(fail); var2/*args*/=it;;
  it=Amethyst_spaces(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '<':;case '>' ... UC(255):; goto fail; break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=AmethystParser_expression(self ); FAILTEST(fail); var3/*body*/=it;;
bind_aset(bind2,1,var3/*body*/);it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_37df,1,bind2);var3/*body*/=bind_aget(bind2,1);; var3/*body*/=it;;
it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind2); var4/*locals*/=it;;
bind_aset(bind2,1,var3/*body*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__f15c,1,bind2);var3/*body*/=bind_aget(bind2,1);;bind_aset(bind2,1,var0/*bnding*/);bind_aset(bind2,2,var1/*name*/);bind_aset(bind2,3,var2/*args*/);bind_aset(bind2,4,var3/*body*/);bind_aset(bind2,5,var4/*locals*/);it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_3767,1,bind2);var0/*bnding*/=bind_aget(bind2,1);;var1/*name*/=bind_aget(bind2,2);;var2/*args*/=bind_aget(bind2,3);;var3/*body*/=bind_aget(bind2,4);;var4/*locals*/=bind_aget(bind2,5);; var5/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystParser_argsOpt(self ); FAILTEST(fail); var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var0/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var4/*name*/=it;;
bind_aset(bind2,1,var4/*name*/);it=rb_funcall(self,sy_AmethystParser_local_lp_bi_196b,1,bind2);var4/*name*/=bind_aget(bind2,1);; var5/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                it=var5/*autovar*/; var6/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var6/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var6/*autovar*/=bind_aget(bind2,2);; break;
case 1/*Object*/:; goto break1; break;
} } break1: ptr->pos=oldpos1;   it=var2/*autovar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var8/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var8/*autovar*/; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); var0/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystParser_nr(self ); FAILTEST(break1);  it=Amethyst_spaces(self ); FAILTEST(break1);  it=AmethystParser_prefixed(self ); FAILTEST(break1); var1/*autovar*/=it;;
bind_aset(bind2,1,var0/*autovar*/);bind_aset(bind2,2,var1/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var0/*autovar*/=bind_aget(bind2,1);;var1/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var0/*autovar*/; var2/*ary*/=it;;
bind_aset(bind2,1,var2/*ary*/);it=rb_funcall(self,sy_AmethystParser_Seq_dot_crea_bfbb,1,bind2);var2/*ary*/=bind_aget(bind2,1);; var3/*_result*/=it;;

return it;
fail: return failobj; }
VALUE AmethystParser_term(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9;VALUE var10;VALUE var11; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '&':;case ')' ... '-':;case '/' ... 'Z':;case UC(92) ... 'a':;case 'c' ... 'm':;case 'o' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystParser_cases(self ); FAILTEST(alt1_2); var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystParser_call(self ); FAILTEST(alt1_3); var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;int oldpos2=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject1; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept2;  reject1: x=0; accept2: it=Qnil; ptr->pos=oldpos2; if (x==0) goto alt1_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;  it=AmethystParser_key(self ); FAILTEST(alt1_5); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept1;
alt1_5: ptr->pos=oldpos1;  it=AmethystParser_host_expr(self ); FAILTEST(alt1_6); var0/*_result*/=it;;

;goto accept1;
alt1_6: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 'n' ... 'n':; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='s'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='e'&&ame_curstr2(ptr)[4]=='d'&&ame_curstr2(ptr)[5]=='(')  ptr->pos+=6; else goto alt2_2;  it=AmethystParser_expression(self ); FAILTEST(alt2_2); var2/*expr*/=it;;
  it=Amethyst_spaces(self ); FAILTEST(alt2_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt2_2; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var2/*expr*/);it=rb_funcall(self,sy_AmethystParser_Nested_lb_b_1ac2,1,bind2);var2/*expr*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept3;
alt2_2: ptr->pos=oldpos3;  it=AmethystParser_cases(self ); FAILTEST(alt2_3); var0/*_result*/=it;;

;goto accept3;
alt2_3: ptr->pos=oldpos3;  it=AmethystParser_call(self ); FAILTEST(alt2_4); var0/*_result*/=it;;

;goto accept3;
alt2_4: ptr->pos=oldpos3;int oldpos4=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject2; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept4;  reject2: x=0; accept4: it=Qnil; ptr->pos=oldpos4; if (x==0) goto alt2_5;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept3;
alt2_5: ptr->pos=oldpos3;  it=AmethystParser_key(self ); FAILTEST(alt2_6); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept3;
alt2_6: ptr->pos=oldpos3;  it=AmethystParser_host_expr(self ); FAILTEST(alt2_7); var0/*_result*/=it;;

;goto accept3;
alt2_7: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case UC(34) ... UC(34):; int oldpos5=ptr->pos;int cut3=0;
alt3_1:;  it=AmethystParser_cases(self ); FAILTEST(alt3_2); var0/*_result*/=it;;

;goto accept5;
alt3_2: ptr->pos=oldpos5;  it=AmethystParser_call(self ); FAILTEST(alt3_3); var0/*_result*/=it;;

;goto accept5;
alt3_3: ptr->pos=oldpos5;int oldpos6=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject3; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept6;  reject3: x=0; accept6: it=Qnil; ptr->pos=oldpos6; if (x==0) goto alt3_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept5;
alt3_4: ptr->pos=oldpos5;  it=AmethystParser_key(self ); FAILTEST(alt3_5); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept5;
alt3_5: ptr->pos=oldpos5;  it=AmethystParser_host_expr(self ); FAILTEST(alt3_6); var0/*_result*/=it;;

;goto accept5;
alt3_6: ptr->pos=oldpos5;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); var3/*x*/=it;;
int oldpos7; int stop1=0; while(1){oldpos7=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break1); var4/*autovar*/=it;;
bind_aset(bind2,1,var3/*x*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var3/*x*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);; break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut3=1;stop1=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); var5/*autovar*/=it;;
bind_aset(bind2,1,var3/*x*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var3/*x*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;  it=AmethystCore_anything(self ); FAILTEST(break1); var4/*autovar*/=it;;
bind_aset(bind2,1,var3/*x*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var3/*x*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);; break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut3=1;stop1=1; break;
} break;
} if (stop1) goto accept7; } break1: goto alt3_7; accept7:;   bind_aset(bind2,1,var3/*x*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var3/*x*/=bind_aget(bind2,1);; var6/*_result*/=it;;
it=var6/*_result*/; var7/*s*/=it;;
bind_aset(bind2,1,var7/*s*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_e958,1,bind2);var7/*s*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept5;
alt3_7: ptr->pos=oldpos5;if (cut3) goto fail;goto fail;
 accept5:;
 break;
case '#' ... '#':; int oldpos8=ptr->pos;int cut4=0;
alt4_1:;  it=AmethystParser_cases(self ); FAILTEST(alt4_2); var0/*_result*/=it;;

;goto accept8;
alt4_2: ptr->pos=oldpos8;  it=AmethystParser_call(self ); FAILTEST(alt4_3); var0/*_result*/=it;;

;goto accept8;
alt4_3: ptr->pos=oldpos8;int oldpos9=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject4; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept9;  reject4: x=0; accept9: it=Qnil; ptr->pos=oldpos9; if (x==0) goto alt4_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept8;
alt4_4: ptr->pos=oldpos8;  it=AmethystParser_key(self ); FAILTEST(alt4_5); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept8;
alt4_5: ptr->pos=oldpos8;  it=AmethystParser_host_expr(self ); FAILTEST(alt4_6); var0/*_result*/=it;;

;goto accept8;
alt4_6: ptr->pos=oldpos8;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_line(self ); FAILTEST(alt4_7); var7/*s*/=it;;
bind_aset(bind2,1,var7/*s*/);it=rb_funcall(self,sy_AmethystParser_Comment_lb__ed6f,1,bind2);var7/*s*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept8;
alt4_7: ptr->pos=oldpos8;goto fail;
 accept8:;
 break;
case UC(39) ... UC(39):; int oldpos10=ptr->pos;int cut5=0;
alt5_1:;  it=AmethystParser_cases(self ); FAILTEST(alt5_2); var0/*_result*/=it;;

;goto accept10;
alt5_2: ptr->pos=oldpos10;  it=AmethystParser_call(self ); FAILTEST(alt5_3); var0/*_result*/=it;;

;goto accept10;
alt5_3: ptr->pos=oldpos10;int oldpos11=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject5; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept11;  reject5: x=0; accept11: it=Qnil; ptr->pos=oldpos11; if (x==0) goto alt5_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept10;
alt5_4: ptr->pos=oldpos10;  it=AmethystParser_key(self ); FAILTEST(alt5_5); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept10;
alt5_5: ptr->pos=oldpos10;  it=AmethystParser_host_expr(self ); FAILTEST(alt5_6); var0/*_result*/=it;;

;goto accept10;
alt5_6: ptr->pos=oldpos10;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); var3/*x*/=it;;
int oldpos12; int stop2=0; while(1){oldpos12=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(break2); var4/*autovar*/=it;;
bind_aset(bind2,1,var3/*x*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var3/*x*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);; break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut5=1;stop2=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); var5/*autovar*/=it;;
bind_aset(bind2,1,var3/*x*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var3/*x*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);;  it=AmethystCore_anything(self ); FAILTEST(break2); var4/*autovar*/=it;;
bind_aset(bind2,1,var3/*x*/);bind_aset(bind2,2,var4/*autovar*/);it=rb_funcall(self,sy_AmethystParser__append_lp__d113,1,bind2);var3/*x*/=bind_aget(bind2,1);;var4/*autovar*/=bind_aget(bind2,2);; break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut5=1;stop2=1; break;
} break;
} if (stop2) goto accept12; } break2: goto alt5_7; accept12:;   bind_aset(bind2,1,var3/*x*/);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);var3/*x*/=bind_aget(bind2,1);; var6/*_result*/=it;;
it=var6/*_result*/; var7/*s*/=it;;
bind_aset(bind2,1,var7/*s*/);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_9322,1,bind2);var7/*s*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept10;
alt5_7: ptr->pos=oldpos10;if (cut5) goto fail;goto fail;
 accept10:;
 break;
case '(' ... '(':; int oldpos13=ptr->pos;int cut6=0;
alt6_1:;  it=AmethystParser_cases(self ); FAILTEST(alt6_2); var0/*_result*/=it;;

;goto accept13;
alt6_2: ptr->pos=oldpos13;  it=AmethystParser_call(self ); FAILTEST(alt6_3); var0/*_result*/=it;;

;goto accept13;
alt6_3: ptr->pos=oldpos13;int oldpos14=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject6; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept14;  reject6: x=0; accept14: it=Qnil; ptr->pos=oldpos14; if (x==0) goto alt6_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept13;
alt6_4: ptr->pos=oldpos13;  it=AmethystParser_key(self ); FAILTEST(alt6_5); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept13;
alt6_5: ptr->pos=oldpos13;  it=AmethystParser_host_expr(self ); FAILTEST(alt6_6); var0/*_result*/=it;;

;goto accept13;
alt6_6: ptr->pos=oldpos13;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt6_7); var8/*x*/=it;;
  it=Amethyst_spaces(self ); FAILTEST(alt6_7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; goto alt6_7; break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; it=Qnil;it=var8/*x*/; var0/*_result*/=it;;
 break;
case '[' ... '[':; int oldpos15=ptr->pos;int cut7=0;
alt7_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else goto alt7_2;it=var8/*x*/; var9/*ors*/=it;;
bind_aset(bind2,1,var9/*ors*/);it=rb_funcall(self,sy_AmethystParser_a_eq_autova_5b84,1,bind2);var9/*ors*/=bind_aget(bind2,1);; var10/*_result*/=it;;
it=var10/*_result*/; var0/*_result*/=it;;

;goto accept15;
alt7_2: ptr->pos=oldpos15;it=Qnil;it=var8/*x*/; var0/*_result*/=it;;

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
alt8_1:;  it=AmethystParser_cases(self ); FAILTEST(alt8_2); var0/*_result*/=it;;

;goto accept16;
alt8_2: ptr->pos=oldpos16;  it=AmethystParser_call(self ); FAILTEST(alt8_3); var0/*_result*/=it;;

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
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept16;
alt8_4: ptr->pos=oldpos16;  it=AmethystParser_key(self ); FAILTEST(alt8_5); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept16;
alt8_5: ptr->pos=oldpos16;  it=AmethystParser_host_expr(self ); FAILTEST(alt8_6); var0/*_result*/=it;;

;goto accept16;
alt8_6: ptr->pos=oldpos16;goto fail;
 accept16:;
 break;
case '[' ... '[':; int oldpos19=ptr->pos;int cut10=0;
alt10_1:;  it=AmethystParser_cases(self ); FAILTEST(alt10_2); var0/*_result*/=it;;

;goto accept19;
alt10_2: ptr->pos=oldpos19;  it=AmethystParser_call(self ); FAILTEST(alt10_3); var0/*_result*/=it;;

;goto accept19;
alt10_3: ptr->pos=oldpos19;int oldpos20=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject8; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept20;  reject8: x=0; accept20: it=Qnil; ptr->pos=oldpos20; if (x==0) goto alt10_4;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept19;
alt10_4: ptr->pos=oldpos19;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); FAILTEST(alt10_5); var11/*e*/=it;;
  it=Amethyst_spaces(self ); FAILTEST(alt10_5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; goto alt10_5; break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,var11/*e*/);it=rb_funcall(self,sy_AmethystParser_Enter_lb_Ap_7d1f,1,bind2);var11/*e*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept19;
alt10_5: ptr->pos=oldpos19;  it=AmethystParser_key(self ); FAILTEST(alt10_6); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept19;
alt10_6: ptr->pos=oldpos19;  it=AmethystParser_host_expr(self ); FAILTEST(alt10_7); var0/*_result*/=it;;

;goto accept19;
alt10_7: ptr->pos=oldpos19;goto fail;
 accept19:;
 break;
case 'b' ... 'b':; int oldpos21=ptr->pos;int cut11=0;
alt11_1:;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='k')  ptr->pos+=4; else goto alt11_2;it=rb_funcall(self,sy_AmethystParser_Seq_lb_Cut_lb__3505,1,bind2); var0/*_result*/=it;;

;goto accept21;
alt11_2: ptr->pos=oldpos21;  it=AmethystParser_cases(self ); FAILTEST(alt11_3); var0/*_result*/=it;;

;goto accept21;
alt11_3: ptr->pos=oldpos21;  it=AmethystParser_call(self ); FAILTEST(alt11_4); var0/*_result*/=it;;

;goto accept21;
alt11_4: ptr->pos=oldpos21;int oldpos22=ptr->pos;
 switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; goto reject9; break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
} x=1; goto accept22;  reject9: x=0; accept22: it=Qnil; ptr->pos=oldpos22; if (x==0) goto alt11_5;it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); var0/*_result*/=it;;

;goto accept21;
alt11_5: ptr->pos=oldpos21;  it=AmethystParser_key(self ); FAILTEST(alt11_6); var1/*it*/=it;;
bind_aset(bind2,1,var1/*it*/);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);var1/*it*/=bind_aget(bind2,1);; var0/*_result*/=it;;

;goto accept21;
alt11_6: ptr->pos=oldpos21;  it=AmethystParser_host_expr(self ); FAILTEST(alt11_7); var0/*_result*/=it;;

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
                    mem=memo_init(); memo_val=Data_Wrap_Struct(cls_AmethystParser,memo_mark,memo_free,mem); rb_global_variable(&memo_val); 
rb_define_method(cls_AmethystParser,"profile_report",profile_report,0);
s_Amethyst_fe41=rb_str_new2("Amethyst");rb_global_variable(&s_Amethyst_fe41);
s__bq__8333=rb_str_new2("`");rb_global_variable(&s__bq__8333);
s__bs__bs__7f81=rb_str_new2("\\");rb_global_variable(&s__bs__bs__7f81);
s__bs__sh__le__a90f=rb_str_new2("#{");rb_global_variable(&s__bs__sh__le__a90f);
s__co__at__4bf0=rb_str_new2(":@");rb_global_variable(&s__co__at__4bf0);
s__dot__dot__58b9=rb_str_new2("..");rb_global_variable(&s__dot__dot__58b9);
s__dot__dot__dot__2f43=rb_str_new2("...");rb_global_variable(&s__dot__dot__dot__2f43);
s__gt__cedf=rb_str_new2(">");rb_global_variable(&s__gt__cedf);
s__lb__8154=rb_str_new2("[");rb_global_variable(&s__lb__8154);
s__lb__rb__d751=rb_str_new2("[]");rb_global_variable(&s__lb__rb__d751);
s__le__f95b=rb_str_new2("{");rb_global_variable(&s__le__f95b);
s__lp__84c4=rb_str_new2("(");rb_global_variable(&s__lp__84c4);
s__lt__524a=rb_str_new2("<");rb_global_variable(&s__lt__524a);
s__rb__0fbd=rb_str_new2("]");rb_global_variable(&s__rb__0fbd);
s__re__cbb1=rb_str_new2("}");rb_global_variable(&s__re__cbb1);
s__rp__9371=rb_str_new2(")");rb_global_variable(&s__rp__9371);
switchhash_AmethystParser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_AmethystParser_1);;
switchhash_AmethystParser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_AmethystParser_2);;
sy_AmethystParser_Act_lb_Args_23b1=rb_intern("AmethystParser_Act_lb_Args_23b1");
sy_AmethystParser_Act_lb_bind_7d0b=rb_intern("AmethystParser_Act_lb_bind_7d0b");
sy_AmethystParser_Apply_lb__dq_a_1437=rb_intern("AmethystParser_Apply_lb__dq_a_1437");
sy_AmethystParser_Apply_lb__dq_c_a8b6=rb_intern("AmethystParser_Apply_lb__dq_c_a8b6");
sy_AmethystParser_Apply_lb__dq_m_2ec1=rb_intern("AmethystParser_Apply_lb__dq_m_2ec1");
sy_AmethystParser_Apply_lb__dq_r_269c=rb_intern("AmethystParser_Apply_lb__dq_r_269c");
sy_AmethystParser_Apply_lb__dq_s_9322=rb_intern("AmethystParser_Apply_lb__dq_s_9322");
sy_AmethystParser_Apply_lb__dq_t_e958=rb_intern("AmethystParser_Apply_lb__dq_t_e958");
sy_AmethystParser_Apply_lb__lb_b_099b=rb_intern("AmethystParser_Apply_lb__lb_b_099b");
sy_AmethystParser_Apply_lb_bi_9146=rb_intern("AmethystParser_Apply_lb_bi_9146");
sy_AmethystParser_Args_lb__le__co_a_9abe=rb_intern("AmethystParser_Args_lb__le__co_a_9abe");
sy_AmethystParser_Bind_lb_loc_37df=rb_intern("AmethystParser_Bind_lb_loc_37df");
sy_AmethystParser_Comment_lb__ed6f=rb_intern("AmethystParser_Comment_lb__ed6f");
sy_AmethystParser_Enter_lb_Ap_7d1f=rb_intern("AmethystParser_Enter_lb_Ap_7d1f");
sy_AmethystParser_Enter_lb_bi_9246=rb_intern("AmethystParser_Enter_lb_bi_9246");
sy_AmethystParser_Global_lb_b_0216=rb_intern("AmethystParser_Global_lb_b_0216");
sy_AmethystParser_Grammar_dot__a510=rb_intern("AmethystParser_Grammar_dot__a510");
sy_AmethystParser_Key_lb_bind_5e9f=rb_intern("AmethystParser_Key_lb_bind_5e9f");
sy_AmethystParser_Lambda_lb_B_2c90=rb_intern("AmethystParser_Lambda_lb_B_2c90");
sy_AmethystParser_Lookahea_0946=rb_intern("AmethystParser_Lookahea_0946");
sy_AmethystParser_Many_lb_bin_14d1=rb_intern("AmethystParser_Many_lb_bin_14d1");
sy_AmethystParser_Nested_lb_b_1ac2=rb_intern("AmethystParser_Nested_lb_b_1ac2");
sy_AmethystParser_Or_AST_dot_c_19e2=rb_intern("AmethystParser_Or_AST_dot_c_19e2");
sy_AmethystParser_Or_AST_lb_b_0657=rb_intern("AmethystParser_Or_AST_lb_b_0657");
sy_AmethystParser_Pass_lb_bin_2f93=rb_intern("AmethystParser_Pass_lb_bin_2f93");
sy_AmethystParser_Pred_lb_bin_ae38=rb_intern("AmethystParser_Pred_lb_bin_ae38");
sy_AmethystParser_Result_lb__le__a3b4=rb_intern("AmethystParser_Result_lb__le__a3b4");
sy_AmethystParser_Rule_dot_cre_3767=rb_intern("AmethystParser_Rule_dot_cre_3767");
sy_AmethystParser_Seq_dot_crea_bfbb=rb_intern("AmethystParser_Seq_dot_crea_bfbb");
sy_AmethystParser_Seq_lb_Bind_bbb6=rb_intern("AmethystParser_Seq_lb_Bind_bbb6");
sy_AmethystParser_Seq_lb_Cut_lb__3505=rb_intern("AmethystParser_Seq_lb_Cut_lb__3505");
sy_AmethystParser_Strin_lb__lb__dq__b20e=rb_intern("AmethystParser_Strin_lb__lb__dq__b20e");
sy_AmethystParser_Strin_lb__lb__qu__88c8=rb_intern("AmethystParser_Strin_lb__lb__qu__88c8");
sy_AmethystParser__append_lp__d113=rb_intern("AmethystParser__append_lp__d113");
sy_AmethystParser__at_appends_975f=rb_intern("AmethystParser__at_appends_975f");
sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
sy_AmethystParser__at_locals_eq__4fc1=rb_intern("AmethystParser__at_locals_eq__4fc1");
sy_AmethystParser__at_tmp_lt__lt_bi_b81c=rb_intern("AmethystParser__at_tmp_lt__lt_bi_b81c");
sy_AmethystParser__dq__le__dq__pl_bind_567e=rb_intern("AmethystParser__dq__le__dq__pl_bind_567e");
sy_AmethystParser__lb_bind_lb_1_rb__6281=rb_intern("AmethystParser__lb_bind_lb_1_rb__6281");
sy_AmethystParser__lp_bind_lb_1_rb__a724=rb_intern("AmethystParser__lp_bind_lb_1_rb__a724");
sy_AmethystParser_a_eq_autova_5b84=rb_intern("AmethystParser_a_eq_autova_5b84");
sy_AmethystParser_bind_lb_1_rb_=rb_intern("AmethystParser_bind_lb_1_rb_");
sy_AmethystParser_bind_lb_1_rb__dot__7b93=rb_intern("AmethystParser_bind_lb_1_rb__dot__7b93");
sy_AmethystParser_bind_lb_1_rb__dot__cc9d=rb_intern("AmethystParser_bind_lb_1_rb__dot__cc9d");
sy_AmethystParser_bind_lb_1_rb__dot__e879=rb_intern("AmethystParser_bind_lb_1_rb__dot__e879");
sy_AmethystParser_bind_lb_1_rb__eq__f15c=rb_intern("AmethystParser_bind_lb_1_rb__eq__f15c");
sy_AmethystParser_bind_lb_1_rb__pl__b087=rb_intern("AmethystParser_bind_lb_1_rb__pl__b087");
sy_AmethystParser_local_lp_bi_196b=rb_intern("AmethystParser_local_lp_bi_196b");
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
                    rb_eval_string("testversionparser('02881d2728d1374b023540036ce68cc9')");}
