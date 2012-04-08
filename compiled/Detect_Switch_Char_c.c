#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
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
VALUE switchhash_Detect_Switch_Char_12;
VALUE switchhash_Detect_Switch_Char_13;
VALUE switchhash_Detect_Switch_Char_14;
VALUE switchhash_Detect_Switch_Char_15;
VALUE switchhash_Detect_Switch_Char_16;
VALUE switchhash_Detect_Switch_Char_17;
VALUE switchhash_Detect_Switch_Char_18;
VALUE switchhash_Detect_Switch_Char_19;
VALUE switchhash_Detect_Switch_Char_1;
VALUE switchhash_Detect_Switch_Char_20;
VALUE switchhash_Detect_Switch_Char_21;
VALUE switchhash_Detect_Switch_Char_22;
VALUE switchhash_Detect_Switch_Char_23;
VALUE switchhash_Detect_Switch_Char_24;
VALUE switchhash_Detect_Switch_Char_25;
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
static VALUE s__seq_7eae;
static VALUE s_fails_24e7;
static VALUE s_regch_91a9;
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_d486;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321;
static VALUE sy_Detect_Switch_Char__at__contex_5f56;
static VALUE sy_Detect_Switch_Char__at__contex_cdb3;
static VALUE sy_Detect_Switch_Char__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Char__lb__lb_Lattic_d322;
static VALUE sy_Detect_Switch_Char__lp_2;
static VALUE sy_Detect_Switch_Char__lp_;
static VALUE sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400;
static VALUE sy_Detect_Switch_Char__lp_src_dot_cla_2024;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb_;
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
int stop1=0; while(!stop1){ switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_24,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos1=ptr->pos;int cut1=0;
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
int stop2=0; while(!stop2){ switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_25,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; int oldpos3=ptr->pos;int cut3=0;
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
VALUE Detect_Switch_Char_traverse_item(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_20,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_21,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Or*/:case 2/*Seq*/:; int oldpos1=ptr->pos;int cut1=0;
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
case 1/*Array*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_22,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Or*/:case 2/*Seq*/:; int oldpos3=ptr->pos;int cut3=0;
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
case 2/*Object*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_23,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Or*/:case 2/*Seq*/:; int oldpos6=ptr->pos;int cut6=0;
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
VALUE Detect_Switch_Char_visit(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_x=Qnil,_n=Qnil,__result=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_firs=Qnil,_autovar_4=Qnil,__result_2=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_str=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_autovar_19=Qnil,_autovar_20=Qnil,_autovar_21=Qnil,_autovar_22=Qnil,_items=Qnil,_aswitch=Qnil,_autovar_23=Qnil,_autovar_24=Qnil,_autovar_25=Qnil,_list=Qnil,_autovar_26=Qnil,_ary=Qnil,_newlist=Qnil,_lat=Qnil,__result_3=Qnil,_n_2=Qnil,_cls=Qnil,_autovar_27=Qnil,_autovar_28=Qnil,_autovar_29=Qnil,_autovar_30=Qnil,_autovar_31=Qnil,_autovar_32=Qnil,_autovar_33=Qnil,_prefix=Qnil,_s=Qnil,__result_4=Qnil,_autovar_34=Qnil,_ary_2=Qnil,_autovar_35=Qnil,_autovar_36=Qnil,_rest=Qnil,_cls_2=Qnil,_autovar_37=Qnil,_autovar_38=Qnil,_autovar_39=Qnil,_autovar_40=Qnil,_autovar_41=Qnil;VALUE bind2=bind_new2(4);  VALUE arg0;VALUE arg1;VALUE arg2; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=4; it=_autovar; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert1;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass1;} break;
}cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto revert1;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result_2=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=4; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=_autovar; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert2;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass3;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass3;} break;
}cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass4;} _str=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto pass3;}
                   success4: *ptr=oldpass4;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert2;}
                   success3: *ptr=oldpass3;
                it=_autovar_7; __result_2=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=3; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1; it=_autovar; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert3;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

;goto accept4;revert3:;  goto alt1_4; accept4:;

;ptr->branches-=2; goto accept1;
alt1_4: ptr->pos=oldpos1;ptr->branches-=1; it=_autovar; _autovar_8=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass5;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto revert4;}
                   success5: *ptr=oldpass5;
                it=_autovar_9; __result_2=it;;

