#include "cthyst.h"
#include "memo.c"
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
VALUE AmethystParser_file(VALUE self );
VALUE AmethystParser_grammar(VALUE self );
VALUE AmethystParser_host_expr(VALUE self );
VALUE AmethystParser_inline_host_expr(VALUE self );
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0);
VALUE AmethystParser_key(VALUE self );
VALUE AmethystParser_lambda(VALUE self );
VALUE AmethystParser_lookaheads(VALUE self );
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
VALUE AmethystParser_string_like(VALUE self ,VALUE a0,VALUE a1);
VALUE AmethystParser_term(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE switchhash_AmethystParser_1;
VALUE switchhash_AmethystParser_2;
static VALUE c_Append_AST;
static VALUE c_Concat_AST;
static VALUE s_Amethyst_fe41;
static VALUE s__at__518e;
static VALUE s__bs__bs__7f81;
static VALUE s__bs__sh__le__a90f;
static VALUE s__co__853a;
static VALUE s__co__at__4bf0;
static VALUE s__d41d;
static VALUE s__dot__dot__58b9;
static VALUE s__dot__dot__dot__2f43;
static VALUE s__eq__43ec;
static VALUE s__gt__cedf;
static VALUE s__lb__8154;
static VALUE s__le__f95b;
static VALUE s__lp__84c4;
static VALUE s__lt__524a;
static VALUE s__rb__0fbd;
static VALUE s__re__cbb1;
static VALUE s__rp__9371;
static VALUE s__ti__3389;
static VALUE sy_AmethystParser_Act_lb_Args_23b1;
static VALUE sy_AmethystParser_Act_lb_bind_7d0b;
static VALUE sy_AmethystParser_Apply_lb__dq_a_1437;
static VALUE sy_AmethystParser_Apply_lb__dq_c_a8b6;
static VALUE sy_AmethystParser_Apply_lb__dq_m_2ec1;
static VALUE sy_AmethystParser_Apply_lb__dq_s_9322;
static VALUE sy_AmethystParser_Apply_lb__dq_t_e958;
static VALUE sy_AmethystParser_Apply_lb_bi_9146;
static VALUE sy_AmethystParser_Args_lb__le__co_a_9abe;
static VALUE sy_AmethystParser_Bind_lb_loc_37df;
static VALUE sy_AmethystParser_Bind_lb_loc_5836;
static VALUE sy_AmethystParser_Comment_lb__ed6f;
static VALUE sy_AmethystParser_Contextu_32ad;
static VALUE sy_AmethystParser_Contextu_4e8d;
static VALUE sy_AmethystParser_Enter_AS_06e8;
static VALUE sy_AmethystParser_Enter_AS_3242;
static VALUE sy_AmethystParser_Global_lb_b_0216;
static VALUE sy_AmethystParser_Grammar_dot__a510;
static VALUE sy_AmethystParser_Key_lb_bind_5e9f;
static VALUE sy_AmethystParser_Lambda_lb_B_2c90;
static VALUE sy_AmethystParser_Lookahea_0946;
static VALUE sy_AmethystParser_Many_lb_bin_14d1;
static VALUE sy_AmethystParser_Or_AST_dot_c_19e2;
static VALUE sy_AmethystParser_Or_AST_lb_b_0657;
static VALUE sy_AmethystParser_Or_AST_lb_b_3220;
static VALUE sy_AmethystParser_Or_lb_Apply_cdcd;
static VALUE sy_AmethystParser_Parenthe_261b;
static VALUE sy_AmethystParser_Pass_AST_6bd0;
static VALUE sy_AmethystParser_Pred_lb_bin_ae38;
static VALUE sy_AmethystParser_Result_lb__le__a3b4;
static VALUE sy_AmethystParser_Rule_dot_cre_113e;
static VALUE sy_AmethystParser_Seq_AST_dot__a126;
static VALUE sy_AmethystParser_Seq_AST_lb__1817;
static VALUE sy_AmethystParser_Seq_AST_lb__66a7;
static VALUE sy_AmethystParser_Strin_lb__lb__dq__b20e;
static VALUE sy_AmethystParser_Strin_lb__lb__qu__88c8;
static VALUE sy_AmethystParser__at_appends_6209;
static VALUE sy_AmethystParser__at_ary_eq__lb__rb_;
static VALUE sy_AmethystParser__at_ary_ff69;
static VALUE sy_AmethystParser__at_ary_lt__lt_Ar_59e3;
static VALUE sy_AmethystParser__at_bnding_7d3c;
static VALUE sy_AmethystParser__at_locals_dot__bdc6;
static VALUE sy_AmethystParser__at_locals_eq__4fc1;
static VALUE sy_AmethystParser__at_tmp_lt__lt_bi_b81c;
static VALUE sy_AmethystParser__dq__le__dq__pl_bind_567e;
static VALUE sy_AmethystParser__dq_amethys_673b;
static VALUE sy_AmethystParser__lb__dq__lp__dq_;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__6281;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__c1c8;
static VALUE sy_AmethystParser__lb_bind_lb_1_rb__f4d6;
static VALUE sy_AmethystParser__lp_bind_lb_1_rb__a724;
static VALUE sy_AmethystParser_a_eq_autova_57aa;
static VALUE sy_AmethystParser_bind_lb_1_rb_;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__1371;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__4673;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__4688;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__7b93;
static VALUE sy_AmethystParser_bind_lb_1_rb__dot__e879;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__3c5b;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__4e2f;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__9a0b;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__a882;
static VALUE sy_AmethystParser_bind_lb_1_rb__eq__c77b;
static VALUE sy_AmethystParser_bind_lb_1_rb__lt__798b;
static VALUE sy_AmethystParser_bind_lb_1_rb__pl__b087;
static VALUE sy_AmethystParser_bind_lb_1_rb__sp__5934;
static VALUE sy_AmethystParser_local_lp_bi_196b;
static VALUE sy_AmethystParser_pos_5e0b;

 memo_struct *mem_AmethystParser=NULL;VALUE memo_val_AmethystParser;VALUE profile_report_AmethystParser(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); if(ptr->mem){fprintf(profile_report,"memo AmethystParser::rule  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[115],((memo_struct *)ptr->mem)->miss[115],((memo_struct *)ptr->mem)->ticks[115]);((memo_struct *)ptr->mem)->hits[115]=0;((memo_struct *)ptr->mem)->miss[115]=0;((memo_struct *)ptr->mem)->ticks[115]=0;}if(ptr->mem){fprintf(profile_report,"memo AmethystParser::name  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[117],((memo_struct *)ptr->mem)->miss[117],((memo_struct *)ptr->mem)->ticks[117]);((memo_struct *)ptr->mem)->hits[117]=0;((memo_struct *)ptr->mem)->miss[117]=0;((memo_struct *)ptr->mem)->ticks[117]=0;}if(ptr->mem){fprintf(profile_report,"memo AmethystParser::argsOpt  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[119],((memo_struct *)ptr->mem)->miss[119],((memo_struct *)ptr->mem)->ticks[119]);((memo_struct *)ptr->mem)->hits[119]=0;((memo_struct *)ptr->mem)->miss[119]=0;((memo_struct *)ptr->mem)->ticks[119]=0;} return Qnil;}VALUE AmethystParser__args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE it ,_o=Qnil,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,_c=Qnil,_r=Qnil,__result=Qnil;VALUE bind2=bind_new2(1); _o=a0;;_c=a1;; VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=_o; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto fail;}  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop1=1; break;
} } it=_c; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto fail;}it=_autovar; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result=it;;

fail: return it;
}
VALUE AmethystParser_args(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE it ,_c=Qnil,_c_2=Qnil,_o=Qnil,_o_2=Qnil,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,_r=Qnil,__result=Qnil,_r_2=Qnil,__result_2=Qnil;VALUE bind2=bind_new2(3); _o=a0;;_c=a1;; VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=_c; _c_2=it;;
it=_o; _o_2=it;;
it=_o_2; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto fail;}  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop1=1; break;
} } it=_c_2; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto fail;}it=_autovar; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result=it;;
it=__result; _r_2=it;;
bind_aset(bind2,1,_o);bind_aset(bind2,2,_r_2);bind_aset(bind2,3,_c);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);_o=bind_aget(bind2,1);;_r_2=bind_aget(bind2,2);;_c=bind_aget(bind2,3);; __result_2=it;;

fail: return it;
}
VALUE AmethystParser_argsOpt(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_r=Qnil,__result=Qnil,_r_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,__result_2=Qnil,_l=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);if (ptr->mem==NULL){ptr->mem=memo_init();ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);}time_struct time_old=memo_get(ptr->mem,119,ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(39):;case ')' ... '_':;case 'a' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=Qnil;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case '(' ... '(':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert2;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; stop1=1;
;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop1=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result=it;;
it=__result; _r_2=it;;
bind_aset(bind2,1,_r_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__pl__b087,1,bind2);_r_2=bind_aget(bind2,1);; _autovar_3=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_3;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_4=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_4);
                     it=AmethystParser_procargs(self ); _autovar_5=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                it=_autovar_5; _autovar_6=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto revert1;}
                   success1: *ptr=oldpass1;
                it=_autovar_6; __result_2=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=rb_ary_new3(0); __result_2=it;;

;goto accept6;revert4:;  goto alt1_3; accept6:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto memo_fail;};
 accept1:;
 break;
case '(' ... '(':;case '`' ... '`':; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_lambda(self ); if (it==failobj){it=failobj;goto revert5;} _l=it;;
bind_aset(bind2,1,_l);it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__f4d6,1,bind2);_l=bind_aget(bind2,1);; __result_2=it;;

;goto accept8;revert5:;  goto alt3_2; accept8:;

;ptr->branches-=3; goto accept7;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=Qnil;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; if (1){it=failobj;goto revert6;} break;
case '(' ... '(':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar=it;;
int stop2=0; while(!stop2){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert7;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept11;revert7:;  goto alt4_2; accept11:;

;ptr->branches-=2; goto accept10;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; stop2=1;
;goto accept12;revert8:;  goto alt4_3; accept12:;

;ptr->branches-=1; goto accept10;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto revert6;};
 accept10:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop2=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; if (1){it=failobj;goto revert6;} break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result=it;;
it=__result; _r_2=it;;
bind_aset(bind2,1,_r_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__pl__b087,1,bind2);_r_2=bind_aget(bind2,1);; _autovar_3=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_3;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass3;} _autovar_4=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_4);
                     it=AmethystParser_procargs(self ); _autovar_5=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto pass3;}
                   success4: *ptr=oldpass4;
                it=_autovar_5; _autovar_6=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert6;}
                   success3: *ptr=oldpass3;
                it=_autovar_6; __result_2=it;;

;goto accept9;revert6:;  goto alt3_3; accept9:;

;ptr->branches-=2; goto accept7;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1; it=rb_ary_new3(0); __result_2=it;;

;goto accept13;revert9:;  goto alt3_4; accept13:;

;ptr->branches-=1; goto accept7;
alt3_4: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto memo_fail;};
 accept7:;
 break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert11;}cut6=1;if (1){it=failobj;goto revert11;}
;goto accept17;revert11:;  goto alt6_2; accept17:;

;ptr->branches-=2; goto accept16;
alt6_2: ptr->pos=oldpos6;if(cut6){ptr->branches-=0;it=failobj;goto revert10;}ptr->branches-=1; it=Qnil;
;goto accept18;revert12:;  goto alt6_3; accept18:;

;ptr->branches-=1; goto accept16;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto revert10;};
 accept16:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; if (1){it=failobj;goto revert10;} break;
case '(' ... '(':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar=it;;
int stop3=0; while(!stop3){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert13;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept20;revert13:;  goto alt7_2; accept20:;

;ptr->branches-=2; goto accept19;
alt7_2: ptr->pos=oldpos7;ptr->branches-=1; stop3=1;
;goto accept21;revert14:;  goto alt7_3; accept21:;

;ptr->branches-=1; goto accept19;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto revert10;};
 accept19:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop3=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; if (1){it=failobj;goto revert10;} break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result=it;;
it=__result; _r_2=it;;
bind_aset(bind2,1,_r_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__pl__b087,1,bind2);_r_2=bind_aget(bind2,1);; _autovar_3=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_3;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass5;} _autovar_4=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_4);
                     it=AmethystParser_procargs(self ); _autovar_5=it;;

                   goto success6;
                   pass6: *ptr=oldpass6;if (1){it=failobj;goto pass5;}
                   success6: *ptr=oldpass6;
                it=_autovar_5; _autovar_6=it;;

                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto revert10;}
                   success5: *ptr=oldpass5;
                it=_autovar_6; __result_2=it;;

;goto accept15;revert10:;  goto alt5_2; accept15:;

;ptr->branches-=2; goto accept14;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; it=rb_ary_new3(0); __result_2=it;;

;goto accept22;revert15:;  goto alt5_3; accept22:;

;ptr->branches-=1; goto accept14;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto memo_fail;};
 accept14:;
 break;
}memo_fail:if(!ptr->branches)ptr->discard=ptr->pos;time_old.discard=ptr->discard; memo_add(ptr->mem,119,ptr->src,oldpos,it,ptr->pos,time_old); return it;

fail: return it;
}
VALUE AmethystParser_call(VALUE self ){VALUE vals[0]; VALUE it ,_k=Qnil,_n=Qnil,_name=Qnil,_arg=Qnil,_autovar=Qnil,__result=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto fail;} break;
case 'A' ... 'Z':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_className(self ); if (it==failobj){it=failobj;goto revert1;} _k=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1; else if (1){it=failobj;goto revert1;} break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert1;} _n=it;;
 break;
}bind_aset(bind2,1,_k);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__c1c8,1,bind2);_k=bind_aget(bind2,1);;_n=bind_aget(bind2,2);; _name=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert2;} _name=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
  it=AmethystParser_argsOpt(self ); _arg=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... '_':;case 'a' ... UC(255):; it=Qnil; break;
case '(' ... '(':;case '`' ... '`':; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_lambda(self ); if (it==failobj){it=failobj;goto revert3;} _autovar=it;;
it=AmethystCore_append(self,_arg,_autovar);
;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=Qnil;
;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept4:;
 break;
}bind_aset(bind2,1,_name);bind_aset(bind2,2,_arg);it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind2);_name=bind_aget(bind2,1);;_arg=bind_aget(bind2,2);; __result=it;;
 break;
case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto fail;} _name=it;;
  it=AmethystParser_argsOpt(self ); _arg=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... '_':;case 'a' ... UC(255):; it=Qnil; break;
case '(' ... '(':;case '`' ... '`':; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_lambda(self ); if (it==failobj){it=failobj;goto revert5;} _autovar=it;;
it=AmethystCore_append(self,_arg,_autovar);
;goto accept8;revert5:;  goto alt3_2; accept8:;

;ptr->branches-=2; goto accept7;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=Qnil;
;goto accept9;revert6:;  goto alt3_3; accept9:;

;ptr->branches-=1; goto accept7;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept7:;
 break;
}bind_aset(bind2,1,_name);bind_aset(bind2,2,_arg);it=rb_funcall(self,sy_AmethystParser_Apply_lb_bi_9146,1,bind2);_name=bind_aget(bind2,1);;_arg=bind_aget(bind2,2);; __result=it;;
 break;
}
fail: return it;
}
VALUE AmethystParser_cases(VALUE self ){VALUE vals[0]; VALUE it ,_e=Qnil,_s=Qnil,_s_2=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,__result=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,__result_2=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_it=Qnil,_num=Qnil,_clas=Qnil;VALUE bind2=bind_new2(2);  VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... '@':;case '[' ... UC(255):; it=rb_ary_new3(0); _e=it;;
it=rb_ary_new3(0); _s=it;;
it=rb_obj_clone(s__lt__524a); _s_2=it;;
 it=_s_2; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto fail;}int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... '=':;case '?' ... '[':;case ']' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar); break;
