#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_combine_or(VALUE self ,VALUE,VALUE,VALUE);
VALUE Detect_First_combine_seq(VALUE self ,VALUE,VALUE);
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Char_itrans(VALUE self );
VALUE Detect_Switch_Char_root(VALUE self );
VALUE Detect_Switch_Char_traverse(VALUE self );
VALUE Detect_Switch_Char_traverse_item(VALUE self );
VALUE Detect_Switch_Char_visit(VALUE self );
VALUE switchhash_Detect_Switch_Char_10;
VALUE switchhash_Detect_Switch_Char_11;
VALUE switchhash_Detect_Switch_Char_1;
VALUE switchhash_Detect_Switch_Char_2;
VALUE switchhash_Detect_Switch_Char_3;
VALUE switchhash_Detect_Switch_Char_4;
VALUE switchhash_Detect_Switch_Char_5;
VALUE switchhash_Detect_Switch_Char_6;
VALUE switchhash_Detect_Switch_Char_7;
VALUE switchhash_Detect_Switch_Char_8;
VALUE switchhash_Detect_Switch_Char_9;
static VALUE c_Lattice_Char;
static VALUE c_Switch_Char;
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Char__at__contex_5f56;
static VALUE sy_Detect_Switch_Char__at__contex_cdb3;
static VALUE sy_Detect_Switch_Char__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Char__lb__lb_Lattic_d322;
static VALUE sy_Detect_Switch_Char__lp_2;
static VALUE sy_Detect_Switch_Char__lp_;
static VALUE sy_Detect_Switch_Char__lp_src_dot_cla_2024;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__642a;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lb__75a5;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lb__fa06;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0;
static VALUE sy_Detect_Switch_Char_first_lp_sr_3298;
static VALUE sy_Detect_Switch_Char_if_sp_bind_lb__1bed;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_78a6;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_7c35;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_df23;
static VALUE sy_Detect_Switch_Char_src_25d9;
static VALUE sy_Detect_Switch_Char_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_a719;

 memo_struct *mem_Detect_Switch_Char=NULL;VALUE memo_val_Detect_Switch_Char;VALUE profile_report_Detect_Switch_Char(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); if(ptr->mem){fprintf(profile_report,"memo Detect_Switch_Char::traverse  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[119],((memo_struct *)ptr->mem)->miss[119],((memo_struct *)ptr->mem)->ticks[119]);((memo_struct *)ptr->mem)->hits[119]=0;((memo_struct *)ptr->mem)->miss[119]=0;((memo_struct *)ptr->mem)->ticks[119]=0;} return Qnil;}VALUE Detect_Switch_Char_itrans(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_rules=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,__result=Qnil,_autovar_13=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_2);it=rb_funcall(self,sy_Detect_Switch_Char__at__contex_5f56,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_2=bind_aget(bind2,2);;it=rb_ary_new3(0); _autovar_3=it;;
int stop1=0; while(!stop1){ switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_4=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_4);
                   bind_aset(bind2,1,_autovar_2);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__fa06,1,bind2);_autovar_2=bind_aget(bind2,1);;it=rb_funcall(self,sy_Detect_Switch_Char__do_rules_eq__le__ab16,1,bind2);it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_5acf,1,bind2); _autovar_5=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_5;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_6=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                   it=rb_ary_new3(0); _autovar_7=it;;
int stop2=0; while(!stop2){ switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_8=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                     it=Detect_Switch_Char_root(self ); if (it==failobj){it=failobj;goto pass4;} _autovar_9=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto revert3;}
                   success4: *ptr=oldpass4;
                it=_autovar_9; _autovar_10=it;;
it=AmethystCore_append(self,_autovar_7,_autovar_10);
;goto accept6;revert3:;  goto alt3_2; accept6:;

;ptr->branches-=2; goto accept5;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; stop2=1;
;goto accept7;revert4:;  goto alt3_3; accept7:;

;ptr->branches-=1; goto accept5;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto pass3;};
 accept5:;
 break;