;goto accept5;revert4:;  goto alt1_5; accept5:;

;ptr->branches-=1; goto accept1;
alt1_5: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
case 1/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_10=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=_autovar_10; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert5;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass6;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass6;} break;
}cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success7;
                   pass7: *ptr=oldpass7;if (1){it=failobj;goto pass6;}
                   success7: *ptr=oldpass7;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success6;
                   pass6: *ptr=oldpass6;if (1){it=failobj;goto revert5;}
                   success6: *ptr=oldpass6;
                it=_autovar_4; __result_2=it;;

;goto accept7;revert5:;  goto alt2_2; accept7:;

;ptr->branches-=3; goto accept6;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; it=_autovar_10; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert6;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass8;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass8;} break;
}cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass9;} _str=it;;

                   goto success9;
                   pass9: *ptr=oldpass9;if (1){it=failobj;goto pass8;}
                   success9: *ptr=oldpass9;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success8;
                   pass8: *ptr=oldpass8;if (1){it=failobj;goto revert6;}
                   success8: *ptr=oldpass8;
                it=_autovar_7; __result_2=it;;

;goto accept8;revert6:;  goto alt2_3; accept8:;

;ptr->branches-=2; goto accept6;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1; it=_autovar_10; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert7;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

;goto accept9;revert7:;  goto alt2_4; accept9:;

;ptr->branches-=1; goto accept6;
alt2_4: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept6:;
 break;
case 2/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_11=it;;
int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=_autovar_11; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert8;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass10;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass10;} break;
}cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success11;
                   pass11: *ptr=oldpass11;if (1){it=failobj;goto pass10;}
                   success11: *ptr=oldpass11;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success10;
                   pass10: *ptr=oldpass10;if (1){it=failobj;goto revert8;}
                   success10: *ptr=oldpass10;
                it=_autovar_4; __result_2=it;;

;goto accept11;revert8:;  goto alt3_2; accept11:;

;ptr->branches-=3; goto accept10;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=_autovar_11; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert9;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass12;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass12;} break;
}cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass13;} _str=it;;

                   goto success13;
                   pass13: *ptr=oldpass13;if (1){it=failobj;goto pass12;}
                   success13: *ptr=oldpass13;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success12;
                   pass12: *ptr=oldpass12;if (1){it=failobj;goto revert9;}
                   success12: *ptr=oldpass12;
                it=_autovar_7; __result_2=it;;

;goto accept12;revert9:;  goto alt3_3; accept12:;

;ptr->branches-=2; goto accept10;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1; it=_autovar_11; _autovar_8=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass14;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success14;
                   pass14: *ptr=oldpass14;if (1){it=failobj;goto revert10;}
                   success14: *ptr=oldpass14;
                it=_autovar_9; __result_2=it;;

;goto accept13;revert10:;  goto alt3_4; accept13:;

;ptr->branches-=1; goto accept10;
alt3_4: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept10:;
 break;
case 3/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_12=it;;
int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_autovar_12; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert11;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass15;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass15;} break;
}cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success16;
                   pass16: *ptr=oldpass16;if (1){it=failobj;goto pass15;}
                   success16: *ptr=oldpass16;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success15;
                   pass15: *ptr=oldpass15;if (1){it=failobj;goto revert11;}
                   success15: *ptr=oldpass15;
                it=_autovar_4; __result_2=it;;

;goto accept15;revert11:;  goto alt4_2; accept15:;

;ptr->branches-=2; goto accept14;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; it=_autovar_12; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert12;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass17;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass17;} break;
}cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass18;} _str=it;;

                   goto success18;
                   pass18: *ptr=oldpass18;if (1){it=failobj;goto pass17;}
                   success18: *ptr=oldpass18;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success17;
                   pass17: *ptr=oldpass17;if (1){it=failobj;goto revert12;}
                   success17: *ptr=oldpass17;
                it=_autovar_7; __result_2=it;;

;goto accept16;revert12:;  goto alt4_3; accept16:;

;ptr->branches-=1; goto accept14;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept14:;
 break;