case '<' ... '<':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _autovar_2=it;;
it=AmethystCore_append(self,_e,_autovar_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '=':;case '?' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case '>' ... '>':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_obj_clone(s__gt__cedf); _s_2=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert2;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar);
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case '>' ... '>':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__gt__cedf); _s_2=it;;
stop1=1; break;
case UC(92) ... UC(92):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _s_2=it;;
it=rb_obj_clone(s__bs__bs__7f81); _autovar_3=it;;
it=AmethystCore_append(self,_s,_autovar_3);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar); break;
} } bind_aset(bind2,1,_s);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Or_lb_Apply_cdcd,1,bind2);_s=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; __result=it;;
 break;
case '-' ... '-':;case '0' ... '9':; it=rb_ary_new3(0); _e=it;;
it=rb_ary_new3(0); _s=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_ary_new3(0); _autovar_4=it;;
  it=Amethyst_number(self ); if (it==failobj){it=failobj;goto revert4;} _autovar_5=it;;
it=AmethystCore_append(self,_autovar_4,_autovar_5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... UC(255):; if (1){it=failobj;goto revert4;} break;
case '.' ... '.':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2; else if (1){it=failobj;goto revert5;}it=rb_obj_clone(s__dot__dot__dot__2f43); __result_2=it;;
it=__result_2; _autovar_6=it;;

;goto accept9;revert5:;  goto alt4_2; accept9:;

;ptr->branches-=2; goto accept8;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1; else if (1){it=failobj;goto revert6;}it=rb_obj_clone(s__dot__dot__58b9); __result_2=it;;
it=__result_2; _autovar_6=it;;

;goto accept10;revert6:;  goto alt4_3; accept10:;

;ptr->branches-=1; goto accept8;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto revert4;};
 accept8:;
 break;
}it=AmethystCore_append(self,_autovar_4,_autovar_6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... UC(255):; if (1){it=failobj;goto revert4;} break;
case '-' ... '-':;case '0' ... '9':;   it=Amethyst_number(self ); if (it==failobj){it=failobj;goto revert4;} _autovar_7=it;;
 break;
}it=AmethystCore_append(self,_autovar_4,_autovar_7);it=_autovar_4; _it=it;;
bind_aset(bind2,1,_it);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);_it=bind_aget(bind2,1);; _num=it;;

;goto accept7;revert4:;  goto alt3_2; accept7:;

;ptr->branches-=2; goto accept6;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1;   it=Amethyst_number(self ); if (it==failobj){it=failobj;goto revert7;} _num=it;;

;goto accept11;revert7:;  goto alt3_3; accept11:;

;ptr->branches-=1; goto accept6;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert3;};
 accept6:;
bind_aset(bind2,1,_num);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_m_2ec1,1,bind2);_num=bind_aget(bind2,1);; __result=it;;

;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=rb_obj_clone(s__lt__524a); _s_2=it;;
 it=_s_2; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert8;}int stop2=0; while(!stop2){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... '=':;case '?' ... '[':;case ']' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert8;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar); break;
case '<' ... '<':; int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _autovar_2=it;;
it=AmethystCore_append(self,_e,_autovar_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '=':;case '?' ... UC(255):; if (1){it=failobj;goto revert9;} break;
case '>' ... '>':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_obj_clone(s__gt__cedf); _s_2=it;;

;goto accept14;revert9:;  goto alt5_2; accept14:;

;ptr->branches-=2; goto accept13;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert10;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar);
;goto accept15;revert10:;  goto alt5_3; accept15:;

;ptr->branches-=1; goto accept13;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto revert8;};
 accept13:;
 break;
case '>' ... '>':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__gt__cedf); _s_2=it;;
cut2=1;stop2=1; break;
case UC(92) ... UC(92):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _s_2=it;;
it=rb_obj_clone(s__bs__bs__7f81); _autovar_3=it;;
it=AmethystCore_append(self,_s,_autovar_3);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert8;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar); break;
} } bind_aset(bind2,1,_s);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Or_lb_Apply_cdcd,1,bind2);_s=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; __result=it;;

;goto accept12;revert8:;  goto alt2_3; accept12:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;if(cut2){ptr->branches-=-1;it=failobj;goto fail;}ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept4:;
 break;
case 'A' ... 'Z':; it=rb_ary_new3(0); _e=it;;
it=rb_ary_new3(0); _s=it;;
int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_className(self ); if (it==failobj){it=failobj;goto revert11;} _clas=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; it=Qnil; break;
case ':' ... ':':; int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==':')  ptr->pos+=1; else if (1){it=failobj;goto revert12;}cut7=1;if (1){it=failobj;goto revert12;}
;goto accept19;revert12:;  goto alt7_2; accept19:;

;ptr->branches-=2; goto accept18;
alt7_2: ptr->pos=oldpos7;if(cut7){ptr->branches-=0;it=failobj;goto revert11;}ptr->branches-=1; it=Qnil;
;goto accept20;revert13:;  goto alt7_3; accept20:;

;ptr->branches-=1; goto accept18;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto revert11;};
 accept18:;
 break;
}bind_aset(bind2,1,_clas);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_c_a8b6,1,bind2);_clas=bind_aget(bind2,1);; __result=it;;

;goto accept17;revert11:;  goto alt6_2; accept17:;

;ptr->branches-=2; goto accept16;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; it=rb_obj_clone(s__lt__524a); _s_2=it;;
 it=_s_2; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert14;}int stop3=0; while(!stop3){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... '=':;case '?' ... '[':;case ']' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert14;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar); break;
case '<' ... '<':; int oldpos8=ptr->pos;int cut8=0;
alt8_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _autovar_2=it;;
it=AmethystCore_append(self,_e,_autovar_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '=':;case '?' ... UC(255):; if (1){it=failobj;goto revert15;} break;
case '>' ... '>':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_obj_clone(s__gt__cedf); _s_2=it;;

;goto accept23;revert15:;  goto alt8_2; accept23:;

;ptr->branches-=2; goto accept22;
alt8_2: ptr->pos=oldpos8;ptr->branches-=1; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert16;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar);
;goto accept24;revert16:;  goto alt8_3; accept24:;

;ptr->branches-=1; goto accept22;
alt8_3: ptr->pos=oldpos8;ptr->branches-=1;if (1){it=failobj;goto revert14;};
 accept22:;
 break;
case '>' ... '>':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__gt__cedf); _s_2=it;;
cut6=1;stop3=1; break;
case UC(92) ... UC(92):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _s_2=it;;
it=rb_obj_clone(s__bs__bs__7f81); _autovar_3=it;;
it=AmethystCore_append(self,_s,_autovar_3);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert14;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar); break;
} } bind_aset(bind2,1,_s);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Or_lb_Apply_cdcd,1,bind2);_s=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; __result=it;;

;goto accept21;revert14:;  goto alt6_3; accept21:;

;ptr->branches-=1; goto accept16;
alt6_3: ptr->pos=oldpos6;if(cut6){ptr->branches-=-1;it=failobj;goto fail;}ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept16:;
 break;
}
fail: return it;
}
VALUE AmethystParser_className(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_it=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... UC(255):; if (1){it=failobj;goto fail;} break;
case 'A' ... 'Z':; it=rb_ary_new3(0); _autovar=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);it=rb_ary_new3(0); _autovar_3=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; stop1=1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4); break;
} } it=_autovar_3; _autovar_5=it;;
it=AmethystCore_append(self,_autovar,_autovar_5);it=_autovar; _it=it;;
bind_aset(bind2,1,_it);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);_it=bind_aget(bind2,1);; __result=it;;
 break;
}
fail: return it;
}
VALUE AmethystParser_collect(VALUE self ,VALUE a0){VALUE vals[1]; VALUE it ,_ors=Qnil,__result=Qnil;VALUE bind2=bind_new2(1); _ors=a0;;  cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);bind_aset(bind2,1,_ors);it=rb_funcall(self,sy_AmethystParser_a_eq_autova_57aa,1,bind2);_ors=bind_aget(bind2,1);; __result=it;;

fail: return it;
}
VALUE AmethystParser_expression(VALUE self ){VALUE vals[0]; VALUE it ,_f=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result=Qnil,_ary=Qnil,__result_2=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=rb_ary_new3(0); _f=it;;
  it=AmethystParser_sequence(self ); _autovar=it;;
it=AmethystCore_append(self,_f,_autovar);it=rb_ary_new3(0); _autovar_2=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1; else if (1){it=failobj;goto revert2;}int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]==')')  ptr->pos+=1; else if (1){it=failobj;goto revert3;}cut3=1;if (1){it=failobj;goto revert3;}
;goto accept6;revert3:;  goto alt3_2; accept6:;

;ptr->branches-=2; goto accept5;
alt3_2: ptr->pos=oldpos3;if(cut3){ptr->branches-=0;it=failobj;goto revert2;}ptr->branches-=1; it=Qnil;
;goto accept7;revert4:;  goto alt3_3; accept7:;

;ptr->branches-=1; goto accept5;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert2;};
 accept5:;

;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4; else if (1){it=failobj;goto revert5;}
;goto accept8;revert5:;  goto alt2_3; accept8:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
  it=AmethystParser_sequence(self ); _autovar_3=it;;
it=AmethystCore_append(self,_autovar_2,_autovar_3);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept9;revert6:;  goto alt1_3; accept9:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 } it=_autovar_2; _autovar_4=it;;
bind_aset(bind2,1,_f);bind_aset(bind2,2,_autovar_4);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__1371,1,bind2);_f=bind_aget(bind2,1);;_autovar_4=bind_aget(bind2,2);;bind_aset(bind2,1,_f);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_f=bind_aget(bind2,1);; __result=it;;
it=__result; _ary=it;;
bind_aset(bind2,1,_ary);it=rb_funcall(self,sy_AmethystParser_Or_AST_dot_c_19e2,1,bind2);_ary=bind_aget(bind2,1);; __result_2=it;;

fail: return it;
}
VALUE AmethystParser_file(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_oldpos=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_g=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... '_':;case 'b' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2);it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);if (1){it=failobj;goto revert2;}
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=Qnil;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; it=Qnil; break;
case '(' ... '(':; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1; else if (1){it=failobj;goto revert4;}cut3=1;if (1){it=failobj;goto revert4;}
;goto accept7;revert4:;  goto alt3_2; accept7:;

;ptr->branches-=2; goto accept6;
alt3_2: ptr->pos=oldpos3;if(cut3){ptr->branches-=0;it=failobj;goto revert3;}ptr->branches-=1; it=Qnil;
;goto accept8;revert5:;  goto alt3_3; accept8:;

;ptr->branches-=1; goto accept6;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert3;};
 accept6:;
 break;
}  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert3;} _autovar_2=it;;

;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept9;revert6:;  goto alt1_3; accept9:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case '(' ... '(':;case '`' ... '`':; int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2); _oldpos=it;;
it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);  it=AmethystParser_lambda(self ); if (it==failobj){it=failobj;goto revert8;}bind_aset(bind2,1,_oldpos);it=rb_funcall(self,sy_AmethystParser__dq_amethys_673b,1,bind2);_oldpos=bind_aget(bind2,1);; _autovar_3=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_3;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_4=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_4);
                   switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; if (1){it=failobj;goto pass2;} break;
case 'a' ... 'a':;   it=AmethystParser_grammar(self ); if (it==failobj){it=failobj;goto pass2;} _g=it;;
 break;
}
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto revert8;}
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,_g);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__4688,1,bind2);_g=bind_aget(bind2,1);;bind_aset(bind2,1,_g);it=rb_funcall(self,sy_AmethystParser__lb__dq__lp__dq_,1,bind2);_g=bind_aget(bind2,1);; _autovar_2=it;;

;goto accept13;revert8:;  goto alt5_2; accept13:;

;ptr->branches-=2; goto accept12;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; it=Qnil;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; it=Qnil; break;
case '(' ... '(':; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1; else if (1){it=failobj;goto revert10;}cut6=1;if (1){it=failobj;goto revert10;}
;goto accept16;revert10:;  goto alt6_2; accept16:;

;ptr->branches-=2; goto accept15;
alt6_2: ptr->pos=oldpos6;if(cut6){ptr->branches-=0;it=failobj;goto revert9;}ptr->branches-=1; it=Qnil;
;goto accept17;revert11:;  goto alt6_3; accept17:;

;ptr->branches-=1; goto accept15;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto revert9;};
 accept15:;
 break;
}  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert9;} _autovar_2=it;;

;goto accept14;revert9:;  goto alt5_3; accept14:;

;ptr->branches-=1; goto accept12;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto revert7;};
 accept12:;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept11;revert7:;  goto alt4_2; accept11:;

;ptr->branches-=2; goto accept10;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; stop1=1;
;goto accept18;revert12:;  goto alt4_3; accept18:;

;ptr->branches-=1; goto accept10;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept10:;
 break;
case 'a' ... 'a':; int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos8=ptr->pos;int cut8=0;
alt8_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_grammar(self ); if (it==failobj){it=failobj;goto revert14;} _autovar_2=it;;

;goto accept22;revert14:;  goto alt8_2; accept22:;

;ptr->branches-=3; goto accept21;
alt8_2: ptr->pos=oldpos8;ptr->branches-=1; it=rb_funcall(self,sy_AmethystParser_pos_5e0b,1,bind2);it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);if (1){it=failobj;goto revert15;}
;goto accept23;revert15:;  goto alt8_3; accept23:;

;ptr->branches-=2; goto accept21;
alt8_3: ptr->pos=oldpos8;ptr->branches-=1; int oldpos9=ptr->pos;int cut9=0;
alt9_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else if (1){it=failobj;goto revert17;}cut9=1;if (1){it=failobj;goto revert17;}
;goto accept26;revert17:;  goto alt9_2; accept26:;

;ptr->branches-=2; goto accept25;
alt9_2: ptr->pos=oldpos9;if(cut9){ptr->branches-=0;it=failobj;goto revert16;}ptr->branches-=1; it=Qnil;
;goto accept27;revert18:;  goto alt9_3; accept27:;

;ptr->branches-=1; goto accept25;
alt9_3: ptr->pos=oldpos9;ptr->branches-=1;if (1){it=failobj;goto revert16;};
 accept25:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... UC(255):; it=Qnil; break;
case '(' ... '(':; int oldpos10=ptr->pos;int cut10=0;
alt10_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1; else if (1){it=failobj;goto revert19;}cut10=1;if (1){it=failobj;goto revert19;}
;goto accept29;revert19:;  goto alt10_2; accept29:;

;ptr->branches-=2; goto accept28;
alt10_2: ptr->pos=oldpos10;if(cut10){ptr->branches-=0;it=failobj;goto revert16;}ptr->branches-=1; it=Qnil;
;goto accept30;revert20:;  goto alt10_3; accept30:;

;ptr->branches-=1; goto accept28;
alt10_3: ptr->pos=oldpos10;ptr->branches-=1;if (1){it=failobj;goto revert16;};
 accept28:;
 break;
}  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert16;} _autovar_2=it;;

;goto accept24;revert16:;  goto alt8_4; accept24:;

;ptr->branches-=1; goto accept21;
alt8_4: ptr->pos=oldpos8;ptr->branches-=1;if (1){it=failobj;goto revert13;};
 accept21:;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept20;revert13:;  goto alt7_2; accept20:;

;ptr->branches-=2; goto accept19;
alt7_2: ptr->pos=oldpos7;ptr->branches-=1; stop1=1;
;goto accept31;revert21:;  goto alt7_3; accept31:;

;ptr->branches-=1; goto accept19;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept19:;
 break;
} } it=_autovar; __result=it;;