case 1/*Object*/:; stop2=1; break;
} } it=_autovar_7; _rules=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto pass2;}
                   success3: *ptr=oldpass3;
                
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,_rules);it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_a719,1,bind2);_rules=bind_aget(bind2,1);;it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2); _autovar_11=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto revert2;}
                   success1: *ptr=oldpass1;
                it=_autovar_11; _autovar_12=it;;

;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert5;} _autovar_12=it;;

;goto accept8;revert5:;  goto alt2_3; accept8:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;
it=AmethystCore_append(self,_autovar_3,_autovar_12);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept9;revert6:;  goto alt1_3; accept9:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case 1/*Object*/:; int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert7;} _autovar_12=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_12);
;goto accept11;revert7:;  goto alt4_2; accept11:;

;ptr->branches-=2; goto accept10;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; stop1=1;
;goto accept12;revert8:;  goto alt4_3; accept12:;

;ptr->branches-=1; goto accept10;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept10:;
 break;
} } it=_autovar_3; __result=it;;
 _autovar_13=it;;
bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_13);it=rb_funcall(self,sy_Detect_Switch_Char__at__contex_cdb3,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_13=bind_aget(bind2,2);;
fail: return it;
}
VALUE Detect_Switch_Char_root(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil;VALUE bind2=bind_new2(0);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  it=Detect_Switch_Char_traverse(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;

fail: return it;
}
VALUE Detect_Switch_Char_traverse(VALUE self ){VALUE vals[0]; VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);if (ptr->mem==NULL){ptr->mem=mem_Detect_Switch_Char;}time_struct time_old=memo_get(ptr->mem,119,ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;ptr->pos=ptr->len;it=rb_ary_new3(0); _nvars=it;;
it=rb_funcall(self,sy_Detect_Switch_Char__lp_src_dot_cla_2024,1,bind2); _ivars=it;;
it=_ivars; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_traverse_item(self ); if (it==failobj){it=failobj;goto revert1;} _it=it;;
bind_aset(bind2,1,_nvars);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0,1,bind2);_nvars=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass2;};
 accept1:;
 } 
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto memo_fail;}
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,_ivars);bind_aset(bind2,2,_nvars);it=rb_funcall(self,sy_Detect_Switch_Char_if_sp_bind_lb__1bed,1,bind2);_ivars=bind_aget(bind2,1);;_nvars=bind_aget(bind2,2);; __result=it;;
memo_fail:if(!ptr->branches)ptr->discard=ptr->pos;time_old.discard=ptr->discard; memo_add(ptr->mem,119,ptr->src,oldpos,it,ptr->pos,time_old); return it;