case 4/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_13=it;;
int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=_autovar_13; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert13;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass19;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass19;} break;
}cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success20;
                   pass20: *ptr=oldpass20;if (1){it=failobj;goto pass19;}
                   success20: *ptr=oldpass20;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success19;
                   pass19: *ptr=oldpass19;if (1){it=failobj;goto revert13;}
                   success19: *ptr=oldpass19;
                it=_autovar_4; __result_2=it;;

;goto accept18;revert13:;  goto alt5_2; accept18:;

;ptr->branches-=3; goto accept17;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; it=_autovar_13; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert14;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

;goto accept19;revert14:;  goto alt5_3; accept19:;

;ptr->branches-=2; goto accept17;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1; it=_autovar_13; _autovar_8=it;;
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass21;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success21;
                   pass21: *ptr=oldpass21;if (1){it=failobj;goto revert15;}
                   success21: *ptr=oldpass21;
                it=_autovar_9; __result_2=it;;

;goto accept20;revert15:;  goto alt5_4; accept20:;

;ptr->branches-=1; goto accept17;
alt5_4: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept17:;
 break;
case 5/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_14=it;;
int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_autovar_14; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert16;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass22;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass22;} break;
}cstruct oldpass23=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success23;
                   pass23: *ptr=oldpass23;if (1){it=failobj;goto pass22;}
                   success23: *ptr=oldpass23;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success22;
                   pass22: *ptr=oldpass22;if (1){it=failobj;goto revert16;}
                   success22: *ptr=oldpass22;
                it=_autovar_4; __result_2=it;;

;goto accept22;revert16:;  goto alt6_2; accept22:;

;ptr->branches-=2; goto accept21;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; it=_autovar_14; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert17;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

;goto accept23;revert17:;  goto alt6_3; accept23:;

;ptr->branches-=1; goto accept21;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept21:;
 break;
case 6/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_15=it;;
int oldpos7=ptr->pos;int cut7=0;
alt7_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_autovar_15; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert18;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass24=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass24;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_12,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass24;} break;
}cstruct oldpass25=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success25;
                   pass25: *ptr=oldpass25;if (1){it=failobj;goto pass24;}
                   success25: *ptr=oldpass25;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success24;
                   pass24: *ptr=oldpass24;if (1){it=failobj;goto revert18;}
                   success24: *ptr=oldpass24;
                it=_autovar_4; __result_2=it;;

;goto accept25;revert18:;  goto alt7_2; accept25:;

;ptr->branches-=2; goto accept24;
alt7_2: ptr->pos=oldpos7;ptr->branches-=1; it=_autovar_15; _autovar_8=it;;
cstruct oldpass26=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass26;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success26;
                   pass26: *ptr=oldpass26;if (1){it=failobj;goto revert19;}
                   success26: *ptr=oldpass26;
                it=_autovar_9; __result_2=it;;

;goto accept26;revert19:;  goto alt7_3; accept26:;

;ptr->branches-=1; goto accept24;
alt7_3: ptr->pos=oldpos7;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept24:;
 break;
case 7/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _x=it;;
it=rb_obj_clone(s_regch_91a9); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto fail;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_2=it;;
cstruct oldpass27=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass27;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_13,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass27;} break;
}cstruct oldpass28=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;
                   goto success28;
                   pass28: *ptr=oldpass28;if (1){it=failobj;goto pass27;}
                   success28: *ptr=oldpass28;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_df23,1,bind2);_firs=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success27;
                   pass27: *ptr=oldpass27;if (1){it=failobj;goto fail;}
                   success27: *ptr=oldpass27;
                it=_autovar_4; __result_2=it;;
 break;
case 8/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_16=it;;
int oldpos8=ptr->pos;int cut8=0;
alt8_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=_autovar_16; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert20;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass29=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass29;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_14,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass29;} break;
}cstruct oldpass30=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass30;} _str=it;;

                   goto success30;
                   pass30: *ptr=oldpass30;if (1){it=failobj;goto pass29;}
                   success30: *ptr=oldpass30;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success29;
                   pass29: *ptr=oldpass29;if (1){it=failobj;goto revert20;}
                   success29: *ptr=oldpass29;
                it=_autovar_7; __result_2=it;;

;goto accept28;revert20:;  goto alt8_2; accept28:;

;ptr->branches-=3; goto accept27;
alt8_2: ptr->pos=oldpos8;ptr->branches-=1; it=_autovar_16; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert21;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