fail: return it;
}
VALUE AmethystParser_grammar(VALUE self ){VALUE vals[0]; VALUE it ,_name=Qnil,_parent=Qnil,_autovar=Qnil,_autovar_2=Qnil,_rules=Qnil,__result=Qnil;VALUE bind2=bind_new2(3);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; if (1){it=failobj;goto fail;} break;
case 'a' ... 'a':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='y'&&ame_curstr2(ptr)[5]=='s'&&ame_curstr2(ptr)[6]=='t')  ptr->pos+=7; else if (1){it=failobj;goto fail;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; it=Qnil; break;
case '_' ... '_':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='m'&&ame_curstr2(ptr)[1]=='o'&&ame_curstr2(ptr)[2]=='d'&&ame_curstr2(ptr)[3]=='u'&&ame_curstr2(ptr)[4]=='l'&&ame_curstr2(ptr)[5]=='e')  ptr->pos+=6; else if (1){it=failobj;goto revert1;}
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=Qnil;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
}  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto fail;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto fail;} _name=it;;
 break;
}int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... UC(255):; if (1){it=failobj;goto revert3;} break;
case '<' ... '<':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert3;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert3;} _parent=it;;
 break;
}
;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=rb_obj_clone(s_Amethyst_fe41); _parent=it;;

;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept4:;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'z':;case '|' ... UC(255):; if (1){it=failobj;goto fail;} break;
case '{' ... '{':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; stop1=1; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rule(self ); if (it==failobj){it=failobj;goto revert5;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept8;revert5:;  goto alt3_2; accept8:;

;ptr->branches-=2; goto accept7;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; stop1=1;
;goto accept9;revert6:;  goto alt3_3; accept9:;

;ptr->branches-=1; goto accept7;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept7:;
 break;
} }   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; if (1){it=failobj;goto fail;} break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar; _rules=it;;
bind_aset(bind2,1,_name);bind_aset(bind2,2,_parent);bind_aset(bind2,3,_rules);it=rb_funcall(self,sy_AmethystParser_Grammar_dot__a510,1,bind2);_name=bind_aget(bind2,1);;_parent=bind_aget(bind2,2);;_rules=bind_aget(bind2,3);; __result=it;;
 break;
}
fail: return it;
}
VALUE AmethystParser_host_expr(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... ',':;case '.' ... 'z':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto fail;} break;
case '&' ... '&':;case '{' ... '{':;case '~' ... '~':;   it=AmethystParser_inline_host_expr(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;
 break;
case '-' ... '-':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else if (1){it=failobj;goto fail;}  it=Amethyst_line(self ); if (it==failobj){it=failobj;goto fail;} _s=it;;
bind_aset(bind2,1,_s);it=rb_funcall(self,sy_AmethystParser__dq__le__dq__pl_bind_567e,1,bind2);_s=bind_aget(bind2,1);; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... 'z':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto pass2;} break;
case '&' ... '&':;case '{' ... '{':;case '~' ... '~':;   it=AmethystParser_inline_host_expr(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_3=it;;
 break;
}
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                it=_autovar_3; _autovar_4=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result=it;;
 break;
}
fail: return it;
}
VALUE AmethystParser_inline_host_expr(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_r=Qnil,__result=Qnil,_r_2=Qnil,__result_2=Qnil,_neg=Qnil,_expr=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... 'z':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto fail;} break;
case '{' ... '{':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop1=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; if (1){it=failobj;goto fail;} break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result=it;;
it=__result; _r_2=it;;
bind_aset(bind2,1,_r_2);it=rb_funcall(self,sy_AmethystParser_Act_lb_Args_23b1,1,bind2);_r_2=bind_aget(bind2,1);; __result_2=it;;
 break;
case '&' ... '&':;case '~' ... '~':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _neg=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... 'z':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto fail;} break;
case '&' ... '&':;case '{' ... '{':;case '~' ... '~':;   it=AmethystParser_inline_host_expr(self ); if (it==failobj){it=failobj;goto fail;} _expr=it;;
 break;
}bind_aset(bind2,1,_expr);bind_aset(bind2,2,_neg);it=rb_funcall(self,sy_AmethystParser_Pred_lb_bin_ae38,1,bind2);_expr=bind_aget(bind2,1);;_neg=bind_aget(bind2,2);; __result_2=it;;
 break;
}
fail: return it;
}
VALUE AmethystParser_interpolated(VALUE self ,VALUE a0){VALUE vals[1]; VALUE it ,_x=Qnil,_e=Qnil,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_r=Qnil,__result=Qnil,_r_2=Qnil,_o=Qnil,_c=Qnil,__result_2=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,__result_3=Qnil;VALUE bind2=bind_new2(3); _e=a0;; VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=rb_ary_new3(0); _x=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(34):;case '$' ... '[':;case ']' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_e; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert1;}cut1=1;stop1=1;
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;if(cut1){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert2;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar);
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case '#' ... '#':; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=_e; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert3;}cut2=1;stop1=1;
;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=3; goto accept4;
alt2_2: ptr->pos=oldpos2;if(cut2){ptr->branches-=1;it=failobj;goto fail;}ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1; else if (1){it=failobj;goto revert4;}  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar_2=it;;
int stop2=0; while(!stop2){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert5;} _autovar_3=it;;
it=AmethystCore_append(self,_autovar_2,_autovar_3);
;goto accept8;revert5:;  goto alt3_2; accept8:;

;ptr->branches-=2; goto accept7;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; stop2=1;
;goto accept9;revert6:;  goto alt3_3; accept9:;

;ptr->branches-=1; goto accept7;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert4;};
 accept7:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop2=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; if (1){it=failobj;goto revert4;} break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar_2; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result=it;;
it=__result; _r_2=it;;
it=rb_obj_clone(s__bs__sh__le__a90f); _o=it;;
it=rb_obj_clone(s__re__cbb1); _c=it;;
bind_aset(bind2,1,_o);bind_aset(bind2,2,_r_2);bind_aset(bind2,3,_c);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);_o=bind_aget(bind2,1);;_r_2=bind_aget(bind2,2);;_c=bind_aget(bind2,3);; __result_2=it;;
it=__result_2; _autovar_4=it;;
it=AmethystCore_append(self,_x,_autovar_4);
;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=2; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert7;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar);
;goto accept10;revert7:;  goto alt2_4; accept10:;

;ptr->branches-=1; goto accept4;
alt2_4: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept4:;
 break;
case UC(92) ... UC(92):; int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_e; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert8;}cut4=1;stop1=1;
;goto accept12;revert8:;  goto alt4_2; accept12:;

;ptr->branches-=2; goto accept11;
alt4_2: ptr->pos=oldpos4;if(cut4){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _autovar_5=it;;
it=AmethystCore_append(self,_x,_autovar_5);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert9;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar);
;goto accept13;revert9:;  goto alt4_3; accept13:;

;ptr->branches-=1; goto accept11;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept11:;
 break;
} } bind_aset(bind2,1,_x);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result_3=it;;

fail: return it;
}
VALUE AmethystParser_key(VALUE self ){VALUE vals[0]; VALUE it ,_name=Qnil,__result=Qnil,_arg=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '?':;case 'A' ... UC(255):; if (1){it=failobj;goto fail;} break;
case '@' ... '@':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=4; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case 'A' ... 'Z':; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_className(self ); if (it==failobj){it=failobj;goto revert2;} _name=it;;
bind_aset(bind2,1,_name);it=rb_funcall(self,sy_AmethystParser_Result_lb__le__a3b4,1,bind2);_name=bind_aget(bind2,1);; __result=it;;

;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert3;} _name=it;;
  it=AmethystParser_argsOpt(self ); _arg=it;;
bind_aset(bind2,1,_name);bind_aset(bind2,2,_arg);it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_5e9f,1,bind2);_name=bind_aget(bind2,1);;_arg=bind_aget(bind2,2);; __result=it;;

;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
 break;
case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert1;} _name=it;;
  it=AmethystParser_argsOpt(self ); _arg=it;;
bind_aset(bind2,1,_name);bind_aset(bind2,2,_arg);it=rb_funcall(self,sy_AmethystParser_Key_lb_bind_5e9f,1,bind2);_name=bind_aget(bind2,1);;_arg=bind_aget(bind2,2);; __result=it;;
 break;
}
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=4; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert4;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert4;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert4;} _name=it;;
 break;
}bind_aset(bind2,1,_name);it=rb_funcall(self,sy_AmethystParser_Global_lb_b_0216,1,bind2);_name=bind_aget(bind2,1);; __result=it;;

;goto accept6;revert4:;  goto alt1_3; accept6:;

;ptr->branches-=3; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else if (1){it=failobj;goto revert5;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert5;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert5;} _name=it;;
 break;
}bind_aset(bind2,1,_name);it=rb_funcall(self,sy_AmethystParser_Contextu_4e8d,1,bind2);_name=bind_aget(bind2,1);; __result=it;;

;goto accept7;revert5:;  goto alt1_4; accept7:;

;ptr->branches-=2; goto accept1;
alt1_4: ptr->pos=oldpos1;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1; else if (1){it=failobj;goto revert6;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert6;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert6;} _name=it;;
 break;
}bind_aset(bind2,1,_name);it=rb_funcall(self,sy_AmethystParser_Contextu_32ad,1,bind2);_name=bind_aget(bind2,1);; __result=it;;

;goto accept8;revert6:;  goto alt1_5; accept8:;

;ptr->branches-=1; goto accept1;
alt1_5: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
}
fail: return it;
}
VALUE AmethystParser_lambda(VALUE self ){VALUE vals[0]; VALUE it ,_e=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(39):;case ')' ... '_':;case 'a' ... UC(255):; if (1){it=failobj;goto fail;} break;
case '(' ... '(':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='|')  ptr->pos+=1; else if (1){it=failobj;goto fail;}  it=AmethystParser_expression(self ); _e=it;;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '{':;case '}' ... UC(255):; if (1){it=failobj;goto fail;} break;
case '|' ... '|':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==')')  ptr->pos+=1; else if (1){it=failobj;goto fail;} break;
}bind_aset(bind2,1,_e);it=rb_funcall(self,sy_AmethystParser_Lambda_lb_B_2c90,1,bind2);_e=bind_aget(bind2,1);; __result=it;;
 break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _e=it;;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '_':;case 'a' ... UC(255):; if (1){it=failobj;goto fail;} break;
case '`' ... '`':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,_e);it=rb_funcall(self,sy_AmethystParser_Lambda_lb_B_2c90,1,bind2);_e=bind_aget(bind2,1);; __result=it;;
 break;
}
fail: return it;
}
VALUE AmethystParser_lookaheads(VALUE self ){VALUE vals[0]; VALUE it ,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=rb_ary_new3(0); _s=it;;
  it=AmethystParser_prefixed(self ); if (it==failobj){it=failobj;goto fail;} _autovar=it;;
it=AmethystCore_append(self,_s,_autovar);int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... UC(255):; if (1){it=failobj;goto revert1;} break;
case '&' ... '&':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='&')  ptr->pos+=1; else if (1){it=failobj;goto revert1;} break;
}  it=AmethystParser_prefixed(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_2=it;;
it=AmethystCore_append(self,_s,_autovar_2);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 } bind_aset(bind2,1,_s);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__4673,1,bind2);_s=bind_aget(bind2,1);; __result=it;;

fail: return it;
}
VALUE AmethystParser_name(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_it=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);if (ptr->mem==NULL){ptr->mem=memo_init();ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);}time_struct time_old=memo_get(ptr->mem,117,ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto memo_fail;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); _autovar=it;;
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);it=rb_ary_new3(0); _autovar_3=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; stop1=1; break;
case '0' ... '9':;case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4); break;
} } it=_autovar_3; _autovar_5=it;;
it=AmethystCore_append(self,_autovar,_autovar_5);it=_autovar; _it=it;;
bind_aset(bind2,1,_it);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__7b93,1,bind2);_it=bind_aget(bind2,1);; __result=it;;
 break;
}memo_fail:if(!ptr->branches)ptr->discard=ptr->pos;time_old.discard=ptr->discard; memo_add(ptr->mem,117,ptr->src,oldpos,it,ptr->pos,time_old); return it;

fail: return it;
}
VALUE AmethystParser_nr(VALUE self ){VALUE vals[0]; VALUE it ,_s=Qnil,_s_2=Qnil,_what=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);  VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert1;} break;
}int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );it=rb_obj_clone(s__lp__84c4); _s=it;;
it=_s; _s_2=it;;
 it=_s_2; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert2;}int stop1=0; while(!stop1){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '+':;case '-' ... UC(255):; if (1){it=failobj;goto revert4;} break;
case ',' ... ',':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept8;revert4:;  goto alt4_2; accept8:;

;ptr->branches-=2; goto accept7;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; it=Qnil;
;goto accept9;revert5:;  goto alt4_3; accept9:;

;ptr->branches-=1; goto accept7;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto revert3;};
 accept7:;
  it=Amethyst_spaces(self );it=rb_obj_clone(s__d41d); _s=it;;
it=rb_obj_clone(s__d41d); _s_2=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case '+' ... '?':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert3;} break;
case '*' ... '*':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__ti__3389); _s_2=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert3;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert3;} _what=it;;
 break;
} break;
case '@' ... '@':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__at__518e); _s_2=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert3;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert3;} _what=it;;
 break;
} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert3;} _what=it;;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... '<':;case '>' ... UC(255):; bind_aset(bind2,1,_what);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_what=bind_aget(bind2,1);; break;
case ':' ... ':':; int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_postfixed(self ); if (it==failobj){it=failobj;goto revert6;}it=rb_obj_clone(s__co__853a); _s_2=it;;

;goto accept11;revert6:;  goto alt5_2; accept11:;

;ptr->branches-=2; goto accept10;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; bind_aset(bind2,1,_what);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_what=bind_aget(bind2,1);;
;goto accept12;revert7:;  goto alt5_3; accept12:;

;ptr->branches-=1; goto accept10;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto revert3;};
 accept10:;
 break;
case '=' ... '=':; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert8;} break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; if (1){it=failobj;goto revert8;} break;
}it=rb_obj_clone(s__eq__43ec); _s_2=it;;

;goto accept14;revert8:;  goto alt6_2; accept14:;

;ptr->branches-=2; goto accept13;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; bind_aset(bind2,1,_what);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_what=bind_aget(bind2,1);;
;goto accept15;revert9:;  goto alt6_3; accept15:;

;ptr->branches-=1; goto accept13;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto revert3;};
 accept13:;
 break;
}
;goto accept6;revert3:;  goto alt3_2; accept6:;

;ptr->branches-=2; goto accept5;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; stop1=1;
;goto accept16;revert10:;  goto alt3_3; accept16:;

;ptr->branches-=1; goto accept5;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert2;};
 accept5:;
 }   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; if (1){it=failobj;goto revert2;} break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=Qnil;
;goto accept17;revert11:;  goto alt2_3; accept17:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '<':;case '>' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}cut1=1;if (1){it=failobj;goto revert1;}
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;if(cut1){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; it=Qnil; __result=it;;

;goto accept18;revert12:;  goto alt1_3; accept18:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;

fail: return it;
}
VALUE AmethystParser_postfixed(VALUE self ){VALUE vals[0]; VALUE it ,_from=Qnil,_one=Qnil,_concat=Qnil,_autovar=Qnil,_autovar_2=Qnil,_name=Qnil,_e=Qnil,__result=Qnil;VALUE bind2=bind_new2(3);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  it=AmethystParser_term(self ); if (it==failobj){it=failobj;goto fail;} _from=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=Qnil;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case ',' ... '9':;case ';' ... '<':;case '>' ... '>':;case '@' ... 'Z':;case UC(92) ... UC(255):; if (1){it=failobj;goto revert1;} break;
case '*' ... '+':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _one=it;;
bind_aset(bind2,1,_from);bind_aset(bind2,2,_one);it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_14d1,1,bind2);_from=bind_aget(bind2,1);;_one=bind_aget(bind2,2);; _from=it;;
 break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]=='[')  ptr->pos+=1; else if (1){it=failobj;goto revert2;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case '+' ... UC(255):; it=c_Append_AST; _concat=it;;
 break;
case '*' ... '*':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=c_Concat_AST; _concat=it;;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; it=rb_ary_new3(0); _autovar=it;;
int stop2=0; while(!stop2){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert3;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept6;revert3:;  goto alt3_2; accept6:;

;ptr->branches-=2; goto accept5;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; stop2=1;
;goto accept7;revert4:;  goto alt3_3; accept7:;

;ptr->branches-=1; goto accept5;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert2;};
 accept5:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop2=1; break;
} } it=_autovar; _name=it;;
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert5;} _name=it;;