fail: return it;
}
VALUE Detect_Switch_Char_traverse_item(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Or*/:case 2/*Seq*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=Detect_Switch_Char_visit(self ); if (it==failobj){it=failobj;goto revert1;} __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=3; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Detect_Switch_Char_traverse(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto revert2;}
                   success1: *ptr=oldpass1;
                it=_autovar_2; __result=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=2; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert3;} __result=it;;

;goto accept4;revert3:;  goto alt1_4; accept4:;

;ptr->branches-=1; goto accept1;
alt1_4: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case 3/*Object*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Detect_Switch_Char_traverse(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_2=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto revert4;}
                   success2: *ptr=oldpass2;
                it=_autovar_2; __result=it;;

;goto accept6;revert4:;  goto alt2_2; accept6:;

;ptr->branches-=2; goto accept5;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert5;} __result=it;;

;goto accept7;revert5:;  goto alt2_3; accept7:;

;ptr->branches-=1; goto accept5;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept5:;
 break;
} break;
case 1/*Array*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Or*/:case 2/*Seq*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_visit(self ); if (it==failobj){it=failobj;goto revert6;} __result=it;;

;goto accept9;revert6:;  goto alt3_2; accept9:;

;ptr->branches-=2; goto accept8;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop1=0; while(!stop1){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_traverse_item(self ); if (it==failobj){it=failobj;goto revert8;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
;goto accept12;revert8:;  goto alt4_2; accept12:;

;ptr->branches-=2; goto accept11;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; stop1=1;
;goto accept13;revert9:;  goto alt4_3; accept13:;

;ptr->branches-=1; goto accept11;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto pass3;};
 accept11:;
 } it=_ar; _autovar_4=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert7;}
                   success3: *ptr=oldpass3;
                it=_autovar_4; __result=it;;

;goto accept10;revert7:;  goto alt3_3; accept10:;

;ptr->branches-=1; goto accept8;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept8:;
 break;
case 3/*Object*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop2=0; while(!stop2){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_traverse_item(self ); if (it==failobj){it=failobj;goto revert10;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
;goto accept15;revert10:;  goto alt5_2; accept15:;

;ptr->branches-=2; goto accept14;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; stop2=1;
;goto accept16;revert11:;  goto alt5_3; accept16:;

;ptr->branches-=1; goto accept14;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto pass4;};
 accept14:;
 } it=_ar; _autovar_4=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto fail;}
                   success4: *ptr=oldpass4;
                it=_autovar_4; __result=it;;
 break;
} break;
case 2/*Object*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Or*/:case 2/*Seq*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_visit(self ); if (it==failobj){it=failobj;goto revert12;} __result=it;;

;goto accept18;revert12:;  goto alt6_2; accept18:;

;ptr->branches-=2; goto accept17;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert13;} __result=it;;

;goto accept19;revert13:;  goto alt6_3; accept19:;

;ptr->branches-=1; goto accept17;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept17:;
 break;
case 3/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;
 break;
} break;
}
fail: return it;
}
VALUE Detect_Switch_Char_visit(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_firs=Qnil,_autovar_7=Qnil,__result=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_str=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_autovar_19=Qnil,_items=Qnil,_aswitch=Qnil,_autovar_20=Qnil,_autovar_21=Qnil,_autovar_22=Qnil,_list=Qnil,_autovar_23=Qnil,_ary=Qnil,_newlist=Qnil,_lat=Qnil,__result_2=Qnil,_n=Qnil,_cls=Qnil,_autovar_24=Qnil,_autovar_25=Qnil,_autovar_26=Qnil,_autovar_27=Qnil,_autovar_28=Qnil,_autovar_29=Qnil,_autovar_30=Qnil,_prefix=Qnil,_s=Qnil,__result_3=Qnil,_autovar_31=Qnil,_ary_2=Qnil,_autovar_32=Qnil,_autovar_33=Qnil,_rest=Qnil,_cls_2=Qnil,_autovar_34=Qnil,_autovar_35=Qnil,_autovar_36=Qnil,_autovar_37=Qnil,_autovar_38=Qnil;VALUE bind2=bind_new2(4);  VALUE arg0;VALUE arg1;VALUE arg2; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
it=_autovar; _autovar_2=it;;
it=_autovar_2; _autovar_3=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=4; it=_autovar_3; _autovar_4=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_4);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_5=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; if (1){it=failobj;goto pass2;} break;
case 'r' ... 'r':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='e'&&ame_curstr2(ptr)[1]=='g'&&ame_curstr2(ptr)[2]=='c'&&ame_curstr2(ptr)[3]=='h')  ptr->pos+=4; else if (1){it=failobj;goto pass2;} break;
}
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass1;} break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                   ptr->pos=ptr->len;
                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto pass1;}
                   success3: *ptr=oldpass3;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_7=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto revert1;}
                   success1: *ptr=oldpass1;
                it=_autovar_7; __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=4; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=_autovar_3; _autovar_8=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass4;} _autovar_9=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_9);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; if (1){it=failobj;goto pass5;} break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3; else if (1){it=failobj;goto pass5;} break;
}
                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto pass4;}
                   success5: *ptr=oldpass5;
                switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_10=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass4;} break;
}cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_10);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass6;} _str=it;;

                   goto success6;
                   pass6: *ptr=oldpass6;if (1){it=failobj;goto pass4;}
                   success6: *ptr=oldpass6;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_11=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto revert2;}
                   success4: *ptr=oldpass4;
                it=_autovar_11; __result=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=3; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1; it=_autovar_3; _autovar_12=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_12);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass7;} _autovar_13=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_13);
                     it=Amethyst_spaces(self );switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; if (1){it=failobj;goto pass8;} break;
case 'f' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4; else if (1){it=failobj;goto pass8;} break;
}
                   goto success8;
                   pass8: *ptr=oldpass8;if (1){it=failobj;goto pass7;}
                   success8: *ptr=oldpass8;
                it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind2); _autovar_14=it;;

                   goto success7;
                   pass7: *ptr=oldpass7;if (1){it=failobj;goto revert3;}
                   success7: *ptr=oldpass7;
                it=_autovar_14; __result=it;;

;goto accept4;revert3:;  goto alt1_4; accept4:;

;ptr->branches-=2; goto accept1;
alt1_4: ptr->pos=oldpos1;ptr->branches-=1; it=_autovar_3; _autovar_15=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_15);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass9;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_16=it;;

                   goto success9;
                   pass9: *ptr=oldpass9;if (1){it=failobj;goto revert4;}
                   success9: *ptr=oldpass9;
                it=_autovar_16; __result=it;;

;goto accept5;revert4:;  goto alt1_5; accept5:;

;ptr->branches-=1; goto accept1;
alt1_5: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case 1/*Or*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_17=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_17);
                   it=rb_ary_new3(0); _autovar_18=it;;
int stop1=0; while(!stop1){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_traverse_item(self ); if (it==failobj){it=failobj;goto revert5;} _autovar_19=it;;
it=AmethystCore_append(self,_autovar_18,_autovar_19);
;goto accept7;revert5:;  goto alt2_2; accept7:;

;ptr->branches-=2; goto accept6;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; stop1=1;
;goto accept8;revert6:;  goto alt2_3; accept8:;

;ptr->branches-=1; goto accept6;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto pass10;};
 accept6:;
 } it=_autovar_18; _items=it;;
it=Qfalse; _aswitch=it;;
bind_aset(bind2,1,_items);bind_aset(bind2,2,_aswitch);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04,1,bind2);_items=bind_aget(bind2,1);;_aswitch=bind_aget(bind2,2);;int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; bind_aset(bind2,1,_aswitch);it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind2);_aswitch=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto revert7;};bind_aset(bind2,1,_items);it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_d486,1,bind2);_items=bind_aget(bind2,1);; _autovar_20=it;;

;goto accept10;revert7:;  goto alt3_2; accept10:;

;ptr->branches-=2; goto accept9;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=_items; _autovar_21=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_21;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass11;} _autovar_22=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_22);
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2); _list=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_23=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_23);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); _ary=it;;

                   goto success13;
                   pass13: *ptr=oldpass13;if (1){it=failobj;goto revert9;}
                   success13: *ptr=oldpass13;
                it=rb_ary_new3(0); _newlist=it;;
it=c_Lattice_Char; _lat=it;;
bind_aset(bind2,1,_list);bind_aset(bind2,2,_ary);bind_aset(bind2,3,_newlist);bind_aset(bind2,4,_lat);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__642a,1,bind2);_list=bind_aget(bind2,1);;_ary=bind_aget(bind2,2);;_newlist=bind_aget(bind2,3);;_lat=bind_aget(bind2,4);; it=c_Switch_Char; arg0=it;it=_lat; arg1=it;it=_newlist; arg2=it; it=Detect_First_combine_or(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert9;} __result_2=it;;

;goto accept13;revert9:;  goto alt4_2; accept13:;

;ptr->branches-=3; goto accept12;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert10;} _n=it;;
bind_aset(bind2,1,_list);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);_list=bind_aget(bind2,1);;_n=bind_aget(bind2,2);; _newlist=it;;
 it=c_Switch_Char; arg0=it;it=c_Lattice_Char; arg1=it;it=_newlist; arg2=it; it=Detect_First_combine_or(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert10;} __result_2=it;;

;goto accept14;revert10:;  goto alt4_3; accept14:;

;ptr->branches-=2; goto accept12;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1; it=Qnil;if (ptr->pos<ptr->len){it=failobj;goto revert11;}it=c_Switch_Char; _cls=it;;
bind_aset(bind2,1,_cls);bind_aset(bind2,2,_list);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18,1,bind2);_cls=bind_aget(bind2,1);;_list=bind_aget(bind2,2);; __result_2=it;;

;goto accept15;revert11:;  goto alt4_4; accept15:;

;ptr->branches-=1; goto accept12;
alt4_4: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto pass12;};
 accept12:;
it=__result_2; _autovar_24=it;;
 break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2); _list=it;;
int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert12;} _n=it;;
bind_aset(bind2,1,_list);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);_list=bind_aget(bind2,1);;_n=bind_aget(bind2,2);; _newlist=it;;
 it=c_Switch_Char; arg0=it;it=c_Lattice_Char; arg1=it;it=_newlist; arg2=it; it=Detect_First_combine_or(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert12;} __result_2=it;;

;goto accept17;revert12:;  goto alt5_2; accept17:;

;ptr->branches-=2; goto accept16;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; it=Qnil;if (ptr->pos<ptr->len){it=failobj;goto revert13;}it=c_Switch_Char; _cls=it;;
bind_aset(bind2,1,_cls);bind_aset(bind2,2,_list);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18,1,bind2);_cls=bind_aget(bind2,1);;_list=bind_aget(bind2,2);; __result_2=it;;

;goto accept18;revert13:;  goto alt5_3; accept18:;

;ptr->branches-=1; goto accept16;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto pass12;};
 accept16:;
it=__result_2; _autovar_24=it;;
 break;
}
                   goto success12;
                   pass12: *ptr=oldpass12;if (1){it=failobj;goto pass11;}
                   success12: *ptr=oldpass12;
                it=_autovar_24; _autovar_25=it;;

                   goto success11;
                   pass11: *ptr=oldpass11;if (1){it=failobj;goto revert8;}
                   success11: *ptr=oldpass11;
                it=_autovar_25; _autovar_20=it;;

;goto accept11;revert8:;  goto alt3_3; accept11:;

;ptr->branches-=1; goto accept9;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto pass10;};
 accept9:;

                   goto success10;
                   pass10: *ptr=oldpass10;if (1){it=failobj;goto fail;}
                   success10: *ptr=oldpass10;
                it=_autovar_20; __result=it;;
 break;
case 2/*Seq*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_26=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_26);
                   it=rb_ary_new3(0); _autovar_27=it;;
int stop2=0; while(!stop2){ int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_traverse_item(self ); if (it==failobj){it=failobj;goto revert14;} _autovar_28=it;;
it=AmethystCore_append(self,_autovar_27,_autovar_28);
;goto accept20;revert14:;  goto alt6_2; accept20:;

;ptr->branches-=2; goto accept19;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; stop2=1;
;goto accept21;revert15:;  goto alt6_3; accept21:;

;ptr->branches-=1; goto accept19;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto pass14;};
 accept19:;
 } it=_autovar_27; _autovar_29=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_29;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass15;} _autovar_30=it;;
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_30);
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_ary_new3(0); _prefix=it;;
int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_First_must_empty(self ); if (it==failobj){it=failobj;goto revert16;} _s=it;;
 it=c_Switch_Char; arg0=it;bind_aset(bind2,1,_prefix);bind_aset(bind2,2,_s);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);_prefix=bind_aget(bind2,1);;_s=bind_aget(bind2,2);; arg1=it; it=Detect_First_combine_seq(self ,arg0,arg1); __result_3=it;;

;goto accept23;revert16:;  goto alt7_2; accept23:;

;ptr->branches-=2; goto accept22;
alt7_2: ptr->pos=oldpos7;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_31=it;;
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_31);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); _ary_2=it;;

                   goto success17;
                   pass17: *ptr=oldpass17;if (1){it=failobj;goto revert17;}
                   success17: *ptr=oldpass17;
                it=rb_ary_new3(0); _autovar_32=it;;
int stop3=0; while(!stop3){ int oldpos8=ptr->pos;int cut8=0;
alt8_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert18;} _autovar_33=it;;
it=AmethystCore_append(self,_autovar_32,_autovar_33);
;goto accept26;revert18:;  goto alt8_2; accept26:;

;ptr->branches-=2; goto accept25;
alt8_2: ptr->pos=oldpos8;ptr->branches-=1; stop3=1;
;goto accept27;revert19:;  goto alt8_3; accept27:;

;ptr->branches-=1; goto accept25;
alt8_3: ptr->pos=oldpos8;ptr->branches-=1;if (1){it=failobj;goto revert17;};
 accept25:;
 } it=_autovar_32; _rest=it;;
it=c_Switch_Char; _cls_2=it;;
bind_aset(bind2,1,_cls_2);bind_aset(bind2,2,_ary_2);bind_aset(bind2,3,_prefix);bind_aset(bind2,4,_rest);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__75a5,1,bind2);_cls_2=bind_aget(bind2,1);;_ary_2=bind_aget(bind2,2);;_prefix=bind_aget(bind2,3);;_rest=bind_aget(bind2,4);; __result_3=it;;

;goto accept24;revert17:;  goto alt7_3; accept24:;

;ptr->branches-=1; goto accept22;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto pass16;};
 accept22:;
it=__result_3; _autovar_34=it;;
 break;
case 1/*Object*/:; it=rb_ary_new3(0); _prefix=it;;
int oldpos9=ptr->pos;int cut9=0;
alt9_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_First_must_empty(self ); if (it==failobj){it=failobj;goto revert20;} _s=it;;
 it=c_Switch_Char; arg0=it;bind_aset(bind2,1,_prefix);bind_aset(bind2,2,_s);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);_prefix=bind_aget(bind2,1);;_s=bind_aget(bind2,2);; arg1=it; it=Detect_First_combine_seq(self ,arg0,arg1); __result_3=it;;