;goto accept29;revert21:;  goto alt8_3; accept29:;

;ptr->branches-=2; goto accept27;
alt8_3: ptr->pos=oldpos8;ptr->branches-=1; it=_autovar_16; _autovar_8=it;;
cstruct oldpass31=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass31;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success31;
                   pass31: *ptr=oldpass31;if (1){it=failobj;goto revert22;}
                   success31: *ptr=oldpass31;
                it=_autovar_9; __result_2=it;;

;goto accept30;revert22:;  goto alt8_4; accept30:;

;ptr->branches-=1; goto accept27;
alt8_4: ptr->pos=oldpos8;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept27:;
 break;
case 9/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_17=it;;
int oldpos9=ptr->pos;int cut9=0;
alt9_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_autovar_17; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert23;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass32=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass32;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_15,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass32;} break;
}cstruct oldpass33=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass33;} _str=it;;

                   goto success33;
                   pass33: *ptr=oldpass33;if (1){it=failobj;goto pass32;}
                   success33: *ptr=oldpass33;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success32;
                   pass32: *ptr=oldpass32;if (1){it=failobj;goto revert23;}
                   success32: *ptr=oldpass32;
                it=_autovar_7; __result_2=it;;

;goto accept32;revert23:;  goto alt9_2; accept32:;

;ptr->branches-=2; goto accept31;
alt9_2: ptr->pos=oldpos9;ptr->branches-=1; it=_autovar_17; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert24;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

;goto accept33;revert24:;  goto alt9_3; accept33:;

;ptr->branches-=1; goto accept31;
alt9_3: ptr->pos=oldpos9;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept31:;
 break;
case 10/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_18=it;;
int oldpos10=ptr->pos;int cut10=0;
alt10_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_autovar_18; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert25;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass34=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass34;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_16,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass34;} break;
}cstruct oldpass35=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass35;} _str=it;;

                   goto success35;
                   pass35: *ptr=oldpass35;if (1){it=failobj;goto pass34;}
                   success35: *ptr=oldpass35;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success34;
                   pass34: *ptr=oldpass34;if (1){it=failobj;goto revert25;}
                   success34: *ptr=oldpass34;
                it=_autovar_7; __result_2=it;;

;goto accept35;revert25:;  goto alt10_2; accept35:;

;ptr->branches-=2; goto accept34;
alt10_2: ptr->pos=oldpos10;ptr->branches-=1; it=_autovar_18; _autovar_8=it;;
cstruct oldpass36=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass36;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success36;
                   pass36: *ptr=oldpass36;if (1){it=failobj;goto revert26;}
                   success36: *ptr=oldpass36;
                it=_autovar_9; __result_2=it;;

;goto accept36;revert26:;  goto alt10_3; accept36:;

;ptr->branches-=1; goto accept34;
alt10_3: ptr->pos=oldpos10;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept34:;
 break;
case 11/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _x=it;;
it=rb_obj_clone(s__seq_7eae); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto fail;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; _autovar_5=it;;
cstruct oldpass37=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass37;}switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_17,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass37;} break;
}cstruct oldpass38=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass38;} _str=it;;

                   goto success38;
                   pass38: *ptr=oldpass38;if (1){it=failobj;goto pass37;}
                   success38: *ptr=oldpass38;
                it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);bind_aset(bind2,2,_str);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_78a6,1,bind2);_firs=bind_aget(bind2,1);;_str=bind_aget(bind2,2);; _autovar_7=it;;

                   goto success37;
                   pass37: *ptr=oldpass37;if (1){it=failobj;goto fail;}
                   success37: *ptr=oldpass37;
                it=_autovar_7; __result_2=it;;
 break;
case 12/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_19=it;;
int oldpos11=ptr->pos;int cut11=0;
alt11_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=_autovar_19; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert27;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;

;goto accept38;revert27:;  goto alt11_2; accept38:;

;ptr->branches-=2; goto accept37;
alt11_2: ptr->pos=oldpos11;ptr->branches-=1; it=_autovar_19; _autovar_8=it;;
cstruct oldpass39=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass39;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success39;
                   pass39: *ptr=oldpass39;if (1){it=failobj;goto revert28;}
                   success39: *ptr=oldpass39;
                it=_autovar_9; __result_2=it;;