;goto accept9;revert5:;  goto alt4_2; accept9:;

;ptr->branches-=2; goto accept8;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; it=rb_ary_new3(0); _autovar=it;;
int stop3=0; while(!stop3){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert7;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept12;revert7:;  goto alt5_2; accept12:;

;ptr->branches-=2; goto accept11;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; stop3=1;
;goto accept13;revert8:;  goto alt5_3; accept13:;

;ptr->branches-=1; goto accept11;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto revert6;};
 accept11:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop3=1; break;
} } it=_autovar; _name=it;;

;goto accept10;revert6:;  goto alt4_3; accept10:;

;ptr->branches-=1; goto accept8;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto revert2;};
 accept8:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; if (1){it=failobj;goto revert2;} break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,_name);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__a882,1,bind2);_name=bind_aget(bind2,1);;bind_aset(bind2,1,_name);bind_aset(bind2,2,_concat);bind_aset(bind2,3,_from);it=rb_funcall(self,sy_AmethystParser__at_appends_6209,1,bind2);_name=bind_aget(bind2,1);;_concat=bind_aget(bind2,2);;_from=bind_aget(bind2,3);; _from=it;;

;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... '?':;case '[' ... '^':;case '`' ... '`':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto revert9;} break;
case '&' ... '&':;case '{' ... '{':;case '~' ... '~':;   it=AmethystParser_inline_host_expr(self ); if (it==failobj){it=failobj;goto revert9;} _e=it;;
bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Seq_AST_lb__66a7,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;
 break;
case '@' ... '@':;   it=AmethystParser_key(self ); if (it==failobj){it=failobj;goto revert9;} _name=it;;
bind_aset(bind2,1,_name);bind_aset(bind2,2,_from);it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);_name=bind_aget(bind2,1);;_from=bind_aget(bind2,2);; _from=it;;
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert9;} _name=it;;
bind_aset(bind2,1,_name);bind_aset(bind2,2,_from);it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);_name=bind_aget(bind2,1);;_from=bind_aget(bind2,2);; _from=it;;
 break;
}
;goto accept14;revert9:;  goto alt2_3; accept14:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
 break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else if (1){it=failobj;goto revert1;}  it=AmethystParser_term(self ); if (it==failobj){it=failobj;goto revert1;} _e=it;;
bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Pass_AST_6bd0,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;
 break;
case '?' ... '?':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]=='=')  ptr->pos+=1; else if (1){it=failobj;goto revert10;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... 'z':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto revert10;} break;
case '&' ... '&':;case '{' ... '{':;case '~' ... '~':;   it=AmethystParser_inline_host_expr(self ); if (it==failobj){it=failobj;goto revert10;} _e=it;;
 break;
}bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_3220,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;

;goto accept16;revert10:;  goto alt6_2; accept16:;

;ptr->branches-=2; goto accept15;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; bind_aset(bind2,1,_from);it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_0657,1,bind2);_from=bind_aget(bind2,1);; _from=it;;

;goto accept17;revert11:;  goto alt6_3; accept17:;

;ptr->branches-=1; goto accept15;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept15:;
 break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _e=it;;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Enter_AS_3242,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;
 break;
}
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept18;revert12:;  goto alt1_3; accept18:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos8=ptr->pos;int cut8=0;
alt8_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert14;}cut8=1;if (1){it=failobj;goto revert14;}
;goto accept22;revert14:;  goto alt8_2; accept22:;

;ptr->branches-=2; goto accept21;
alt8_2: ptr->pos=oldpos8;if(cut8){ptr->branches-=0;it=failobj;goto revert13;}ptr->branches-=1; it=Qnil;
;goto accept23;revert15:;  goto alt8_3; accept23:;

;ptr->branches-=1; goto accept21;
alt8_3: ptr->pos=oldpos8;ptr->branches-=1;if (1){it=failobj;goto revert13;};
 accept21:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case ',' ... '9':;case ';' ... '<':;case '>' ... '>':;case '@' ... 'Z':;case UC(92) ... UC(255):; if (1){it=failobj;goto revert13;} break;
case '*' ... '+':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _one=it;;
bind_aset(bind2,1,_from);bind_aset(bind2,2,_one);it=rb_funcall(self,sy_AmethystParser_Many_lb_bin_14d1,1,bind2);_from=bind_aget(bind2,1);;_one=bind_aget(bind2,2);; _from=it;;
 break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos9=ptr->pos;int cut9=0;
alt9_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]=='[')  ptr->pos+=1; else if (1){it=failobj;goto revert16;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case '+' ... UC(255):; it=c_Append_AST; _concat=it;;
 break;
case '*' ... '*':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=c_Concat_AST; _concat=it;;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; it=rb_ary_new3(0); _autovar=it;;
int stop4=0; while(!stop4){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos10=ptr->pos;int cut10=0;
alt10_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert17;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept27;revert17:;  goto alt10_2; accept27:;

;ptr->branches-=2; goto accept26;
alt10_2: ptr->pos=oldpos10;ptr->branches-=1; stop4=1;
;goto accept28;revert18:;  goto alt10_3; accept28:;

;ptr->branches-=1; goto accept26;
alt10_3: ptr->pos=oldpos10;ptr->branches-=1;if (1){it=failobj;goto revert16;};
 accept26:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop4=1; break;
} } it=_autovar; _name=it;;
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':; int oldpos11=ptr->pos;int cut11=0;
alt11_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert19;} _name=it;;

;goto accept30;revert19:;  goto alt11_2; accept30:;

;ptr->branches-=2; goto accept29;
alt11_2: ptr->pos=oldpos11;ptr->branches-=1; it=rb_ary_new3(0); _autovar=it;;
int stop5=0; while(!stop5){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos12=ptr->pos;int cut12=0;
alt12_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert21;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept33;revert21:;  goto alt12_2; accept33:;

;ptr->branches-=2; goto accept32;
alt12_2: ptr->pos=oldpos12;ptr->branches-=1; stop5=1;
;goto accept34;revert22:;  goto alt12_3; accept34:;

;ptr->branches-=1; goto accept32;
alt12_3: ptr->pos=oldpos12;ptr->branches-=1;if (1){it=failobj;goto revert20;};
 accept32:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop5=1; break;
} } it=_autovar; _name=it;;

;goto accept31;revert20:;  goto alt11_3; accept31:;

;ptr->branches-=1; goto accept29;
alt11_3: ptr->pos=oldpos11;ptr->branches-=1;if (1){it=failobj;goto revert16;};
 accept29:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; if (1){it=failobj;goto revert16;} break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,_name);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__a882,1,bind2);_name=bind_aget(bind2,1);;bind_aset(bind2,1,_name);bind_aset(bind2,2,_concat);bind_aset(bind2,3,_from);it=rb_funcall(self,sy_AmethystParser__at_appends_6209,1,bind2);_name=bind_aget(bind2,1);;_concat=bind_aget(bind2,2);;_from=bind_aget(bind2,3);; _from=it;;

;goto accept25;revert16:;  goto alt9_2; accept25:;

;ptr->branches-=2; goto accept24;
alt9_2: ptr->pos=oldpos9;ptr->branches-=1; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... '?':;case '[' ... '^':;case '`' ... '`':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto revert23;} break;
case '&' ... '&':;case '{' ... '{':;case '~' ... '~':;   it=AmethystParser_inline_host_expr(self ); if (it==failobj){it=failobj;goto revert23;} _e=it;;
bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Seq_AST_lb__66a7,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;
 break;
case '@' ... '@':;   it=AmethystParser_key(self ); if (it==failobj){it=failobj;goto revert23;} _name=it;;
bind_aset(bind2,1,_name);bind_aset(bind2,2,_from);it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);_name=bind_aget(bind2,1);;_from=bind_aget(bind2,2);; _from=it;;
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert23;} _name=it;;
bind_aset(bind2,1,_name);bind_aset(bind2,2,_from);it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);_name=bind_aget(bind2,1);;_from=bind_aget(bind2,2);; _from=it;;
 break;
}
;goto accept35;revert23:;  goto alt9_3; accept35:;

;ptr->branches-=1; goto accept24;
alt9_3: ptr->pos=oldpos9;ptr->branches-=1;if (1){it=failobj;goto revert13;};
 accept24:;
 break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='>')  ptr->pos+=1; else if (1){it=failobj;goto revert13;}  it=AmethystParser_term(self ); if (it==failobj){it=failobj;goto revert13;} _e=it;;
bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Pass_AST_6bd0,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;
 break;
case '?' ... '?':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos13=ptr->pos;int cut13=0;
alt13_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]=='=')  ptr->pos+=1; else if (1){it=failobj;goto revert24;}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... 'z':;case '|' ... '}':;case UC(127) ... UC(255):; if (1){it=failobj;goto revert24;} break;
case '&' ... '&':;case '{' ... '{':;case '~' ... '~':;   it=AmethystParser_inline_host_expr(self ); if (it==failobj){it=failobj;goto revert24;} _e=it;;
 break;
}bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_3220,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;

;goto accept37;revert24:;  goto alt13_2; accept37:;

;ptr->branches-=2; goto accept36;
alt13_2: ptr->pos=oldpos13;ptr->branches-=1; bind_aset(bind2,1,_from);it=rb_funcall(self,sy_AmethystParser_Or_AST_lb_b_0657,1,bind2);_from=bind_aget(bind2,1);; _from=it;;

;goto accept38;revert25:;  goto alt13_3; accept38:;

;ptr->branches-=1; goto accept36;
alt13_3: ptr->pos=oldpos13;ptr->branches-=1;if (1){it=failobj;goto revert13;};
 accept36:;
 break;
case '[' ... '[':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _e=it;;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; if (1){it=failobj;goto revert13;} break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,_from);bind_aset(bind2,2,_e);it=rb_funcall(self,sy_AmethystParser_Enter_AS_3242,1,bind2);_from=bind_aget(bind2,1);;_e=bind_aget(bind2,2);; _from=it;;
 break;
}
;goto accept20;revert13:;  goto alt7_2; accept20:;

;ptr->branches-=2; goto accept19;
alt7_2: ptr->pos=oldpos7;ptr->branches-=1; stop1=1;
;goto accept39;revert26:;  goto alt7_3; accept39:;

;ptr->branches-=1; goto accept19;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept19:;
 break;
} } it=_from; __result=it;;

fail: return it;
}
VALUE AmethystParser_prefixed(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_neg=Qnil,_m=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '%':;case UC(39) ... '}':;case UC(127) ... UC(255):;   it=AmethystParser_postfixed(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;
 break;
case '&' ... '&':;case '~' ... '~':; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _neg=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'z':;case '|' ... UC(255):; if (1){it=failobj;goto revert2;} break;
case '{' ... '{':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}cut2=1;if (1){it=failobj;goto revert2;}
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;if(cut2){ptr->branches-=0;it=failobj;goto revert1;}ptr->branches-=1; it=Qnil;
;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
  it=AmethystParser_prefixed(self ); if (it==failobj){it=failobj;goto revert1;} _m=it;;
bind_aset(bind2,1,_m);bind_aset(bind2,2,_neg);it=rb_funcall(self,sy_AmethystParser_Lookahea_0946,1,bind2);_m=bind_aget(bind2,1);;_neg=bind_aget(bind2,2);; __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystParser_postfixed(self ); if (it==failobj){it=failobj;goto revert4;} __result=it;;

;goto accept6;revert4:;  goto alt1_3; accept6:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
}
fail: return it;
}
VALUE AmethystParser_procargs(VALUE self ){VALUE vals[0]; VALUE it ,_c=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=rb_funcall(self,sy_AmethystParser__at_ary_eq__lb__rb_,1,bind2);int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert1;} _c=it;;
bind_aset(bind2,1,_c);it=rb_funcall(self,sy_AmethystParser__lp_bind_lb_1_rb__a724,1,bind2);_c=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto revert1;};it=rb_funcall(self,sy_AmethystParser__at_ary_lt__lt_Ar_59e3,1,bind2);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=3; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystParser_procargs2(self ); if (it==failobj){it=failobj;goto revert2;}
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=2; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept4;revert3:;  goto alt1_4; accept4:;

;ptr->branches-=1; goto accept1;
alt1_4: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 } it=rb_funcall(self,sy_AmethystParser__at_ary_ff69,1,bind2); __result=it;;

fail: return it;
}
VALUE AmethystParser_procargs2(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result=Qnil,_a=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                   it=rb_ary_new3(0); _autovar_2=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_procargs2(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_3=it;;
it=AmethystCore_append(self,_autovar_2,_autovar_3);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept1:;
 } it=_autovar_2; _autovar_4=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result=it;;
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} _a=it;;
bind_aset(bind2,1,_a);it=rb_funcall(self,sy_AmethystParser__at_tmp_lt__lt_bi_b81c,1,bind2);_a=bind_aget(bind2,1);; __result=it;;
 break;
}
fail: return it;
}
VALUE AmethystParser_rubyarg(VALUE self ){VALUE vals[0]; VALUE it ,_n=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_r=Qnil,__result_2=Qnil,_r_2=Qnil,_o=Qnil,_c=Qnil,__result_3=Qnil,_x=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,__result_4=Qnil,_s=Qnil,_autovar_8=Qnil,_x_2=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,__result_5=Qnil,__result_6=Qnil,__result_7=Qnil,_e=Qnil;VALUE bind2=bind_new2(3);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... '#':;case '%' ... '&':;case '*' ... '-':;case '/' ... '/':;case ';' ... '?':;case 'A' ... 'Z':;case UC(92) ... UC(92):;case '^' ... '^':;case '|' ... '|':;case '~' ... UC(255):; it=rb_ary_new3(0); _n=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert2;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert2;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=Qnil;
;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert4;}cut3=1;if (1){it=failobj;goto revert4;}
;goto accept7;revert4:;  goto alt3_2; accept7:;

;ptr->branches-=2; goto accept6;
alt3_2: ptr->pos=oldpos3;if(cut3){ptr->branches-=0;it=failobj;goto revert1;}ptr->branches-=1; it=Qnil;
;goto accept8;revert5:;  goto alt3_3; accept8:;

;ptr->branches-=1; goto accept6;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept6:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; __result=it;;

;goto accept9;revert6:;  goto alt1_3; accept9:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case '{' ... '{':; it=rb_ary_new3(0); _n=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar_3=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert8;} _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4);
;goto accept13;revert8:;  goto alt5_2; accept13:;

;ptr->branches-=2; goto accept12;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; stop1=1;
;goto accept14;revert9:;  goto alt5_3; accept14:;

;ptr->branches-=1; goto accept12;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto revert7;};
 accept12:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop1=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; if (1){it=failobj;goto revert7;} break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar_3; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result_2=it;;
it=__result_2; _r_2=it;;
it=rb_obj_clone(s__le__f95b); _o=it;;
it=rb_obj_clone(s__re__cbb1); _c=it;;
bind_aset(bind2,1,_o);bind_aset(bind2,2,_r_2);bind_aset(bind2,3,_c);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);_o=bind_aget(bind2,1);;_r_2=bind_aget(bind2,2);;_c=bind_aget(bind2,3);; __result_3=it;;
it=__result_3; __result=it;;

;goto accept11;revert7:;  goto alt4_2; accept11:;