;goto accept29;revert20:;  goto alt9_2; accept29:;

;ptr->branches-=2; goto accept28;
alt9_2: ptr->pos=oldpos9;ptr->branches-=1; it=rb_ary_new3(0); _autovar_35=it;;
int stop4=0; while(!stop4){ int oldpos10=ptr->pos;int cut10=0;
alt10_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert22;} _autovar_36=it;;
it=AmethystCore_append(self,_autovar_35,_autovar_36);
;goto accept32;revert22:;  goto alt10_2; accept32:;

;ptr->branches-=2; goto accept31;
alt10_2: ptr->pos=oldpos10;ptr->branches-=1; stop4=1;
;goto accept33;revert23:;  goto alt10_3; accept33:;

;ptr->branches-=1; goto accept31;
alt10_3: ptr->pos=oldpos10;ptr->branches-=1;if (1){it=failobj;goto revert21;};
 accept31:;
 } it=_autovar_35; _ary_2=it;;
bind_aset(bind2,1,_prefix);bind_aset(bind2,2,_ary_2);it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);_prefix=bind_aget(bind2,1);;_ary_2=bind_aget(bind2,2);; __result_3=it;;

;goto accept30;revert21:;  goto alt9_3; accept30:;

;ptr->branches-=1; goto accept28;
alt9_3: ptr->pos=oldpos9;ptr->branches-=1;if (1){it=failobj;goto pass16;};
 accept28:;