;goto accept39;revert28:;  goto alt11_3; accept39:;

;ptr->branches-=1; goto accept37;
alt11_3: ptr->pos=oldpos11;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept37:;
 break;
case 13/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _x=it;;
it=rb_obj_clone(s_fails_24e7); _n=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_n);it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400,1,bind2);_x=bind_aget(bind2,1);;_n=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto fail;};bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb_,1,bind2);_x=bind_aget(bind2,1);; __result=it;;
it=__result; __result_2=it;;
 break;
case 14/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_8=it;;
cstruct oldpass40=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_8);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind2); _firs=it;;
bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind2);_firs=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto pass40;};bind_aset(bind2,1,_firs);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_7c35,1,bind2);_firs=bind_aget(bind2,1);; _autovar_9=it;;

                   goto success40;
                   pass40: *ptr=oldpass40;if (1){it=failobj;goto fail;}
                   success40: *ptr=oldpass40;
                it=_autovar_9; __result_2=it;;
 break;
case 15/*Or*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_20=it;;
cstruct oldpass41=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_20);
                   it=rb_ary_new3(0); _autovar_21=it;;
int stop1=0; while(!stop1){ int oldpos12=ptr->pos;int cut12=0;
alt12_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_traverse_item(self ); if (it==failobj){it=failobj;goto revert29;} _autovar_22=it;;
it=AmethystCore_append(self,_autovar_21,_autovar_22);
;goto accept41;revert29:;  goto alt12_2; accept41:;

;ptr->branches-=2; goto accept40;
alt12_2: ptr->pos=oldpos12;ptr->branches-=1; stop1=1;
;goto accept42;revert30:;  goto alt12_3; accept42:;

;ptr->branches-=1; goto accept40;
alt12_3: ptr->pos=oldpos12;ptr->branches-=1;if (1){it=failobj;goto pass41;};
 accept40:;
 } it=_autovar_21; _items=it;;
it=Qfalse; _aswitch=it;;
bind_aset(bind2,1,_items);bind_aset(bind2,2,_aswitch);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__bb04,1,bind2);_items=bind_aget(bind2,1);;_aswitch=bind_aget(bind2,2);;int oldpos13=ptr->pos;int cut13=0;
alt13_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; bind_aset(bind2,1,_aswitch);it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind2);_aswitch=bind_aget(bind2,1);;if (it==failobj){it=failobj;goto revert31;};bind_aset(bind2,1,_items);it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_d486,1,bind2);_items=bind_aget(bind2,1);; _autovar_23=it;;

;goto accept44;revert31:;  goto alt13_2; accept44:;

;ptr->branches-=2; goto accept43;
alt13_2: ptr->pos=oldpos13;ptr->branches-=1; it=_items; _autovar_24=it;;
cstruct oldpass42=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_24;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass42;} _autovar_25=it;;
cstruct oldpass43=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_25);
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_18,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2); _list=it;;
int oldpos14=ptr->pos;int cut14=0;
alt14_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_26=it;;
cstruct oldpass44=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_26);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); _ary=it;;

                   goto success44;
                   pass44: *ptr=oldpass44;if (1){it=failobj;goto revert33;}
                   success44: *ptr=oldpass44;
                it=rb_ary_new3(0); _newlist=it;;
it=c_Lattice_Char; _lat=it;;
bind_aset(bind2,1,_list);bind_aset(bind2,2,_ary);bind_aset(bind2,3,_newlist);bind_aset(bind2,4,_lat);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__642a,1,bind2);_list=bind_aget(bind2,1);;_ary=bind_aget(bind2,2);;_newlist=bind_aget(bind2,3);;_lat=bind_aget(bind2,4);; it=c_Switch_Char; arg0=it;it=_lat; arg1=it;it=_newlist; arg2=it; it=Detect_First_combine_or(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert33;} __result_3=it;;

;goto accept47;revert33:;  goto alt14_2; accept47:;

;ptr->branches-=3; goto accept46;
alt14_2: ptr->pos=oldpos14;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert34;} _n_2=it;;
bind_aset(bind2,1,_list);bind_aset(bind2,2,_n_2);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);_list=bind_aget(bind2,1);;_n_2=bind_aget(bind2,2);; _newlist=it;;
 it=c_Switch_Char; arg0=it;it=c_Lattice_Char; arg1=it;it=_newlist; arg2=it; it=Detect_First_combine_or(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert34;} __result_3=it;;

;goto accept48;revert34:;  goto alt14_3; accept48:;

;ptr->branches-=2; goto accept46;
alt14_3: ptr->pos=oldpos14;ptr->branches-=1; it=Qnil;if (ptr->pos<ptr->len){it=failobj;goto revert35;}it=c_Switch_Char; _cls=it;;
bind_aset(bind2,1,_cls);bind_aset(bind2,2,_list);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18,1,bind2);_cls=bind_aget(bind2,1);;_list=bind_aget(bind2,2);; __result_3=it;;

;goto accept49;revert35:;  goto alt14_4; accept49:;

;ptr->branches-=1; goto accept46;
alt14_4: ptr->pos=oldpos14;ptr->branches-=1;if (1){it=failobj;goto pass43;};
 accept46:;
it=__result_3; _autovar_27=it;;
 break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind2); _list=it;;
int oldpos15=ptr->pos;int cut15=0;
alt15_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert36;} _n_2=it;;
bind_aset(bind2,1,_list);bind_aset(bind2,2,_n_2);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__dot__a482,1,bind2);_list=bind_aget(bind2,1);;_n_2=bind_aget(bind2,2);; _newlist=it;;
 it=c_Switch_Char; arg0=it;it=c_Lattice_Char; arg1=it;it=_newlist; arg2=it; it=Detect_First_combine_or(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert36;} __result_3=it;;

;goto accept51;revert36:;  goto alt15_2; accept51:;

;ptr->branches-=2; goto accept50;
alt15_2: ptr->pos=oldpos15;ptr->branches-=1; it=Qnil;if (ptr->pos<ptr->len){it=failobj;goto revert37;}it=c_Switch_Char; _cls=it;;
bind_aset(bind2,1,_cls);bind_aset(bind2,2,_list);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__0f18,1,bind2);_cls=bind_aget(bind2,1);;_list=bind_aget(bind2,2);; __result_3=it;;

;goto accept52;revert37:;  goto alt15_3; accept52:;

;ptr->branches-=1; goto accept50;
alt15_3: ptr->pos=oldpos15;ptr->branches-=1;if (1){it=failobj;goto pass43;};
 accept50:;
it=__result_3; _autovar_27=it;;
 break;
}
                   goto success43;
                   pass43: *ptr=oldpass43;if (1){it=failobj;goto pass42;}
                   success43: *ptr=oldpass43;
                it=_autovar_27; _autovar_28=it;;

                   goto success42;
                   pass42: *ptr=oldpass42;if (1){it=failobj;goto revert32;}
                   success42: *ptr=oldpass42;
                it=_autovar_28; _autovar_23=it;;

;goto accept45;revert32:;  goto alt13_3; accept45:;

;ptr->branches-=1; goto accept43;
alt13_3: ptr->pos=oldpos13;ptr->branches-=1;if (1){it=failobj;goto pass41;};
 accept43:;

                   goto success41;
                   pass41: *ptr=oldpass41;if (1){it=failobj;goto fail;}
                   success41: *ptr=oldpass41;
                it=_autovar_23; __result_2=it;;
 break;
case 16/*Seq*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_29=it;;
cstruct oldpass45=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_29);
                   it=rb_ary_new3(0); _autovar_30=it;;
int stop2=0; while(!stop2){ int oldpos16=ptr->pos;int cut16=0;
alt16_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_Switch_Char_traverse_item(self ); if (it==failobj){it=failobj;goto revert38;} _autovar_31=it;;
it=AmethystCore_append(self,_autovar_30,_autovar_31);
;goto accept54;revert38:;  goto alt16_2; accept54:;

;ptr->branches-=2; goto accept53;
alt16_2: ptr->pos=oldpos16;ptr->branches-=1; stop2=1;
;goto accept55;revert39:;  goto alt16_3; accept55:;

;ptr->branches-=1; goto accept53;
alt16_3: ptr->pos=oldpos16;ptr->branches-=1;if (1){it=failobj;goto pass45;};
 accept53:;
 } it=_autovar_30; _autovar_32=it;;
cstruct oldpass46=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_32;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass46;} _autovar_33=it;;
cstruct oldpass47=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_33);
                   switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_19,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_ary_new3(0); _prefix=it;;
int oldpos17=ptr->pos;int cut17=0;
alt17_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_First_must_empty(self ); if (it==failobj){it=failobj;goto revert40;} _s=it;;
 it=c_Switch_Char; arg0=it;bind_aset(bind2,1,_prefix);bind_aset(bind2,2,_s);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);_prefix=bind_aget(bind2,1);;_s=bind_aget(bind2,2);; arg1=it; it=Detect_First_combine_seq(self ,arg0,arg1); __result_4=it;;

;goto accept57;revert40:;  goto alt17_2; accept57:;

;ptr->branches-=2; goto accept56;
alt17_2: ptr->pos=oldpos17;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_34=it;;
cstruct oldpass48=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_34);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind2); _ary_2=it;;

                   goto success48;
                   pass48: *ptr=oldpass48;if (1){it=failobj;goto revert41;}
                   success48: *ptr=oldpass48;
                it=rb_ary_new3(0); _autovar_35=it;;
int stop3=0; while(!stop3){ int oldpos18=ptr->pos;int cut18=0;
alt18_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert42;} _autovar_36=it;;
it=AmethystCore_append(self,_autovar_35,_autovar_36);
;goto accept60;revert42:;  goto alt18_2; accept60:;

;ptr->branches-=2; goto accept59;
alt18_2: ptr->pos=oldpos18;ptr->branches-=1; stop3=1;
;goto accept61;revert43:;  goto alt18_3; accept61:;

;ptr->branches-=1; goto accept59;
alt18_3: ptr->pos=oldpos18;ptr->branches-=1;if (1){it=failobj;goto revert41;};
 accept59:;
 } it=_autovar_35; _rest=it;;
it=c_Switch_Char; _cls_2=it;;
bind_aset(bind2,1,_cls_2);bind_aset(bind2,2,_ary_2);bind_aset(bind2,3,_prefix);bind_aset(bind2,4,_rest);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__lb__75a5,1,bind2);_cls_2=bind_aget(bind2,1);;_ary_2=bind_aget(bind2,2);;_prefix=bind_aget(bind2,3);;_rest=bind_aget(bind2,4);; __result_4=it;;

;goto accept58;revert41:;  goto alt17_3; accept58:;

;ptr->branches-=1; goto accept56;
alt17_3: ptr->pos=oldpos17;ptr->branches-=1;if (1){it=failobj;goto pass47;};
 accept56:;
it=__result_4; _autovar_37=it;;
 break;
case 1/*Object*/:; it=rb_ary_new3(0); _prefix=it;;
int oldpos19=ptr->pos;int cut19=0;
alt19_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Detect_First_must_empty(self ); if (it==failobj){it=failobj;goto revert44;} _s=it;;
 it=c_Switch_Char; arg0=it;bind_aset(bind2,1,_prefix);bind_aset(bind2,2,_s);it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__4651,1,bind2);_prefix=bind_aget(bind2,1);;_s=bind_aget(bind2,2);; arg1=it; it=Detect_First_combine_seq(self ,arg0,arg1); __result_4=it;;