;ptr->branches-=2; goto accept10;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert11;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert11;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept17;revert11:;  goto alt6_2; accept17:;

;ptr->branches-=2; goto accept16;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; it=Qnil;
;goto accept18;revert12:;  goto alt6_3; accept18:;

;ptr->branches-=1; goto accept16;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto revert10;};
 accept16:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert13;}cut7=1;if (1){it=failobj;goto revert13;}
;goto accept20;revert13:;  goto alt7_2; accept20:;

;ptr->branches-=2; goto accept19;
alt7_2: ptr->pos=oldpos7;if(cut7){ptr->branches-=0;it=failobj;goto revert10;}ptr->branches-=1; it=Qnil;
;goto accept21;revert14:;  goto alt7_3; accept21:;

;ptr->branches-=1; goto accept19;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto revert10;};
 accept19:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert10;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert10;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept15;revert10:;  goto alt4_3; accept15:;

;ptr->branches-=1; goto accept10;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept10:;
 break;
case UC(34) ... UC(34):; it=rb_ary_new3(0); _n=it;;
int oldpos8=ptr->pos;int cut8=0;
alt8_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); _x=it;;
int stop2=0; while(!stop2){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '[':;case ']' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert15;} _autovar_5=it;;
it=AmethystCore_append(self,_x,_autovar_5); break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut8=1;stop2=1; break;
case '#' ... '#':; int oldpos9=ptr->pos;int cut9=0;
alt9_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='{')  ptr->pos+=1; else if (1){it=failobj;goto revert16;}  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar_3=it;;
int stop3=0; while(!stop3){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos10=ptr->pos;int cut10=0;
alt10_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert17;} _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4);
;goto accept27;revert17:;  goto alt10_2; accept27:;

;ptr->branches-=2; goto accept26;
alt10_2: ptr->pos=oldpos10;ptr->branches-=1; stop3=1;
;goto accept28;revert18:;  goto alt10_3; accept28:;

;ptr->branches-=1; goto accept26;
alt10_3: ptr->pos=oldpos10;ptr->branches-=1;if (1){it=failobj;goto revert16;};
 accept26:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop3=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '|':;case '~' ... UC(255):; if (1){it=failobj;goto revert16;} break;
case '}' ... '}':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar_3; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result_2=it;;
it=__result_2; _r_2=it;;
it=rb_obj_clone(s__bs__sh__le__a90f); _o=it;;
it=rb_obj_clone(s__re__cbb1); _c=it;;
bind_aset(bind2,1,_o);bind_aset(bind2,2,_r_2);bind_aset(bind2,3,_c);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);_o=bind_aget(bind2,1);;_r_2=bind_aget(bind2,2);;_c=bind_aget(bind2,3);; __result_3=it;;
it=__result_3; _autovar_6=it;;
it=AmethystCore_append(self,_x,_autovar_6);
;goto accept25;revert16:;  goto alt9_2; accept25:;

;ptr->branches-=2; goto accept24;
alt9_2: ptr->pos=oldpos9;ptr->branches-=1; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert19;} _autovar_5=it;;
it=AmethystCore_append(self,_x,_autovar_5);
;goto accept29;revert19:;  goto alt9_3; accept29:;

;ptr->branches-=1; goto accept24;
alt9_3: ptr->pos=oldpos9;ptr->branches-=1;if (1){it=failobj;goto revert15;};
 accept24:;
 break;
case UC(92) ... UC(92):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _autovar_7=it;;
it=AmethystCore_append(self,_x,_autovar_7);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert15;} _autovar_5=it;;
it=AmethystCore_append(self,_x,_autovar_5); break;
} } bind_aset(bind2,1,_x);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result_4=it;;
it=__result_4; _s=it;;
bind_aset(bind2,1,_s);it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__qu__88c8,1,bind2);_s=bind_aget(bind2,1);; __result=it;;

;goto accept23;revert15:;  goto alt8_2; accept23:;

;ptr->branches-=2; goto accept22;
alt8_2: ptr->pos=oldpos8;if(cut8){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; int oldpos11=ptr->pos;int cut11=0;
alt11_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert21;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert21;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept32;revert21:;  goto alt11_2; accept32:;

;ptr->branches-=2; goto accept31;
alt11_2: ptr->pos=oldpos11;ptr->branches-=1; it=Qnil;
;goto accept33;revert22:;  goto alt11_3; accept33:;

;ptr->branches-=1; goto accept31;
alt11_3: ptr->pos=oldpos11;ptr->branches-=1;if (1){it=failobj;goto revert20;};
 accept31:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos12=ptr->pos;int cut12=0;
alt12_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert23;}cut12=1;if (1){it=failobj;goto revert23;}
;goto accept35;revert23:;  goto alt12_2; accept35:;

;ptr->branches-=2; goto accept34;
alt12_2: ptr->pos=oldpos12;if(cut12){ptr->branches-=0;it=failobj;goto revert20;}ptr->branches-=1; it=Qnil;
;goto accept36;revert24:;  goto alt12_3; accept36:;

;ptr->branches-=1; goto accept34;
alt12_3: ptr->pos=oldpos12;ptr->branches-=1;if (1){it=failobj;goto revert20;};
 accept34:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert20;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert20;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept30;revert20:;  goto alt8_3; accept30:;

;ptr->branches-=1; goto accept22;
alt8_3: ptr->pos=oldpos8;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept22:;
 break;
case '$' ... '$':;case ':' ... ':':; it=rb_ary_new3(0); _n=it;;
int oldpos13=ptr->pos;int cut13=0;
alt13_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos14=ptr->pos;int cut14=0;
alt14_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert26;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert26;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept40;revert26:;  goto alt14_2; accept40:;

;ptr->branches-=2; goto accept39;
alt14_2: ptr->pos=oldpos14;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _autovar_8=it;;
it=AmethystCore_append(self,_n,_autovar_8);
;goto accept41;revert27:;  goto alt14_3; accept41:;

;ptr->branches-=1; goto accept39;
alt14_3: ptr->pos=oldpos14;ptr->branches-=1;if (1){it=failobj;goto revert25;};
 accept39:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos15=ptr->pos;int cut15=0;
alt15_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert28;}cut15=1;if (1){it=failobj;goto revert28;}
;goto accept43;revert28:;  goto alt15_2; accept43:;

;ptr->branches-=2; goto accept42;
alt15_2: ptr->pos=oldpos15;if(cut15){ptr->branches-=0;it=failobj;goto revert25;}ptr->branches-=1; it=Qnil;
;goto accept44;revert29:;  goto alt15_3; accept44:;

;ptr->branches-=1; goto accept42;
alt15_3: ptr->pos=oldpos15;ptr->branches-=1;if (1){it=failobj;goto revert25;};
 accept42:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert25;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert25;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept38;revert25:;  goto alt13_2; accept38:;

;ptr->branches-=2; goto accept37;
alt13_2: ptr->pos=oldpos13;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; __result=it;;

;goto accept45;revert30:;  goto alt13_3; accept45:;

;ptr->branches-=1; goto accept37;
alt13_3: ptr->pos=oldpos13;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept37:;
 break;
case UC(39) ... UC(39):; it=rb_ary_new3(0); _n=it;;
int oldpos16=ptr->pos;int cut16=0;
alt16_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); _x_2=it;;
int stop4=0; while(!stop4){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert31;} _autovar_9=it;;
it=AmethystCore_append(self,_x_2,_autovar_9); break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut16=1;stop4=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _autovar_10=it;;
it=AmethystCore_append(self,_x_2,_autovar_10);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert31;} _autovar_9=it;;
it=AmethystCore_append(self,_x_2,_autovar_9); break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut16=1;stop4=1; break;
} break;
} } bind_aset(bind2,1,_x_2);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_x_2=bind_aget(bind2,1);; __result_5=it;;
it=__result_5; __result_6=it;;
it=__result_6; _s=it;;
bind_aset(bind2,1,_s);it=rb_funcall(self,sy_AmethystParser_Strin_lb__lb__dq__b20e,1,bind2);_s=bind_aget(bind2,1);; __result=it;;

;goto accept47;revert31:;  goto alt16_2; accept47:;

;ptr->branches-=2; goto accept46;
alt16_2: ptr->pos=oldpos16;if(cut16){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; int oldpos17=ptr->pos;int cut17=0;
alt17_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert33;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert33;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept50;revert33:;  goto alt17_2; accept50:;

;ptr->branches-=2; goto accept49;
alt17_2: ptr->pos=oldpos17;ptr->branches-=1; it=Qnil;
;goto accept51;revert34:;  goto alt17_3; accept51:;

;ptr->branches-=1; goto accept49;
alt17_3: ptr->pos=oldpos17;ptr->branches-=1;if (1){it=failobj;goto revert32;};
 accept49:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos18=ptr->pos;int cut18=0;
alt18_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert35;}cut18=1;if (1){it=failobj;goto revert35;}
;goto accept53;revert35:;  goto alt18_2; accept53:;

;ptr->branches-=2; goto accept52;
alt18_2: ptr->pos=oldpos18;if(cut18){ptr->branches-=0;it=failobj;goto revert32;}ptr->branches-=1; it=Qnil;
;goto accept54;revert36:;  goto alt18_3; accept54:;

;ptr->branches-=1; goto accept52;
alt18_3: ptr->pos=oldpos18;ptr->branches-=1;if (1){it=failobj;goto revert32;};
 accept52:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert32;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert32;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept48;revert32:;  goto alt16_3; accept48:;

;ptr->branches-=1; goto accept46;
alt16_3: ptr->pos=oldpos16;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept46:;
 break;
case '(' ... '(':; it=rb_ary_new3(0); _n=it;;
int oldpos19=ptr->pos;int cut19=0;
alt19_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_lambda(self ); if (it==failobj){it=failobj;goto revert37;} __result=it;;

;goto accept56;revert37:;  goto alt19_2; accept56:;

;ptr->branches-=3; goto accept55;
alt19_2: ptr->pos=oldpos19;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar_3=it;;
int stop5=0; while(!stop5){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos20=ptr->pos;int cut20=0;
alt20_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert39;} _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4);
;goto accept59;revert39:;  goto alt20_2; accept59:;

;ptr->branches-=2; goto accept58;
alt20_2: ptr->pos=oldpos20;ptr->branches-=1; stop5=1;
;goto accept60;revert40:;  goto alt20_3; accept60:;

;ptr->branches-=1; goto accept58;
alt20_3: ptr->pos=oldpos20;ptr->branches-=1;if (1){it=failobj;goto revert38;};
 accept58:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop5=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; if (1){it=failobj;goto revert38;} break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar_3; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result_2=it;;
it=__result_2; _r_2=it;;
it=rb_obj_clone(s__lp__84c4); _o=it;;
it=rb_obj_clone(s__rp__9371); _c=it;;
bind_aset(bind2,1,_o);bind_aset(bind2,2,_r_2);bind_aset(bind2,3,_c);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);_o=bind_aget(bind2,1);;_r_2=bind_aget(bind2,2);;_c=bind_aget(bind2,3);; __result_3=it;;
it=__result_3; __result=it;;

;goto accept57;revert38:;  goto alt19_3; accept57:;

;ptr->branches-=2; goto accept55;
alt19_3: ptr->pos=oldpos19;ptr->branches-=1; int oldpos21=ptr->pos;int cut21=0;
alt21_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert42;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert42;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept63;revert42:;  goto alt21_2; accept63:;

;ptr->branches-=2; goto accept62;
alt21_2: ptr->pos=oldpos21;ptr->branches-=1; it=Qnil;
;goto accept64;revert43:;  goto alt21_3; accept64:;

;ptr->branches-=1; goto accept62;
alt21_3: ptr->pos=oldpos21;ptr->branches-=1;if (1){it=failobj;goto revert41;};
 accept62:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos22=ptr->pos;int cut22=0;
alt22_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert44;}cut22=1;if (1){it=failobj;goto revert44;}
;goto accept66;revert44:;  goto alt22_2; accept66:;

;ptr->branches-=2; goto accept65;
alt22_2: ptr->pos=oldpos22;if(cut22){ptr->branches-=0;it=failobj;goto revert41;}ptr->branches-=1; it=Qnil;
;goto accept67;revert45:;  goto alt22_3; accept67:;

;ptr->branches-=1; goto accept65;
alt22_3: ptr->pos=oldpos22;ptr->branches-=1;if (1){it=failobj;goto revert41;};
 accept65:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert41;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert41;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept61;revert41:;  goto alt19_4; accept61:;

;ptr->branches-=1; goto accept55;
alt19_4: ptr->pos=oldpos19;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept55:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; it=rb_ary_new3(0); _n=it;;
int oldpos23=ptr->pos;int cut23=0;
alt23_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert46;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert46;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept69;revert46:;  goto alt23_2; accept69:;

;ptr->branches-=2; goto accept68;
alt23_2: ptr->pos=oldpos23;ptr->branches-=1; it=Qnil;
;goto accept70;revert47:;  goto alt23_3; accept70:;

;ptr->branches-=1; goto accept68;
alt23_3: ptr->pos=oldpos23;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept68:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos24=ptr->pos;int cut24=0;
alt24_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert48;}cut24=1;if (1){it=failobj;goto revert48;}
;goto accept72;revert48:;  goto alt24_2; accept72:;

;ptr->branches-=2; goto accept71;
alt24_2: ptr->pos=oldpos24;if(cut24){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; it=Qnil;
;goto accept73;revert49:;  goto alt24_3; accept73:;

;ptr->branches-=1; goto accept71;
alt24_3: ptr->pos=oldpos24;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept71:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto fail;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto fail;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;
 break;
case '.' ... '.':; it=rb_ary_new3(0); _n=it;;
int oldpos25=ptr->pos;int cut25=0;
alt25_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos26=ptr->pos;int cut26=0;
alt26_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; if (ame_curstr2(ptr)[0]=='.'&&ame_curstr2(ptr)[1]=='.')  ptr->pos+=2; else if (1){it=failobj;goto revert51;}it=rb_obj_clone(s__dot__dot__dot__2f43); __result_7=it;;
it=__result_7; __result=it;;

;goto accept77;revert51:;  goto alt26_2; accept77:;

;ptr->branches-=2; goto accept76;
alt26_2: ptr->pos=oldpos26;ptr->branches-=1; if (ame_curstr2(ptr)[0]=='.')  ptr->pos+=1; else if (1){it=failobj;goto revert52;}it=rb_obj_clone(s__dot__dot__58b9); __result_7=it;;
it=__result_7; __result=it;;

;goto accept78;revert52:;  goto alt26_3; accept78:;

;ptr->branches-=1; goto accept76;
alt26_3: ptr->pos=oldpos26;ptr->branches-=1;if (1){it=failobj;goto revert50;};
 accept76:;

;goto accept75;revert50:;  goto alt25_2; accept75:;

;ptr->branches-=3; goto accept74;
alt25_2: ptr->pos=oldpos25;ptr->branches-=1; int oldpos27=ptr->pos;int cut27=0;
alt27_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert54;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert54;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept81;revert54:;  goto alt27_2; accept81:;

;ptr->branches-=2; goto accept80;
alt27_2: ptr->pos=oldpos27;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _autovar_8=it;;
it=AmethystCore_append(self,_n,_autovar_8);
;goto accept82;revert55:;  goto alt27_3; accept82:;

;ptr->branches-=1; goto accept80;
alt27_3: ptr->pos=oldpos27;ptr->branches-=1;if (1){it=failobj;goto revert53;};
 accept80:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos28=ptr->pos;int cut28=0;
alt28_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert56;}cut28=1;if (1){it=failobj;goto revert56;}
;goto accept84;revert56:;  goto alt28_2; accept84:;