it=__result_3; _autovar_34=it;;
 break;
}
                   goto success16;
                   pass16: *ptr=oldpass16;if (1){it=failobj;goto pass15;}
                   success16: *ptr=oldpass16;
                it=_autovar_34; _autovar_37=it;;

                   goto success15;
                   pass15: *ptr=oldpass15;if (1){it=failobj;goto pass14;}
                   success15: *ptr=oldpass15;
                it=_autovar_37; _autovar_38=it;;

                   goto success14;
                   pass14: *ptr=oldpass14;if (1){it=failobj;goto fail;}
                   success14: *ptr=oldpass14;
                it=_autovar_38; __result=it;;
 break;
case 3/*Object*/:; if (1){it=failobj;goto fail;} break;
}
fail: return it;
}
void Init_Detect_Switch_Char_c(){ 
 cls_Detect_Switch_Char=rb_define_class("Detect_Switch_Char",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
                    failobj=rb_eval_string("FAIL");
                    c_Lattice_Char=rb_const_get(rb_cObject, rb_intern("Lattice_Char"));rb_global_variable(&c_Lattice_Char);
c_Switch_Char=rb_const_get(rb_cObject, rb_intern("Switch_Char"));rb_global_variable(&c_Switch_Char);
mem_Detect_Switch_Char=memo_init();memo_val_Detect_Switch_Char=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Detect_Switch_Char);rb_global_variable(&memo_val_Detect_Switch_Char);
rb_define_method(cls_Detect_Switch_Char,"profile_report",profile_report_Detect_Switch_Char,0);
switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_10);;
switchhash_Detect_Switch_Char_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_11);;
switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_1);;
switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_2);;
switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_3);;
switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_4);;
switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_5);;
switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_6);;
switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_7);;
switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_8);;
switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_9);;
sy_Detect_Switch_Char_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_d486");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_a321");
sy_Detect_Switch_Char__at__contex_5f56=rb_intern("Detect_Switch_Char__at__contex_5f56");
sy_Detect_Switch_Char__at__contex_cdb3=rb_intern("Detect_Switch_Char__at__contex_cdb3");
sy_Detect_Switch_Char__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Char__do_rules_eq__le__ab16");
sy_Detect_Switch_Char__lb__lb_Lattic_d322=rb_intern("Detect_Switch_Char__lb__lb_Lattic_d322");
sy_Detect_Switch_Char__lp_2=rb_intern("Detect_Switch_Char__lp_2");
sy_Detect_Switch_Char__lp_=rb_intern("Detect_Switch_Char__lp_");
sy_Detect_Switch_Char__lp_src_dot_cla_2024=rb_intern("Detect_Switch_Char__lp_src_dot_cla_2024");
sy_Detect_Switch_Char_bind_lb_1_rb__dot__642a=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__642a");
sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__a482");
sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04=rb_intern("Detect_Switch_Char_bind_lb_1_rb__dot__bb04");
sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lb__0f18");
sy_Detect_Switch_Char_bind_lb_1_rb__lb__75a5=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lb__75a5");
sy_Detect_Switch_Char_bind_lb_1_rb__lb__fa06=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lb__fa06");
sy_Detect_Switch_Char_bind_lb_1_rb__lt__7b20=rb_intern("Detect_Switch_Char_bind_lb_1_rb__lt__7b20");
sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651=rb_intern("Detect_Switch_Char_bind_lb_1_rb__pl__4651");
sy_Detect_Switch_Char_bind_lb_1_rb__sp__6af0=rb_intern("Detect_Switch_Char_bind_lb_1_rb__sp__6af0");
sy_Detect_Switch_Char_first_lp_sr_3298=rb_intern("Detect_Switch_Char_first_lp_sr_3298");
sy_Detect_Switch_Char_if_sp_bind_lb__1bed=rb_intern("Detect_Switch_Char_if_sp_bind_lb__1bed");
sy_Detect_Switch_Char_s_eq_Switch_78a6=rb_intern("Detect_Switch_Char_s_eq_Switch_78a6");
sy_Detect_Switch_Char_s_eq_Switch_7c35=rb_intern("Detect_Switch_Char_s_eq_Switch_7c35");
sy_Detect_Switch_Char_s_eq_Switch_df23=rb_intern("Detect_Switch_Char_s_eq_Switch_df23");
sy_Detect_Switch_Char_src_25d9=rb_intern("Detect_Switch_Char_src_25d9");
sy_Detect_Switch_Char_src_dot_ary_d5cf=rb_intern("Detect_Switch_Char_src_dot_ary_d5cf");
sy_Detect_Switch_Char_src_dot_rule_5acf=rb_intern("Detect_Switch_Char_src_dot_rule_5acf");
sy_Detect_Switch_Char_src_dot_rule_a719=rb_intern("Detect_Switch_Char_src_dot_rule_a719");
                    rb_define_method(cls_Detect_Switch_Char,"itrans",Detect_Switch_Char_itrans,0);
rb_define_method(cls_Detect_Switch_Char,"root",Detect_Switch_Char_root,0);
rb_define_method(cls_Detect_Switch_Char,"traverse",Detect_Switch_Char_traverse,0);
rb_define_method(cls_Detect_Switch_Char,"traverse_item",Detect_Switch_Char_traverse_item,0);
rb_define_method(cls_Detect_Switch_Char,"visit",Detect_Switch_Char_visit,0);
                    }