;goto accept63;revert44:;  goto alt19_2; accept63:;

;ptr->branches-=2; goto accept62;
alt19_2: ptr->pos=oldpos19;ptr->branches-=1; it=rb_ary_new3(0); _autovar_38=it;;
int stop4=0; while(!stop4){ int oldpos20=ptr->pos;int cut20=0;
alt20_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert46;} _autovar_39=it;;
it=AmethystCore_append(self,_autovar_38,_autovar_39);
;goto accept66;revert46:;  goto alt20_2; accept66:;

;ptr->branches-=2; goto accept65;
alt20_2: ptr->pos=oldpos20;ptr->branches-=1; stop4=1;
;goto accept67;revert47:;  goto alt20_3; accept67:;

;ptr->branches-=1; goto accept65;
alt20_3: ptr->pos=oldpos20;ptr->branches-=1;if (1){it=failobj;goto revert45;};
 accept65:;
 } it=_autovar_38; _ary_2=it;;
bind_aset(bind2,1,_prefix);bind_aset(bind2,2,_ary_2);it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321,1,bind2);_prefix=bind_aget(bind2,1);;_ary_2=bind_aget(bind2,2);; __result_4=it;;

;goto accept64;revert45:;  goto alt19_3; accept64:;

;ptr->branches-=1; goto accept62;
alt19_3: ptr->pos=oldpos19;ptr->branches-=1;if (1){it=failobj;goto pass47;};
 accept62:;