;ptr->branches-=2; goto accept83;
alt28_2: ptr->pos=oldpos28;if(cut28){ptr->branches-=0;it=failobj;goto revert53;}ptr->branches-=1; it=Qnil;
;goto accept85;revert57:;  goto alt28_3; accept85:;

;ptr->branches-=1; goto accept83;
alt28_3: ptr->pos=oldpos28;ptr->branches-=1;if (1){it=failobj;goto revert53;};
 accept83:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert53;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert53;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept79;revert53:;  goto alt25_3; accept79:;

;ptr->branches-=2; goto accept74;
alt25_3: ptr->pos=oldpos25;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; __result=it;;

;goto accept86;revert58:;  goto alt25_4; accept86:;

;ptr->branches-=1; goto accept74;
alt25_4: ptr->pos=oldpos25;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept74:;
 break;
case '0' ... '9':;case '_' ... '_':;case 'a' ... 'z':; it=rb_ary_new3(0); _n=it;;
int oldpos29=ptr->pos;int cut29=0;
alt29_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; _e=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ';':;case '=' ... UC(255):; if (1){it=failobj;goto revert59;} break;
case '<' ... '<':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='<')  ptr->pos+=1; else if (1){it=failobj;goto revert59;} break;
}bind_aset(bind2,1,_e);it=rb_funcall(self,sy_AmethystParser__lb_bind_lb_1_rb__6281,1,bind2);_e=bind_aget(bind2,1);; __result=it;;

;goto accept88;revert59:;  goto alt29_2; accept88:;

;ptr->branches-=3; goto accept87;
alt29_2: ptr->pos=oldpos29;ptr->branches-=1; int oldpos30=ptr->pos;int cut30=0;
alt30_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert61;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert61;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept91;revert61:;  goto alt30_2; accept91:;

;ptr->branches-=2; goto accept90;
alt30_2: ptr->pos=oldpos30;ptr->branches-=1; it=Qnil;
;goto accept92;revert62:;  goto alt30_3; accept92:;

;ptr->branches-=1; goto accept90;
alt30_3: ptr->pos=oldpos30;ptr->branches-=1;if (1){it=failobj;goto revert60;};
 accept90:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos31=ptr->pos;int cut31=0;
alt31_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert63;}cut31=1;if (1){it=failobj;goto revert63;}
;goto accept94;revert63:;  goto alt31_2; accept94:;

;ptr->branches-=2; goto accept93;
alt31_2: ptr->pos=oldpos31;if(cut31){ptr->branches-=0;it=failobj;goto revert60;}ptr->branches-=1; it=Qnil;
;goto accept95;revert64:;  goto alt31_3; accept95:;

;ptr->branches-=1; goto accept93;
alt31_3: ptr->pos=oldpos31;ptr->branches-=1;if (1){it=failobj;goto revert60;};
 accept93:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert60;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert60;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept89;revert60:;  goto alt29_3; accept89:;

;ptr->branches-=2; goto accept87;
alt29_3: ptr->pos=oldpos29;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; __result=it;;

;goto accept96;revert65:;  goto alt29_4; accept96:;

;ptr->branches-=1; goto accept87;
alt29_4: ptr->pos=oldpos29;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept87:;
 break;
case '@' ... '@':; it=rb_ary_new3(0); _n=it;;
int oldpos32=ptr->pos;int cut32=0;
alt32_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; int oldpos33=ptr->pos;int cut33=0;
alt33_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert67;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert67;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept100;revert67:;  goto alt33_2; accept100:;

;ptr->branches-=2; goto accept99;
alt33_2: ptr->pos=oldpos33;ptr->branches-=1; it=Qnil;
;goto accept101;revert68:;  goto alt33_3; accept101:;

;ptr->branches-=1; goto accept99;
alt33_3: ptr->pos=oldpos33;ptr->branches-=1;if (1){it=failobj;goto revert66;};
 accept99:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos34=ptr->pos;int cut34=0;
alt34_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert69;}cut34=1;if (1){it=failobj;goto revert69;}
;goto accept103;revert69:;  goto alt34_2; accept103:;

;ptr->branches-=2; goto accept102;
alt34_2: ptr->pos=oldpos34;if(cut34){ptr->branches-=0;it=failobj;goto revert66;}ptr->branches-=1; it=Qnil;
;goto accept104;revert70:;  goto alt34_3; accept104:;

;ptr->branches-=1; goto accept102;
alt34_3: ptr->pos=oldpos34;ptr->branches-=1;if (1){it=failobj;goto revert66;};
 accept102:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert66;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert66;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept98;revert66:;  goto alt32_2; accept98:;

;ptr->branches-=3; goto accept97;
alt32_2: ptr->pos=oldpos32;ptr->branches-=1;   it=AmethystParser_key(self ); if (it==failobj){it=failobj;goto revert71;} __result=it;;

;goto accept105;revert71:;  goto alt32_3; accept105:;

;ptr->branches-=2; goto accept97;
alt32_3: ptr->pos=oldpos32;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; __result=it;;

;goto accept106;revert72:;  goto alt32_4; accept106:;

;ptr->branches-=1; goto accept97;
alt32_4: ptr->pos=oldpos32;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept97:;
 break;
case '[' ... '[':; it=rb_ary_new3(0); _n=it;;
int oldpos35=ptr->pos;int cut35=0;
alt35_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_spaces(self );it=rb_ary_new3(0); _autovar_3=it;;
int stop6=0; while(!stop6){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):; int oldpos36=ptr->pos;int cut36=0;
alt36_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert74;} _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4);
;goto accept110;revert74:;  goto alt36_2; accept110:;

;ptr->branches-=2; goto accept109;
alt36_2: ptr->pos=oldpos36;ptr->branches-=1; stop6=1;
;goto accept111;revert75:;  goto alt36_3; accept111:;

;ptr->branches-=1; goto accept109;
alt36_3: ptr->pos=oldpos36;ptr->branches-=1;if (1){it=failobj;goto revert73;};
 accept109:;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; stop6=1; break;
} } switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; if (1){it=failobj;goto revert73;} break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar_3; _r=it;;
bind_aset(bind2,1,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb_,1,bind2);_r=bind_aget(bind2,1);; __result_2=it;;
it=__result_2; _r_2=it;;
it=rb_obj_clone(s__lb__8154); _o=it;;
it=rb_obj_clone(s__rb__0fbd); _c=it;;
bind_aset(bind2,1,_o);bind_aset(bind2,2,_r_2);bind_aset(bind2,3,_c);it=rb_funcall(self,sy_AmethystParser_Args_lb__le__co_a_9abe,1,bind2);_o=bind_aget(bind2,1);;_r_2=bind_aget(bind2,2);;_c=bind_aget(bind2,3);; __result_3=it;;
it=__result_3; __result=it;;

;goto accept108;revert73:;  goto alt35_2; accept108:;

;ptr->branches-=2; goto accept107;
alt35_2: ptr->pos=oldpos35;ptr->branches-=1; int oldpos37=ptr->pos;int cut37=0;
alt37_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert77;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert77;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept114;revert77:;  goto alt37_2; accept114:;

;ptr->branches-=2; goto accept113;
alt37_2: ptr->pos=oldpos37;ptr->branches-=1; it=Qnil;
;goto accept115;revert78:;  goto alt37_3; accept115:;

;ptr->branches-=1; goto accept113;
alt37_3: ptr->pos=oldpos37;ptr->branches-=1;if (1){it=failobj;goto revert76;};
 accept113:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos38=ptr->pos;int cut38=0;
alt38_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert79;}cut38=1;if (1){it=failobj;goto revert79;}
;goto accept117;revert79:;  goto alt38_2; accept117:;

;ptr->branches-=2; goto accept116;
alt38_2: ptr->pos=oldpos38;if(cut38){ptr->branches-=0;it=failobj;goto revert76;}ptr->branches-=1; it=Qnil;
;goto accept118;revert80:;  goto alt38_3; accept118:;

;ptr->branches-=1; goto accept116;
alt38_3: ptr->pos=oldpos38;ptr->branches-=1;if (1){it=failobj;goto revert76;};
 accept116:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert76;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert76;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept112;revert76:;  goto alt35_3; accept112:;

;ptr->branches-=1; goto accept107;
alt35_3: ptr->pos=oldpos35;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept107:;
 break;
case '`' ... '`':; it=rb_ary_new3(0); _n=it;;
int oldpos39=ptr->pos;int cut39=0;
alt39_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_lambda(self ); if (it==failobj){it=failobj;goto revert81;} __result=it;;

;goto accept120;revert81:;  goto alt39_2; accept120:;

;ptr->branches-=2; goto accept119;
alt39_2: ptr->pos=oldpos39;ptr->branches-=1; int oldpos40=ptr->pos;int cut40=0;
alt40_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert83;} break;
case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='@')  ptr->pos+=1; else if (1){it=failobj;goto revert83;} break;
}it=rb_obj_clone(s__co__at__4bf0); _autovar=it;;
it=AmethystCore_append(self,_n,_autovar);
;goto accept123;revert83:;  goto alt40_2; accept123:;

;ptr->branches-=2; goto accept122;
alt40_2: ptr->pos=oldpos40;ptr->branches-=1; it=Qnil;
;goto accept124;revert84:;  goto alt40_3; accept124:;

;ptr->branches-=1; goto accept122;
alt40_3: ptr->pos=oldpos40;ptr->branches-=1;if (1){it=failobj;goto revert82;};
 accept122:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; it=Qnil; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; int oldpos41=ptr->pos;int cut41=0;
alt41_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst__(self ); if (it==failobj){it=failobj;goto revert85;}cut41=1;if (1){it=failobj;goto revert85;}
;goto accept126;revert85:;  goto alt41_2; accept126:;

;ptr->branches-=2; goto accept125;
alt41_2: ptr->pos=oldpos41;if(cut41){ptr->branches-=0;it=failobj;goto revert82;}ptr->branches-=1; it=Qnil;
;goto accept127;revert86:;  goto alt41_3; accept127:;

;ptr->branches-=1; goto accept125;
alt41_3: ptr->pos=oldpos41;ptr->branches-=1;if (1){it=failobj;goto revert82;};
 accept125:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert82;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert82;} _autovar_2=it;;
 break;
}it=AmethystCore_append(self,_n,_autovar_2);bind_aset(bind2,1,_n);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_n=bind_aget(bind2,1);; __result=it;;

;goto accept121;revert82:;  goto alt39_3; accept121:;

;ptr->branches-=1; goto accept119;
alt39_3: ptr->pos=oldpos39;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept119:;
 break;
}
fail: return it;
}
VALUE AmethystParser_rule(VALUE self ){VALUE vals[0]; VALUE it ,_bnding=Qnil,_varargs=Qnil,_arg2=Qnil,_name=Qnil,_s=Qnil,_s_2=Qnil,_autovar=Qnil,_k=Qnil,_what=Qnil,_r=Qnil,_e=Qnil,_autovar_2=Qnil,_arg=Qnil,_body=Qnil,_args=Qnil,_locals=Qnil,__result=Qnil;VALUE bind2=bind_new2(6);  VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);if (ptr->mem==NULL){ptr->mem=memo_init();ptr->memgc=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,ptr->mem);}time_struct time_old=memo_get(ptr->mem,115,ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;it=rb_funcall(self,sy_AmethystParser__at_locals_eq__4fc1,1,bind2);it=rb_funcall(self,sy_AmethystParser__at_bnding_7d3c,1,bind2); _bnding=it;;
  it=Amethyst_spaces(self );it=Qfalse; _varargs=it;;
it=rb_ary_new3(0); _arg2=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto memo_fail;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto memo_fail;} _name=it;;
 break;
}int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );it=rb_obj_clone(s__lp__84c4); _s=it;;
it=_s; _s_2=it;;
 it=_s_2; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert1;}it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '+':;case '-' ... UC(255):; if (1){it=failobj;goto revert3;} break;
case ',' ... ',':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept6;revert3:;  goto alt3_2; accept6:;

;ptr->branches-=2; goto accept5;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=Qnil;
;goto accept7;revert4:;  goto alt3_3; accept7:;

;ptr->branches-=1; goto accept5;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto revert2;};
 accept5:;
  it=Amethyst_spaces(self );it=rb_obj_clone(s__d41d); _s=it;;
it=rb_obj_clone(s__d41d); _s_2=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ')':;case '+' ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert2;} break;
case '*' ... '*':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__ti__3389); _s_2=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; if (1){it=failobj;goto revert2;} break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert2;} _k=it;;
 break;
}bind_aset(bind2,1,_varargs);bind_aset(bind2,2,_k);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__4e2f,1,bind2);_varargs=bind_aget(bind2,1);;_k=bind_aget(bind2,2);; _what=it;;
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'z':;   it=AmethystParser_name(self ); if (it==failobj){it=failobj;goto revert2;} _k=it;;
bind_aset(bind2,1,_arg2);bind_aset(bind2,2,_k);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__lt__798b,1,bind2);_arg2=bind_aget(bind2,1);;_k=bind_aget(bind2,2);; _what=it;;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '<':;case '>' ... UC(255):; it=Qnil; break;
case '=' ... '=':; int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__eq__43ec); _s_2=it;;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(92):;case '^' ... '|':;case '~' ... UC(255):;   it=AmethystParser_rubyarg(self ); if (it==failobj){it=failobj;goto revert5;} _r=it;;
 break;
case ')' ... ')':;case ']' ... ']':;case '}' ... '}':; if (1){it=failobj;goto revert5;} break;
}bind_aset(bind2,1,_varargs);bind_aset(bind2,2,_what);bind_aset(bind2,3,_r);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__c77b,1,bind2);_varargs=bind_aget(bind2,1);;_what=bind_aget(bind2,2);;_r=bind_aget(bind2,3);;
;goto accept9;revert5:;  goto alt4_2; accept9:;

;ptr->branches-=2; goto accept8;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; it=Qnil;
;goto accept10;revert6:;  goto alt4_3; accept10:;

;ptr->branches-=1; goto accept8;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto revert2;};
 accept8:;
 break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '9':;case ';' ... UC(255):; it=Qnil; break;
case ':' ... ':':; int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__co__853a); _s_2=it;;
  it=AmethystParser_postfixed(self ); if (it==failobj){it=failobj;goto revert7;} _e=it;;
bind_aset(bind2,1,_varargs);bind_aset(bind2,2,_what);bind_aset(bind2,3,_e);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__3c5b,1,bind2);_varargs=bind_aget(bind2,1);;_what=bind_aget(bind2,2);;_e=bind_aget(bind2,3);;
;goto accept12;revert7:;  goto alt5_2; accept12:;

;ptr->branches-=2; goto accept11;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; it=Qnil;
;goto accept13;revert8:;  goto alt5_3; accept13:;

;ptr->branches-=1; goto accept11;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto revert2;};
 accept11:;
 break;
}bind_aset(bind2,1,_k);bind_aset(bind2,2,_what);it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_5836,1,bind2);_k=bind_aget(bind2,1);;_what=bind_aget(bind2,2);; _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; stop1=1;
;goto accept14;revert9:;  goto alt2_3; accept14:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
 }   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; if (1){it=failobj;goto revert1;} break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}it=_autovar; _arg=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=Qnil;
;goto accept15;revert10:;  goto alt1_3; accept15:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto memo_fail;};
 accept1:;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '<':;case '>' ... UC(255):; if (1){it=failobj;goto memo_fail;} break;
case '=' ... '=':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}  it=AmethystParser_expression(self ); _body=it;;
bind_aset(bind2,1,_varargs);bind_aset(bind2,2,_arg2);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__sp__5934,1,bind2);_varargs=bind_aget(bind2,1);;_arg2=bind_aget(bind2,2);; _args=it;;
bind_aset(bind2,1,_body);it=rb_funcall(self,sy_AmethystParser_Bind_lb_loc_37df,1,bind2);_body=bind_aget(bind2,1);; _body=it;;
it=rb_funcall(self,sy_AmethystParser__at_locals_dot__bdc6,1,bind2); _locals=it;;
bind_aset(bind2,1,_body);bind_aset(bind2,2,_varargs);bind_aset(bind2,3,_name);bind_aset(bind2,4,_arg);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__eq__9a0b,1,bind2);_body=bind_aget(bind2,1);;_varargs=bind_aget(bind2,2);;_name=bind_aget(bind2,3);;_arg=bind_aget(bind2,4);;bind_aset(bind2,1,_bnding);bind_aset(bind2,2,_varargs);bind_aset(bind2,3,_name);bind_aset(bind2,4,_body);bind_aset(bind2,5,_args);bind_aset(bind2,6,_locals);it=rb_funcall(self,sy_AmethystParser_Rule_dot_cre_113e,1,bind2);_bnding=bind_aget(bind2,1);;_varargs=bind_aget(bind2,2);;_name=bind_aget(bind2,3);;_body=bind_aget(bind2,4);;_args=bind_aget(bind2,5);;_locals=bind_aget(bind2,6);; __result=it;;
memo_fail:if(!ptr->branches)ptr->discard=ptr->pos;time_old.discard=ptr->discard; memo_add(ptr->mem,115,ptr->src,oldpos,it,ptr->pos,time_old); return it;

fail: return it;
}
VALUE AmethystParser_ruleargs(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_name=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  it=AmethystParser_argsOpt(self ); _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   it=rb_ary_new3(0); _autovar_3=it;;
int stop1=0; while(!stop1){ switch(FIX2LONG(rb_hash_aref(switchhash_AmethystParser_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Args*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_4=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_4);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass3;} _name=it;;
bind_aset(bind2,1,_name);it=rb_funcall(self,sy_AmethystParser_local_lp_bi_196b,1,bind2);_name=bind_aget(bind2,1);; _autovar_5=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert1;}
                   success3: *ptr=oldpass3;
                it=_autovar_5; _autovar_6=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_6);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass2;};
 accept1:;
 break;
case 1/*Object*/:; stop1=1; break;
} } it=_autovar_3; _autovar_7=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                it=_autovar_7; _autovar_8=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_8; __result=it;;

fail: return it;
}
VALUE AmethystParser_sequence(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_ary=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=rb_ary_new3(0); _autovar=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_nr(self ); if (it==failobj){it=failobj;goto revert1;}int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '+':;case '-' ... UC(255):; if (1){it=failobj;goto revert2;} break;
case ',' ... ',':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=Qnil;
;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
  it=Amethyst_spaces(self );  it=AmethystParser_lookaheads(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_2=it;;
it=AmethystCore_append(self,_autovar,_autovar_2);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept6;revert4:;  goto alt1_3; accept6:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 } it=_autovar; _ary=it;;
bind_aset(bind2,1,_ary);it=rb_funcall(self,sy_AmethystParser_Seq_AST_dot__a126,1,bind2);_ary=bind_aget(bind2,1);; __result=it;;

fail: return it;
}
VALUE AmethystParser_string_like(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE it ,_start=Qnil,_s=Qnil,_end=Qnil,_e=Qnil,_x=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil,__result_2=Qnil;VALUE bind2=bind_new2(1); _start=a0;;_end=a1;; VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=_start; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto fail;}it=_end; _e=it;;
it=rb_ary_new3(0); _x=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_e; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert1;}cut1=1;stop1=1;
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;if(cut1){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert2;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar);
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case UC(92) ... UC(92):; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_e; _s=it;;
 it=_s; arg0=it; it=AmethystCore__seq(self ,arg0); if (it==failobj){it=failobj;goto revert3;}cut2=1;stop1=1;
;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;if(cut2){ptr->branches-=0;it=failobj;goto fail;}ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _autovar_2=it;;
it=AmethystCore_append(self,_x,_autovar_2);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert4;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar);
;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept4:;
 break;
} } bind_aset(bind2,1,_x);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

fail: return it;
}
VALUE AmethystParser_term(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_x=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result_2=Qnil,__result_3=Qnil,_s=Qnil,_x_2=Qnil,_ors=Qnil,__result_4=Qnil,_it=Qnil,_e=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '$' ... '%':;case ')' ... ',':;case '/' ... '?':;case UC(92) ... '^':;case '`' ... '`':;case '|' ... '}':;case UC(127) ... UC(255):; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert1;} __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; int oldpos2=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert3;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept5;revert3:;  goto reject1; accept5:;
 it=Qnil; goto accept4;  reject1: it=failobj; accept4: ptr->pos=oldpos2; if (it==failobj){it=failobj;goto revert2;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case UC(34) ... UC(34):; int oldpos3=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert4;} __result=it;;

;goto accept7;revert4:;  goto alt2_2; accept7:;

;ptr->branches-=3; goto accept6;
alt2_2: ptr->pos=oldpos3;ptr->branches-=1; int oldpos4=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert6;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept10;revert6:;  goto reject2; accept10:;
 it=Qnil; goto accept9;  reject2: it=failobj; accept9: ptr->pos=oldpos4; if (it==failobj){it=failobj;goto revert5;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept8;revert5:;  goto alt2_3; accept8:;

;ptr->branches-=2; goto accept6;
alt2_3: ptr->pos=oldpos3;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); _x=it;;
int stop1=0; while(!stop1){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert7;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar); break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut2=1;stop1=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '!':;case '#' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _autovar_2=it;;
it=AmethystCore_append(self,_x,_autovar_2);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert7;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar); break;
case UC(34) ... UC(34):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut2=1;stop1=1; break;
} break;
} } bind_aset(bind2,1,_x);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_x=bind_aget(bind2,1);; __result_2=it;;
it=__result_2; __result_3=it;;
it=__result_3; _s=it;;
bind_aset(bind2,1,_s);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_t_e958,1,bind2);_s=bind_aget(bind2,1);; __result=it;;

;goto accept11;revert7:;  goto alt2_4; accept11:;

;ptr->branches-=1; goto accept6;
alt2_4: ptr->pos=oldpos3;if(cut2){ptr->branches-=-1;it=failobj;goto fail;}ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept6:;
 break;
case '#' ... '#':; int oldpos5=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert8;} __result=it;;

;goto accept13;revert8:;  goto alt3_2; accept13:;

;ptr->branches-=3; goto accept12;
alt3_2: ptr->pos=oldpos5;ptr->branches-=1; int oldpos6=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert10;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept16;revert10:;  goto reject3; accept16:;
 it=Qnil; goto accept15;  reject3: it=failobj; accept15: ptr->pos=oldpos6; if (it==failobj){it=failobj;goto revert9;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept14;revert9:;  goto alt3_3; accept14:;

;ptr->branches-=2; goto accept12;
alt3_3: ptr->pos=oldpos5;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=Amethyst_line(self ); if (it==failobj){it=failobj;goto revert11;} _s=it;;
bind_aset(bind2,1,_s);it=rb_funcall(self,sy_AmethystParser_Comment_lb__ed6f,1,bind2);_s=bind_aget(bind2,1);; __result=it;;

;goto accept17;revert11:;  goto alt3_4; accept17:;

;ptr->branches-=1; goto accept12;
alt3_4: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept12:;
 break;
case '&' ... '&':;case '-' ... '-':;case '{' ... '{':;case '~' ... '~':; int oldpos7=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert12;} __result=it;;

;goto accept19;revert12:;  goto alt4_2; accept19:;

;ptr->branches-=3; goto accept18;
alt4_2: ptr->pos=oldpos7;ptr->branches-=1; int oldpos8=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert14;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept22;revert14:;  goto reject4; accept22:;
 it=Qnil; goto accept21;  reject4: it=failobj; accept21: ptr->pos=oldpos8; if (it==failobj){it=failobj;goto revert13;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept20;revert13:;  goto alt4_3; accept20:;

;ptr->branches-=2; goto accept18;
alt4_3: ptr->pos=oldpos7;ptr->branches-=1;   it=AmethystParser_host_expr(self ); if (it==failobj){it=failobj;goto revert15;} __result=it;;

;goto accept23;revert15:;  goto alt4_4; accept23:;

;ptr->branches-=1; goto accept18;
alt4_4: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept18:;
 break;
case UC(39) ... UC(39):; int oldpos9=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert16;} __result=it;;

;goto accept25;revert16:;  goto alt5_2; accept25:;

;ptr->branches-=3; goto accept24;
alt5_2: ptr->pos=oldpos9;ptr->branches-=1; int oldpos10=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert18;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept28;revert18:;  goto reject5; accept28:;
 it=Qnil; goto accept27;  reject5: it=failobj; accept27: ptr->pos=oldpos10; if (it==failobj){it=failobj;goto revert17;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept26;revert17:;  goto alt5_3; accept26:;

;ptr->branches-=2; goto accept24;
alt5_3: ptr->pos=oldpos9;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_ary_new3(0); _x=it;;
int stop2=0; while(!stop2){ switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=Qnil;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert19;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar); break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut5=1;stop2=1; break;
} break;
case UC(92) ... UC(92):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '&':;case '(' ... UC(255):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); _autovar_2=it;;
it=AmethystCore_append(self,_x,_autovar_2);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert19;} _autovar=it;;
it=AmethystCore_append(self,_x,_autovar); break;
case UC(39) ... UC(39):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;cut5=1;stop2=1; break;
} break;
} } bind_aset(bind2,1,_x);it=rb_funcall(self,sy_AmethystParser_bind_lb_1_rb__dot__e879,1,bind2);_x=bind_aget(bind2,1);; __result_2=it;;
it=__result_2; __result_3=it;;
it=__result_3; _s=it;;
bind_aset(bind2,1,_s);it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_s_9322,1,bind2);_s=bind_aget(bind2,1);; __result=it;;

;goto accept29;revert19:;  goto alt5_4; accept29:;

;ptr->branches-=1; goto accept24;
alt5_4: ptr->pos=oldpos9;if(cut5){ptr->branches-=-1;it=failobj;goto fail;}ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept24:;
 break;
case '(' ... '(':; int oldpos11=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert20;} __result=it;;

;goto accept31;revert20:;  goto alt6_2; accept31:;

;ptr->branches-=3; goto accept30;
alt6_2: ptr->pos=oldpos11;ptr->branches-=1; int oldpos12=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert22;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept34;revert22:;  goto reject6; accept34:;
 it=Qnil; goto accept33;  reject6: it=failobj; accept33: ptr->pos=oldpos12; if (it==failobj){it=failobj;goto revert21;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept32;revert21:;  goto alt6_3; accept32:;

;ptr->branches-=2; goto accept30;
alt6_3: ptr->pos=oldpos11;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _x_2=it;;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '(':;case '*' ... UC(255):; if (1){it=failobj;goto revert23;} break;
case ')' ... ')':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'Z':;case UC(92) ... UC(255):; bind_aset(bind2,1,_x_2);it=rb_funcall(self,sy_AmethystParser_Parenthe_261b,1,bind2);_x_2=bind_aget(bind2,1);; __result=it;;
 break;
case '[' ... '[':; int oldpos13=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1; else if (1){it=failobj;goto revert24;}it=_x_2; _ors=it;;
bind_aset(bind2,1,_ors);it=rb_funcall(self,sy_AmethystParser_a_eq_autova_57aa,1,bind2);_ors=bind_aget(bind2,1);; __result_4=it;;
it=__result_4; __result=it;;

;goto accept37;revert24:;  goto alt7_2; accept37:;

;ptr->branches-=2; goto accept36;
alt7_2: ptr->pos=oldpos13;ptr->branches-=1; bind_aset(bind2,1,_x_2);it=rb_funcall(self,sy_AmethystParser_Parenthe_261b,1,bind2);_x_2=bind_aget(bind2,1);; __result=it;;

;goto accept38;revert25:;  goto alt7_3; accept38:;

;ptr->branches-=1; goto accept36;
alt7_3: ptr->pos=oldpos13;ptr->branches-=1;if (1){it=failobj;goto revert23;};
 accept36:;
 break;
}
;goto accept35;revert23:;  goto alt6_4; accept35:;

;ptr->branches-=1; goto accept30;
alt6_4: ptr->pos=oldpos11;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept30:;
 break;
case '.' ... '.':; int oldpos14=ptr->pos;int cut8=0;
alt8_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert26;} __result=it;;

;goto accept40;revert26:;  goto alt8_2; accept40:;

;ptr->branches-=2; goto accept39;
alt8_2: ptr->pos=oldpos14;ptr->branches-=1; int oldpos15=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert28;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept43;revert28:;  goto reject7; accept43:;
 it=Qnil; goto accept42;  reject7: it=failobj; accept42: ptr->pos=oldpos15; if (it==failobj){it=failobj;goto revert27;}int oldpos16=ptr->pos;int cut9=0;
alt9_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;
;goto accept45;revert29:;  goto alt9_2; accept45:;

;ptr->branches-=2; goto accept44;
alt9_2: ptr->pos=oldpos16;ptr->branches-=1; it=Qnil;
;goto accept46;revert30:;  goto alt9_3; accept46:;

;ptr->branches-=1; goto accept44;
alt9_3: ptr->pos=oldpos16;ptr->branches-=1;if (1){it=failobj;goto revert27;};
 accept44:;
it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept41;revert27:;  goto alt8_3; accept41:;

;ptr->branches-=1; goto accept39;
alt8_3: ptr->pos=oldpos14;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept39:;
 break;
case '@' ... '@':; int oldpos17=ptr->pos;int cut10=0;
alt10_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert31;} __result=it;;

;goto accept48;revert31:;  goto alt10_2; accept48:;

;ptr->branches-=3; goto accept47;
alt10_2: ptr->pos=oldpos17;ptr->branches-=1; int oldpos18=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert33;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept51;revert33:;  goto reject8; accept51:;
 it=Qnil; goto accept50;  reject8: it=failobj; accept50: ptr->pos=oldpos18; if (it==failobj){it=failobj;goto revert32;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept49;revert32:;  goto alt10_3; accept49:;

;ptr->branches-=2; goto accept47;
alt10_3: ptr->pos=oldpos17;ptr->branches-=1;   it=AmethystParser_key(self ); if (it==failobj){it=failobj;goto revert34;} _it=it;;
bind_aset(bind2,1,_it);it=rb_funcall(self,sy_AmethystParser_Act_lb_bind_7d0b,1,bind2);_it=bind_aget(bind2,1);; __result=it;;

;goto accept52;revert34:;  goto alt10_4; accept52:;

;ptr->branches-=1; goto accept47;
alt10_4: ptr->pos=oldpos17;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept47:;
 break;
case 'A' ... 'Z':;case '_' ... '_':;case 'a' ... 'a':;case 'c' ... 'z':; int oldpos19=ptr->pos;int cut11=0;
alt11_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert35;} __result=it;;

;goto accept54;revert35:;  goto alt11_2; accept54:;

;ptr->branches-=3; goto accept53;
alt11_2: ptr->pos=oldpos19;ptr->branches-=1;   it=AmethystParser_call(self ); if (it==failobj){it=failobj;goto revert36;} __result=it;;

;goto accept55;revert36:;  goto alt11_3; accept55:;

;ptr->branches-=2; goto accept53;
alt11_3: ptr->pos=oldpos19;ptr->branches-=1; int oldpos20=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert38;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept58;revert38:;  goto reject9; accept58:;
 it=Qnil; goto accept57;  reject9: it=failobj; accept57: ptr->pos=oldpos20; if (it==failobj){it=failobj;goto revert37;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept56;revert37:;  goto alt11_4; accept56:;

;ptr->branches-=1; goto accept53;
alt11_4: ptr->pos=oldpos19;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept53:;
 break;
case '[' ... '[':; int oldpos21=ptr->pos;int cut12=0;
alt12_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert39;} __result=it;;