it=__result_4; _autovar_37=it;;
 break;
}
                   goto success47;
                   pass47: *ptr=oldpass47;if (1){it=failobj;goto pass46;}
                   success47: *ptr=oldpass47;
                it=_autovar_37; _autovar_40=it;;

                   goto success46;
                   pass46: *ptr=oldpass46;if (1){it=failobj;goto pass45;}
                   success46: *ptr=oldpass46;
                it=_autovar_40; _autovar_41=it;;

                   goto success45;
                   pass45: *ptr=oldpass45;if (1){it=failobj;goto fail;}
                   success45: *ptr=oldpass45;
                it=_autovar_41; __result_2=it;;
 break;
case 17/*Object*/:; if (1){it=failobj;goto fail;} break;
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
s__seq_7eae=rb_str_new2("_seq");rb_global_variable(&s__seq_7eae);
s_fails_24e7=rb_str_new2("fails");rb_global_variable(&s_fails_24e7);
s_regch_91a9=rb_str_new2("regch");rb_global_variable(&s_regch_91a9);
switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_10);;
switchhash_Detect_Switch_Char_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_11);;
switchhash_Detect_Switch_Char_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_12);;
switchhash_Detect_Switch_Char_13=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_13);;
switchhash_Detect_Switch_Char_14=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_14);;
switchhash_Detect_Switch_Char_15=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_15);;
switchhash_Detect_Switch_Char_16=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_16);;
switchhash_Detect_Switch_Char_17=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_17);;
switchhash_Detect_Switch_Char_18=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_18);;
switchhash_Detect_Switch_Char_19=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_19);;
switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Apply\nnext h[k]=3 if k<=Apply\nnext h[k]=4 if k<=Apply\nnext h[k]=5 if k<=Apply\nnext h[k]=6 if k<=Apply\nnext h[k]=7 if k<=Apply\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Apply\nnext h[k]=10 if k<=Apply\nnext h[k]=11 if k<=Apply\nnext h[k]=12 if k<=Apply\nnext h[k]=13 if k<=Apply\nnext h[k]=14 if k<=Apply\nnext h[k]=15 if k<=Or\nnext h[k]=16 if k<=Seq\nnext h[k]=17 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_1);;
switchhash_Detect_Switch_Char_20=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_20);;
switchhash_Detect_Switch_Char_21=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_21);;
switchhash_Detect_Switch_Char_22=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_22);;
switchhash_Detect_Switch_Char_23=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_23);;
switchhash_Detect_Switch_Char_24=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_24);;
switchhash_Detect_Switch_Char_25=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_25);;
switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_2);;
switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_3);;
switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_4);;
switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_5);;
switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_6);;
switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_7);;
switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_8);;
switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Detect_Switch_Char_9);;
sy_Detect_Switch_Char_Or_lb__ti_bind_d486=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_d486");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_a321=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_a321");
sy_Detect_Switch_Char__at__contex_5f56=rb_intern("Detect_Switch_Char__at__contex_5f56");
sy_Detect_Switch_Char__at__contex_cdb3=rb_intern("Detect_Switch_Char__at__contex_cdb3");
sy_Detect_Switch_Char__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Char__do_rules_eq__le__ab16");
sy_Detect_Switch_Char__lb__lb_Lattic_d322=rb_intern("Detect_Switch_Char__lb__lb_Lattic_d322");
sy_Detect_Switch_Char__lp_2=rb_intern("Detect_Switch_Char__lp_2");
sy_Detect_Switch_Char__lp_=rb_intern("Detect_Switch_Char__lp_");
sy_Detect_Switch_Char__lp_bind_lb_1_rb__c400=rb_intern("Detect_Switch_Char__lp_bind_lb_1_rb__c400");
sy_Detect_Switch_Char__lp_src_dot_cla_2024=rb_intern("Detect_Switch_Char__lp_src_dot_cla_2024");
sy_Detect_Switch_Char_bind_lb_1_rb_=rb_intern("Detect_Switch_Char_bind_lb_1_rb_");
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