;goto accept60;revert39:;  goto alt12_2; accept60:;

;ptr->branches-=3; goto accept59;
alt12_2: ptr->pos=oldpos21;ptr->branches-=1; int oldpos22=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert41;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept63;revert41:;  goto reject10; accept63:;
 it=Qnil; goto accept62;  reject10: it=failobj; accept62: ptr->pos=oldpos22; if (it==failobj){it=failobj;goto revert40;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept61;revert40:;  goto alt12_3; accept61:;

;ptr->branches-=2; goto accept59;
alt12_3: ptr->pos=oldpos21;ptr->branches-=1; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;  it=AmethystParser_expression(self ); _e=it;;
  it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(92):;case '^' ... UC(255):; if (1){it=failobj;goto revert42;} break;
case ']' ... ']':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}bind_aset(bind2,1,_e);it=rb_funcall(self,sy_AmethystParser_Enter_AS_06e8,1,bind2);_e=bind_aget(bind2,1);; __result=it;;

;goto accept64;revert42:;  goto alt12_4; accept64:;

;ptr->branches-=1; goto accept59;
alt12_4: ptr->pos=oldpos21;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept59:;
 break;
case 'b' ... 'b':; int oldpos23=ptr->pos;int cut13=0;
alt13_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=4; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='a'&&ame_curstr2(ptr)[3]=='k')  ptr->pos+=4; else if (1){it=failobj;goto revert43;}it=rb_funcall(self,sy_AmethystParser_Seq_AST_lb__1817,1,bind2); __result=it;;

;goto accept66;revert43:;  goto alt13_2; accept66:;

;ptr->branches-=4; goto accept65;
alt13_2: ptr->pos=oldpos23;ptr->branches-=1;   it=AmethystParser_cases(self ); if (it==failobj){it=failobj;goto revert44;} __result=it;;

;goto accept67;revert44:;  goto alt13_3; accept67:;

;ptr->branches-=3; goto accept65;
alt13_3: ptr->pos=oldpos23;ptr->branches-=1;   it=AmethystParser_call(self ); if (it==failobj){it=failobj;goto revert45;} __result=it;;

;goto accept68;revert45:;  goto alt13_4; accept68:;

;ptr->branches-=2; goto accept65;
alt13_4: ptr->pos=oldpos23;ptr->branches-=1; int oldpos24=ptr->pos;
  switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '-':;case '/' ... '9':;case ';' ... UC(255):; if (1){it=failobj;goto revert47;} break;
case '.' ... '.':;case ':' ... ':':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; break;
}
;goto accept71;revert47:;  goto reject11; accept71:;
 it=Qnil; goto accept70;  reject11: it=failobj; accept70: ptr->pos=oldpos24; if (it==failobj){it=failobj;goto revert46;}it=Qnil;it=rb_funcall(self,sy_AmethystParser_Apply_lb__dq_a_1437,1,bind2); __result=it;;

;goto accept69;revert46:;  goto alt13_5; accept69:;

;ptr->branches-=1; goto accept65;
alt13_5: ptr->pos=oldpos23;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept65:;
 break;
}
fail: return it;
}
void Init_AmethystParser_c(){ 
 cls_AmethystParser=rb_define_class("AmethystParser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    c_Append_AST=rb_const_get(rb_cObject, rb_intern("Append_AST"));rb_global_variable(&c_Append_AST);
c_Concat_AST=rb_const_get(rb_cObject, rb_intern("Concat_AST"));rb_global_variable(&c_Concat_AST);
rb_define_method(cls_AmethystParser,"profile_report",profile_report_AmethystParser,0);
s_Amethyst_fe41=rb_str_new2("Amethyst");rb_global_variable(&s_Amethyst_fe41);
s__at__518e=rb_str_new2("@");rb_global_variable(&s__at__518e);
s__bs__bs__7f81=rb_str_new2("\\");rb_global_variable(&s__bs__bs__7f81);
s__bs__sh__le__a90f=rb_str_new2("#{");rb_global_variable(&s__bs__sh__le__a90f);
s__co__853a=rb_str_new2(":");rb_global_variable(&s__co__853a);
s__co__at__4bf0=rb_str_new2(":@");rb_global_variable(&s__co__at__4bf0);
s__d41d=rb_str_new2("");rb_global_variable(&s__d41d);
s__dot__dot__58b9=rb_str_new2("..");rb_global_variable(&s__dot__dot__58b9);
s__dot__dot__dot__2f43=rb_str_new2("...");rb_global_variable(&s__dot__dot__dot__2f43);
s__eq__43ec=rb_str_new2("=");rb_global_variable(&s__eq__43ec);
s__gt__cedf=rb_str_new2(">");rb_global_variable(&s__gt__cedf);
s__lb__8154=rb_str_new2("[");rb_global_variable(&s__lb__8154);
s__le__f95b=rb_str_new2("{");rb_global_variable(&s__le__f95b);
s__lp__84c4=rb_str_new2("(");rb_global_variable(&s__lp__84c4);
s__lt__524a=rb_str_new2("<");rb_global_variable(&s__lt__524a);
s__rb__0fbd=rb_str_new2("]");rb_global_variable(&s__rb__0fbd);
s__re__cbb1=rb_str_new2("}");rb_global_variable(&s__re__cbb1);
s__rp__9371=rb_str_new2(")");rb_global_variable(&s__rp__9371);
s__ti__3389=rb_str_new2("*");rb_global_variable(&s__ti__3389);
switchhash_AmethystParser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_AmethystParser_1);;
switchhash_AmethystParser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Args\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_AmethystParser_2);;
sy_AmethystParser_Act_lb_Args_23b1=rb_intern("AmethystParser_Act_lb_Args_23b1");
sy_AmethystParser_Act_lb_bind_7d0b=rb_intern("AmethystParser_Act_lb_bind_7d0b");
sy_AmethystParser_Apply_lb__dq_a_1437=rb_intern("AmethystParser_Apply_lb__dq_a_1437");
sy_AmethystParser_Apply_lb__dq_c_a8b6=rb_intern("AmethystParser_Apply_lb__dq_c_a8b6");
sy_AmethystParser_Apply_lb__dq_m_2ec1=rb_intern("AmethystParser_Apply_lb__dq_m_2ec1");
sy_AmethystParser_Apply_lb__dq_s_9322=rb_intern("AmethystParser_Apply_lb__dq_s_9322");
sy_AmethystParser_Apply_lb__dq_t_e958=rb_intern("AmethystParser_Apply_lb__dq_t_e958");
sy_AmethystParser_Apply_lb_bi_9146=rb_intern("AmethystParser_Apply_lb_bi_9146");
sy_AmethystParser_Args_lb__le__co_a_9abe=rb_intern("AmethystParser_Args_lb__le__co_a_9abe");
sy_AmethystParser_Bind_lb_loc_37df=rb_intern("AmethystParser_Bind_lb_loc_37df");
sy_AmethystParser_Bind_lb_loc_5836=rb_intern("AmethystParser_Bind_lb_loc_5836");
sy_AmethystParser_Comment_lb__ed6f=rb_intern("AmethystParser_Comment_lb__ed6f");
sy_AmethystParser_Contextu_32ad=rb_intern("AmethystParser_Contextu_32ad");
sy_AmethystParser_Contextu_4e8d=rb_intern("AmethystParser_Contextu_4e8d");
sy_AmethystParser_Enter_AS_06e8=rb_intern("AmethystParser_Enter_AS_06e8");
sy_AmethystParser_Enter_AS_3242=rb_intern("AmethystParser_Enter_AS_3242");
sy_AmethystParser_Global_lb_b_0216=rb_intern("AmethystParser_Global_lb_b_0216");
sy_AmethystParser_Grammar_dot__a510=rb_intern("AmethystParser_Grammar_dot__a510");
sy_AmethystParser_Key_lb_bind_5e9f=rb_intern("AmethystParser_Key_lb_bind_5e9f");
sy_AmethystParser_Lambda_lb_B_2c90=rb_intern("AmethystParser_Lambda_lb_B_2c90");
sy_AmethystParser_Lookahea_0946=rb_intern("AmethystParser_Lookahea_0946");
sy_AmethystParser_Many_lb_bin_14d1=rb_intern("AmethystParser_Many_lb_bin_14d1");
sy_AmethystParser_Or_AST_dot_c_19e2=rb_intern("AmethystParser_Or_AST_dot_c_19e2");
sy_AmethystParser_Or_AST_lb_b_0657=rb_intern("AmethystParser_Or_AST_lb_b_0657");
sy_AmethystParser_Or_AST_lb_b_3220=rb_intern("AmethystParser_Or_AST_lb_b_3220");
sy_AmethystParser_Or_lb_Apply_cdcd=rb_intern("AmethystParser_Or_lb_Apply_cdcd");
sy_AmethystParser_Parenthe_261b=rb_intern("AmethystParser_Parenthe_261b");
sy_AmethystParser_Pass_AST_6bd0=rb_intern("AmethystParser_Pass_AST_6bd0");
sy_AmethystParser_Pred_lb_bin_ae38=rb_intern("AmethystParser_Pred_lb_bin_ae38");
sy_AmethystParser_Result_lb__le__a3b4=rb_intern("AmethystParser_Result_lb__le__a3b4");
sy_AmethystParser_Rule_dot_cre_113e=rb_intern("AmethystParser_Rule_dot_cre_113e");
sy_AmethystParser_Seq_AST_dot__a126=rb_intern("AmethystParser_Seq_AST_dot__a126");
sy_AmethystParser_Seq_AST_lb__1817=rb_intern("AmethystParser_Seq_AST_lb__1817");
sy_AmethystParser_Seq_AST_lb__66a7=rb_intern("AmethystParser_Seq_AST_lb__66a7");
sy_AmethystParser_Strin_lb__lb__dq__b20e=rb_intern("AmethystParser_Strin_lb__lb__dq__b20e");
sy_AmethystParser_Strin_lb__lb__qu__88c8=rb_intern("AmethystParser_Strin_lb__lb__qu__88c8");
sy_AmethystParser__at_appends_6209=rb_intern("AmethystParser__at_appends_6209");
sy_AmethystParser__at_ary_eq__lb__rb_=rb_intern("AmethystParser__at_ary_eq__lb__rb_");
sy_AmethystParser__at_ary_ff69=rb_intern("AmethystParser__at_ary_ff69");
sy_AmethystParser__at_ary_lt__lt_Ar_59e3=rb_intern("AmethystParser__at_ary_lt__lt_Ar_59e3");
sy_AmethystParser__at_bnding_7d3c=rb_intern("AmethystParser__at_bnding_7d3c");
sy_AmethystParser__at_locals_dot__bdc6=rb_intern("AmethystParser__at_locals_dot__bdc6");
sy_AmethystParser__at_locals_eq__4fc1=rb_intern("AmethystParser__at_locals_eq__4fc1");
sy_AmethystParser__at_tmp_lt__lt_bi_b81c=rb_intern("AmethystParser__at_tmp_lt__lt_bi_b81c");
sy_AmethystParser__dq__le__dq__pl_bind_567e=rb_intern("AmethystParser__dq__le__dq__pl_bind_567e");
sy_AmethystParser__dq_amethys_673b=rb_intern("AmethystParser__dq_amethys_673b");
sy_AmethystParser__lb__dq__lp__dq_=rb_intern("AmethystParser__lb__dq__lp__dq_");
sy_AmethystParser__lb_bind_lb_1_rb__6281=rb_intern("AmethystParser__lb_bind_lb_1_rb__6281");
sy_AmethystParser__lb_bind_lb_1_rb__c1c8=rb_intern("AmethystParser__lb_bind_lb_1_rb__c1c8");
sy_AmethystParser__lb_bind_lb_1_rb__f4d6=rb_intern("AmethystParser__lb_bind_lb_1_rb__f4d6");
sy_AmethystParser__lp_bind_lb_1_rb__a724=rb_intern("AmethystParser__lp_bind_lb_1_rb__a724");
sy_AmethystParser_a_eq_autova_57aa=rb_intern("AmethystParser_a_eq_autova_57aa");
sy_AmethystParser_bind_lb_1_rb_=rb_intern("AmethystParser_bind_lb_1_rb_");
sy_AmethystParser_bind_lb_1_rb__dot__1371=rb_intern("AmethystParser_bind_lb_1_rb__dot__1371");
sy_AmethystParser_bind_lb_1_rb__dot__4673=rb_intern("AmethystParser_bind_lb_1_rb__dot__4673");
sy_AmethystParser_bind_lb_1_rb__dot__4688=rb_intern("AmethystParser_bind_lb_1_rb__dot__4688");
sy_AmethystParser_bind_lb_1_rb__dot__7b93=rb_intern("AmethystParser_bind_lb_1_rb__dot__7b93");
sy_AmethystParser_bind_lb_1_rb__dot__e879=rb_intern("AmethystParser_bind_lb_1_rb__dot__e879");
sy_AmethystParser_bind_lb_1_rb__eq__3c5b=rb_intern("AmethystParser_bind_lb_1_rb__eq__3c5b");
sy_AmethystParser_bind_lb_1_rb__eq__4e2f=rb_intern("AmethystParser_bind_lb_1_rb__eq__4e2f");
sy_AmethystParser_bind_lb_1_rb__eq__9a0b=rb_intern("AmethystParser_bind_lb_1_rb__eq__9a0b");
sy_AmethystParser_bind_lb_1_rb__eq__a882=rb_intern("AmethystParser_bind_lb_1_rb__eq__a882");
sy_AmethystParser_bind_lb_1_rb__eq__c77b=rb_intern("AmethystParser_bind_lb_1_rb__eq__c77b");
sy_AmethystParser_bind_lb_1_rb__lt__798b=rb_intern("AmethystParser_bind_lb_1_rb__lt__798b");
sy_AmethystParser_bind_lb_1_rb__pl__b087=rb_intern("AmethystParser_bind_lb_1_rb__pl__b087");
sy_AmethystParser_bind_lb_1_rb__sp__5934=rb_intern("AmethystParser_bind_lb_1_rb__sp__5934");
sy_AmethystParser_local_lp_bi_196b=rb_intern("AmethystParser_local_lp_bi_196b");
sy_AmethystParser_pos_5e0b=rb_intern("AmethystParser_pos_5e0b");
                    rb_define_method(cls_AmethystParser,"_args",AmethystParser__args,2);
rb_define_method(cls_AmethystParser,"args",AmethystParser_args,2);
rb_define_method(cls_AmethystParser,"argsOpt",AmethystParser_argsOpt,0);
rb_define_method(cls_AmethystParser,"call",AmethystParser_call,0);
rb_define_method(cls_AmethystParser,"cases",AmethystParser_cases,0);
rb_define_method(cls_AmethystParser,"className",AmethystParser_className,0);
rb_define_method(cls_AmethystParser,"collect",AmethystParser_collect,1);
rb_define_method(cls_AmethystParser,"expression",AmethystParser_expression,0);
rb_define_method(cls_AmethystParser,"file",AmethystParser_file,0);
rb_define_method(cls_AmethystParser,"grammar",AmethystParser_grammar,0);
rb_define_method(cls_AmethystParser,"host_expr",AmethystParser_host_expr,0);
rb_define_method(cls_AmethystParser,"inline_host_expr",AmethystParser_inline_host_expr,0);
rb_define_method(cls_AmethystParser,"interpolated",AmethystParser_interpolated,1);
rb_define_method(cls_AmethystParser,"key",AmethystParser_key,0);
rb_define_method(cls_AmethystParser,"lambda",AmethystParser_lambda,0);
rb_define_method(cls_AmethystParser,"lookaheads",AmethystParser_lookaheads,0);
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
rb_define_method(cls_AmethystParser,"string_like",AmethystParser_string_like,2);
rb_define_method(cls_AmethystParser,"term",AmethystParser_term,0);
                    }
