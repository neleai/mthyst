#include "cthyst.h"
#include "memo.c"
VALUE cls_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Dataflow_root(VALUE self );
VALUE Dataflow_switch(VALUE self );
VALUE Dataflow_traverse(VALUE self );
VALUE Dataflow_traverse_item(VALUE self );
VALUE Dataflow_vars_in(VALUE self );
VALUE Dataflow_visit(VALUE self );
VALUE switchhash_Dataflow_1;
VALUE switchhash_Dataflow_2;
VALUE switchhash_Dataflow_3;
VALUE switchhash_Dataflow_4;
VALUE switchhash_Dataflow_5;
VALUE switchhash_Dataflow_6;
VALUE switchhash_Dataflow_7;
VALUE switchhash_Dataflow_8;
static VALUE sy_Dataflow_Act_lb_bind_7d8f;
static VALUE sy_Dataflow_Apply_lb__ti__lp__753f;
static VALUE sy_Dataflow_Lookahea_2972;
static VALUE sy_Dataflow_Many_dot_cre_2107;
static VALUE sy_Dataflow_Pass_dot_cre_5b5c;
static VALUE sy_Dataflow_Seq_lb_src_dot__6f68;
static VALUE sy_Dataflow_Switch_O_5445;
static VALUE sy_Dataflow__at__contex_5f56;
static VALUE sy_Dataflow__at__contex_cdb3;
static VALUE sy_Dataflow__at_marked_lt__59bb;
static VALUE sy_Dataflow__at_marked_lt__d910;
static VALUE sy_Dataflow__at_marked_lt__f9b9;
static VALUE sy_Dataflow__at_oldssan_37c2;
static VALUE sy_Dataflow__at_oldssan_e953;
static VALUE sy_Dataflow__lp_src_dot_cla_2024;
static VALUE sy_Dataflow_bind_end_6e13;
static VALUE sy_Dataflow_bind_lb_1_rb_;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__6099;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__9da9;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__ce70;
static VALUE sy_Dataflow_bind_lb_1_rb__dot__dbae;
static VALUE sy_Dataflow_bind_lb_1_rb__eq__fe02;
static VALUE sy_Dataflow_bind_lb_1_rb__lb__9337;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__7b20;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__c37a;
static VALUE sy_Dataflow_bind_lb_1_rb__lt__eda2;
static VALUE sy_Dataflow_bind_lb_1_rb__sp__6af0;
static VALUE sy_Dataflow_if_sp_bind_lb__1bed;
static VALUE sy_Dataflow_many_end_0563;
static VALUE sy_Dataflow_n_eq_Result_d8be;
static VALUE sy_Dataflow_oldssanu_073d;
static VALUE sy_Dataflow_or_end_lp_b_33b4;
static VALUE sy_Dataflow_src_25d9;
static VALUE sy_Dataflow_src_dot_args_2df5;
static VALUE sy_Dataflow_src_dot_body_b7c1;
static VALUE sy_Dataflow_src_dot_clas_68f9;
static VALUE sy_Dataflow_src_dot_dup_d768;
static VALUE sy_Dataflow_src_dot_free_3d49;
static VALUE sy_Dataflow_src_dot_reac_9ae4;
static VALUE sy_Dataflow_src_dot_to_5e99;
static VALUE sy_Dataflow_src_dot_var_3a88;
static VALUE sy_Dataflow_src_dot_vars_2db1;
static VALUE sy_Dataflow_ssanum_lp_s_3920;
static VALUE sy_Dataflow_ssanums_dot__ae08;

 memo_struct *mem_Dataflow=NULL;VALUE memo_val_Dataflow;VALUE profile_report_Dataflow(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); if(ptr->mem){fprintf(profile_report,"memo Dataflow::root  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[117],((memo_struct *)ptr->mem)->miss[117],((memo_struct *)ptr->mem)->ticks[117]);((memo_struct *)ptr->mem)->hits[117]=0;((memo_struct *)ptr->mem)->miss[117]=0;((memo_struct *)ptr->mem)->ticks[117]=0;} return Qnil;}VALUE Dataflow_root(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_var=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_body=Qnil,_autovar_12=Qnil,__result=Qnil,_autovar_13=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);if (ptr->mem==NULL){ptr->mem=mem_Dataflow;}time_struct time_old=memo_get(ptr->mem,117,ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_2);it=rb_funcall(self,sy_Dataflow__at__contex_5f56,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_2=bind_aget(bind2,2);;it=rb_funcall(self,sy_Dataflow_src_dot_dup_d768,1,bind2); _autovar_3=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_3;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_4=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass1;} break;
}
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto memo_fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; _autovar_5=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                   bind_aset(bind2,1,_autovar_2);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lb__9337,1,bind2);_autovar_2=bind_aget(bind2,1);;it=rb_funcall(self,sy_Dataflow_src_dot_args_2df5,1,bind2); _autovar_6=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_6;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass3;} _autovar_7=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_7);
                   it=rb_ary_new3(0); _autovar_8=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_9=it;;
it=AmethystCore_append(self,_autovar_8,_autovar_9);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass4;};
 accept1:;
 } it=_autovar_8; _var=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto pass3;}
                   success4: *ptr=oldpass4;
                
                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto pass2;}
                   success3: *ptr=oldpass3;
                bind_aset(bind2,1,_var);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__6099,1,bind2);_var=bind_aget(bind2,1);;it=rb_funcall(self,sy_Dataflow_Seq_lb_src_dot__6f68,1,bind2); _autovar_10=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_10;ptr->len=1;
                     it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto pass5;} _autovar_11=it;;

                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto pass2;}
                   success5: *ptr=oldpass5;
                it=_autovar_11; _body=it;;
bind_aset(bind2,1,_body);it=rb_funcall(self,sy_Dataflow_src_dot_body_b7c1,1,bind2);_body=bind_aget(bind2,1);;bind_aset(bind2,1,_body);it=rb_funcall(self,sy_Dataflow_src_dot_reac_9ae4,1,bind2);_body=bind_aget(bind2,1);;it=rb_funcall(self,sy_Dataflow_src_dot_free_3d49,1,bind2); _autovar_12=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto memo_fail;}
                   success2: *ptr=oldpass2;
                it=_autovar_12; __result=it;;
 _autovar_13=it;;
bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_13);it=rb_funcall(self,sy_Dataflow__at__contex_cdb3,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_13=bind_aget(bind2,2);;memo_fail:if(!ptr->branches)ptr->discard=ptr->pos;time_old.discard=ptr->discard; memo_add(ptr->mem,117,ptr->src,oldpos,it,ptr->pos,time_old); return it;

fail: return it;
}
VALUE Dataflow_switch(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ary=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                   it=rb_ary_new3(0); _autovar_2=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_3=it;;
it=AmethystCore_append(self,_autovar_2,_autovar_3);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept1:;
 } it=_autovar_2; _ary=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,_ary);it=rb_funcall(self,sy_Dataflow_Switch_O_5445,1,bind2);_ary=bind_aget(bind2,1);; __result=it;;
 break;
case 1/*Switch_Char*/:case 2/*Switch_Clas*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; __result=it;;
 break;
case 3/*Object*/:; if (1){it=failobj;goto fail;} break;
}
fail: return it;
}
VALUE Dataflow_traverse(VALUE self ){VALUE vals[0]; VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);ptr->pos=ptr->len;it=rb_ary_new3(0); _nvars=it;;
it=rb_funcall(self,sy_Dataflow__lp_src_dot_cla_2024,1,bind2); _ivars=it;;
it=_ivars; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert1;} _it=it;;
bind_aset(bind2,1,_nvars);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__sp__6af0,1,bind2);_nvars=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,_ivars);bind_aset(bind2,2,_nvars);it=rb_funcall(self,sy_Dataflow_if_sp_bind_lb__1bed,1,bind2);_ivars=bind_aget(bind2,1);;_nvars=bind_aget(bind2,2);; __result=it;;

fail: return it;
}
VALUE Dataflow_traverse_item(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Many*/:case 6/*Or*/:case 7/*Pass*/:case 8/*Result*/:case 9/*Switch_Char*/:case 10/*Switch_Clas*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=Dataflow_visit(self ); if (it==failobj){it=failobj;goto revert1;} __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=3; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Dataflow_traverse(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;

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
case 11/*Object*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Dataflow_traverse(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_2=it;;

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
case 1/*Array*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Many*/:case 6/*Or*/:case 7/*Pass*/:case 8/*Result*/:case 9/*Switch_Char*/:case 10/*Switch_Clas*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_visit(self ); if (it==failobj){it=failobj;goto revert6;} __result=it;;

;goto accept9;revert6:;  goto alt3_2; accept9:;

;ptr->branches-=2; goto accept8;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop1=0; while(!stop1){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert8;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
case 11/*Object*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop2=0; while(!stop2){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert10;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
case 2/*Object*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Apply*/:case 2/*Bind*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Many*/:case 6/*Or*/:case 7/*Pass*/:case 8/*Result*/:case 9/*Switch_Char*/:case 10/*Switch_Clas*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_visit(self ); if (it==failobj){it=failobj;goto revert12;} __result=it;;

;goto accept18;revert12:;  goto alt6_2; accept18:;

;ptr->branches-=2; goto accept17;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert13;} __result=it;;

;goto accept19;revert13:;  goto alt6_3; accept19:;

;ptr->branches-=1; goto accept17;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept17:;
 break;
case 11/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;
 break;
} break;
}
fail: return it;
}
VALUE Dataflow_vars_in(VALUE self ){VALUE vals[0]; VALUE it ,_ary=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=rb_ary_new3(0); _ary=it;;
bind_aset(bind2,1,_ary);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__eq__fe02,1,bind2);_ary=bind_aget(bind2,1);;int stop1=0; while(!stop1){ switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); _autovar_2=it;;
it=AmethystCore_append(self,_ary,_autovar_2);
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                 break;
case 1/*Args*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                     it=Dataflow_vars_in(self ); _autovar_4=it;;
it=AmethystCore_append(self,_ary,_autovar_4);
                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto fail;}
                   success2: *ptr=oldpass2;
                 break;
case 2/*Bind*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_5=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=Dataflow_vars_in(self ); _autovar_6=it;;
it=AmethystCore_append(self,_ary,_autovar_6);
                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto fail;}
                   success3: *ptr=oldpass3;
                 break;
case 3/*CAct*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_7=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_7);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); _autovar_8=it;;
it=AmethystCore_append(self,_ary,_autovar_8);
                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto fail;}
                   success4: *ptr=oldpass4;
                 break;
case 4/*Global*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_9=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_9);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); _autovar_10=it;;
it=AmethystCore_append(self,_ary,_autovar_10);it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);
                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto fail;}
                   success5: *ptr=oldpass5;
                 break;
case 5/*Key*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_11=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_11);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); _autovar_12=it;;
it=AmethystCore_append(self,_ary,_autovar_12);it=rb_funcall(self,sy_Dataflow__at_marked_lt__59bb,1,bind2);
                   goto success6;
                   pass6: *ptr=oldpass6;if (1){it=failobj;goto fail;}
                   success6: *ptr=oldpass6;
                 break;
case 6/*Local*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_13=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_13);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); _autovar_14=it;;
it=AmethystCore_append(self,_ary,_autovar_14);
                   goto success7;
                   pass7: *ptr=oldpass7;if (1){it=failobj;goto fail;}
                   success7: *ptr=oldpass7;
                 break;
case 7/*Result*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_15=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_15);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_src_25d9,1,bind2); _autovar_16=it;;
it=AmethystCore_append(self,_ary,_autovar_16);
                   goto success8;
                   pass8: *ptr=oldpass8;if (1){it=failobj;goto fail;}
                   success8: *ptr=oldpass8;
                 break;
case 8/*Object*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert1;}
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;
 break;
} } bind_aset(bind2,1,_ary);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb_,1,bind2);_ary=bind_aget(bind2,1);; __result=it;;

fail: return it;
}
VALUE Dataflow_visit(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_t=Qnil,_act=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_var=Qnil,_autovar_8=Qnil,__result=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_app=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_autovar_19=Qnil,_autovar_20=Qnil,_autovar_21=Qnil,_old=Qnil,_autovar_22=Qnil,_autovar_23=Qnil,_autovar_24=Qnil,_autovar_25=Qnil,_prev=Qnil,_autovar_26=Qnil,_autovar_27=Qnil,_autovar_28=Qnil,_autovar_29=Qnil,_alts=Qnil,_join=Qnil,_autovar_30=Qnil,_pred=Qnil,_a=Qnil,_autovar_31=Qnil,_autovar_32=Qnil,_autovar_33=Qnil,_autovar_34=Qnil,_to=Qnil,_autovar_35=Qnil,_autovar_36=Qnil,_autovar_37=Qnil,_autovar_38=Qnil,_autovar_39=Qnil,_autovar_40=Qnil,_autovar_41=Qnil,_autovar_42=Qnil,_autovar_43=Qnil;VALUE bind2=bind_new2(3);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                   it=rb_ary_new3(0); _autovar_2=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_3=it;;
it=AmethystCore_append(self,_autovar_2,_autovar_3);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept1:;
 } it=_autovar_2; _t=it;;
bind_aset(bind2,1,_t);it=rb_funcall(self,sy_Dataflow_Act_lb_bind_7d8f,1,bind2);_t=bind_aget(bind2,1);; _act=it;;
bind_aset(bind2,1,_act);it=rb_funcall(self,sy_Dataflow__at_marked_lt__d910,1,bind2);_act=bind_aget(bind2,1);;bind_aset(bind2,1,_act);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__dbae,1,bind2);_act=bind_aget(bind2,1);; _autovar_4=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_4;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_5=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=Dataflow_vars_in(self ); _autovar_6=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto pass2;}
                   success3: *ptr=oldpass3;
                it=_autovar_6; _autovar_7=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                it=_autovar_7; _var=it;;
bind_aset(bind2,1,_var);bind_aset(bind2,2,_act);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__9da9,1,bind2);_var=bind_aget(bind2,1);;_act=bind_aget(bind2,2);; _autovar_8=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_8; __result=it;;
 break;
case 1/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_9=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_9);
                   it=rb_ary_new3(0); _autovar_10=it;;
int stop2=0; while(!stop2){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert3;} _autovar_11=it;;
it=AmethystCore_append(self,_autovar_10,_autovar_11);
;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; stop2=1;
;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto pass4;};
 accept4:;
 } it=_autovar_10; _t=it;;
bind_aset(bind2,1,_t);it=rb_funcall(self,sy_Dataflow_Apply_lb__ti__lp__753f,1,bind2);_t=bind_aget(bind2,1);; _app=it;;
it=_app; _autovar_12=it;;
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_12;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass5;} _autovar_13=it;;
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_13);
                     it=Dataflow_vars_in(self ); _var=it;;

                   goto success6;
                   pass6: *ptr=oldpass6;if (1){it=failobj;goto pass5;}
                   success6: *ptr=oldpass6;
                
                   goto success5;
                   pass5: *ptr=oldpass5;if (1){it=failobj;goto pass4;}
                   success5: *ptr=oldpass5;
                bind_aset(bind2,1,_var);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__dot__ce70,1,bind2);_var=bind_aget(bind2,1);;it=_app; _autovar_14=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto fail;}
                   success4: *ptr=oldpass4;
                it=_autovar_14; __result=it;;
 break;
case 2/*Bind*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_15=it;;
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_15);
                   ptr->pos=ptr->len;  it=Dataflow_traverse(self ); if (it==failobj){it=failobj;goto pass7;} _autovar_16=it;;
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_16);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_bind_end_6e13,1,bind2); _autovar_17=it;;

                   goto success8;
                   pass8: *ptr=oldpass8;if (1){it=failobj;goto pass7;}
                   success8: *ptr=oldpass8;
                it=_autovar_17; _autovar_18=it;;

                   goto success7;
                   pass7: *ptr=oldpass7;if (1){it=failobj;goto fail;}
                   success7: *ptr=oldpass7;
                it=_autovar_18; __result=it;;
 break;
case 3/*Local*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_19=it;;
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_19);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Dataflow_ssanum_lp_s_3920,1,bind2); _autovar_20=it;;

                   goto success9;
                   pass9: *ptr=oldpass9;if (1){it=failobj;goto fail;}
                   success9: *ptr=oldpass9;
                it=_autovar_20; __result=it;;
 break;
case 4/*Lookahead*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_21=it;;
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_21);
                   it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); _old=it;;
it=rb_ary_new3(0); _autovar_22=it;;
int stop3=0; while(!stop3){ int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert5;} _autovar_23=it;;
it=AmethystCore_append(self,_autovar_22,_autovar_23);
;goto accept8;revert5:;  goto alt3_2; accept8:;

;ptr->branches-=2; goto accept7;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; stop3=1;
;goto accept9;revert6:;  goto alt3_3; accept9:;

;ptr->branches-=1; goto accept7;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto pass10;};
 accept7:;
 } bind_aset(bind2,1,_old);it=rb_funcall(self,sy_Dataflow__at_oldssan_e953,1,bind2);_old=bind_aget(bind2,1);;it=_autovar_22; _t=it;;
bind_aset(bind2,1,_t);it=rb_funcall(self,sy_Dataflow_Lookahea_2972,1,bind2);_t=bind_aget(bind2,1);; _autovar_24=it;;

                   goto success10;
                   pass10: *ptr=oldpass10;if (1){it=failobj;goto fail;}
                   success10: *ptr=oldpass10;
                it=_autovar_24; __result=it;;
 break;
case 5/*Many*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_25=it;;
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_25);
                   it=rb_funcall(self,sy_Dataflow_ssanums_dot__ae08,1,bind2); _prev=it;;
it=rb_ary_new3(0); _autovar_26=it;;
int stop4=0; while(!stop4){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert7;} _autovar_27=it;;
it=AmethystCore_append(self,_autovar_26,_autovar_27);
;goto accept11;revert7:;  goto alt4_2; accept11:;

;ptr->branches-=2; goto accept10;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; stop4=1;
;goto accept12;revert8:;  goto alt4_3; accept12:;

;ptr->branches-=1; goto accept10;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto pass11;};
 accept10:;
 } bind_aset(bind2,1,_prev);it=rb_funcall(self,sy_Dataflow_many_end_0563,1,bind2);_prev=bind_aget(bind2,1);;it=_autovar_26; _t=it;;
bind_aset(bind2,1,_t);it=rb_funcall(self,sy_Dataflow_Many_dot_cre_2107,1,bind2);_t=bind_aget(bind2,1);; _autovar_28=it;;

                   goto success11;
                   pass11: *ptr=oldpass11;if (1){it=failobj;goto fail;}
                   success11: *ptr=oldpass11;
                it=_autovar_28; __result=it;;
 break;
case 6/*Or*/:case 7/*Switch_Char*/:case 8/*Switch_Clas*/:;   it=Dataflow_switch(self ); if (it==failobj){it=failobj;goto fail;} _autovar_29=it;;
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_29);
                   it=rb_ary_new3(0); _alts=it;;
it=rb_ary_new3(0); _join=it;;
it=rb_funcall(self,sy_Dataflow_oldssanu_073d,1,bind2); _old=it;;
int stop5=0; while(!stop5){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; bind_aset(bind2,1,_old);it=rb_funcall(self,sy_Dataflow__at_oldssan_37c2,1,bind2);_old=bind_aget(bind2,1);;  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert9;} _autovar_30=it;;
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_30);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass13;} _pred=it;;
  it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto pass13;} _a=it;;
bind_aset(bind2,1,_alts);bind_aset(bind2,2,_pred);bind_aset(bind2,3,_a);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__c37a,1,bind2);_alts=bind_aget(bind2,1);;_pred=bind_aget(bind2,2);;_a=bind_aget(bind2,3);;
                   goto success13;
                   pass13: *ptr=oldpass13;if (1){it=failobj;goto revert9;}
                   success13: *ptr=oldpass13;
                bind_aset(bind2,1,_join);it=rb_funcall(self,sy_Dataflow_bind_lb_1_rb__lt__eda2,1,bind2);_join=bind_aget(bind2,1);;
;goto accept14;revert9:;  goto alt5_2; accept14:;

;ptr->branches-=2; goto accept13;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; stop5=1;
;goto accept15;revert10:;  goto alt5_3; accept15:;

;ptr->branches-=1; goto accept13;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto pass12;};
 accept13:;
 } bind_aset(bind2,1,_join);it=rb_funcall(self,sy_Dataflow_or_end_lp_b_33b4,1,bind2);_join=bind_aget(bind2,1);;bind_aset(bind2,1,_alts);it=rb_funcall(self,sy_Dataflow_src_dot_clas_68f9,1,bind2);_alts=bind_aget(bind2,1);; _autovar_31=it;;

                   goto success12;
                   pass12: *ptr=oldpass12;if (1){it=failobj;goto fail;}
                   success12: *ptr=oldpass12;
                it=_autovar_31; __result=it;;
 break;
case 9/*Pass*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_32=it;;
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_32);
                   it=rb_funcall(self,sy_Dataflow_src_dot_to_5e99,1,bind2); _autovar_33=it;;
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_33;ptr->len=1;
                     it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto pass15;} _autovar_34=it;;

                   goto success15;
                   pass15: *ptr=oldpass15;if (1){it=failobj;goto pass14;}
                   success15: *ptr=oldpass15;
                it=_autovar_34; _to=it;;
it=rb_funcall(self,sy_Dataflow_src_dot_var_3a88,1,bind2); _autovar_35=it;;
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_35;ptr->len=1;
                     it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto pass16;} _autovar_36=it;;

                   goto success16;
                   pass16: *ptr=oldpass16;if (1){it=failobj;goto pass14;}
                   success16: *ptr=oldpass16;
                it=_autovar_36; _var=it;;
bind_aset(bind2,1,_var);it=rb_funcall(self,sy_Dataflow__at_marked_lt__f9b9,1,bind2);_var=bind_aget(bind2,1);;bind_aset(bind2,1,_to);bind_aset(bind2,2,_var);it=rb_funcall(self,sy_Dataflow_Pass_dot_cre_5b5c,1,bind2);_to=bind_aget(bind2,1);;_var=bind_aget(bind2,2);; _autovar_37=it;;

                   goto success14;
                   pass14: *ptr=oldpass14;if (1){it=failobj;goto fail;}
                   success14: *ptr=oldpass14;
                it=_autovar_37; __result=it;;
 break;
case 10/*Result*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_38=it;;
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_38);
                   it=rb_funcall(self,sy_Dataflow_src_dot_vars_2db1,1,bind2); _autovar_39=it;;
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_39;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass18;} _autovar_40=it;;
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_40);
                   it=rb_ary_new3(0); _autovar_41=it;;
int stop6=0; while(!stop6){ int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Dataflow_traverse_item(self ); if (it==failobj){it=failobj;goto revert11;} _autovar_42=it;;
it=AmethystCore_append(self,_autovar_41,_autovar_42);
;goto accept17;revert11:;  goto alt6_2; accept17:;

;ptr->branches-=2; goto accept16;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1; stop6=1;
;goto accept18;revert12:;  goto alt6_3; accept18:;

;ptr->branches-=1; goto accept16;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto pass19;};
 accept16:;
 } it=_autovar_41; _var=it;;

                   goto success19;
                   pass19: *ptr=oldpass19;if (1){it=failobj;goto pass18;}
                   success19: *ptr=oldpass19;
                
                   goto success18;
                   pass18: *ptr=oldpass18;if (1){it=failobj;goto pass17;}
                   success18: *ptr=oldpass18;
                bind_aset(bind2,1,_var);it=rb_funcall(self,sy_Dataflow_n_eq_Result_d8be,1,bind2);_var=bind_aget(bind2,1);; _autovar_43=it;;

                   goto success17;
                   pass17: *ptr=oldpass17;if (1){it=failobj;goto fail;}
                   success17: *ptr=oldpass17;
                it=_autovar_43; __result=it;;
 break;
case 11/*Object*/:; if (1){it=failobj;goto fail;} break;
}
fail: return it;
}
void Init_Dataflow_c(){ 
 cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    mem_Dataflow=memo_init();memo_val_Dataflow=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Dataflow);rb_global_variable(&memo_val_Dataflow);
rb_define_method(cls_Dataflow,"profile_report",profile_report_Dataflow,0);
switchhash_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_1);;
switchhash_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Switch_Char\nnext h[k]=8 if k<=Switch_Clas\nnext h[k]=9 if k<=Pass\nnext h[k]=10 if k<=Result\nnext h[k]=11 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_2);;
switchhash_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Args\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Global\nnext h[k]=5 if k<=Key\nnext h[k]=6 if k<=Local\nnext h[k]=7 if k<=Result\nnext h[k]=8 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_3);;
switchhash_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Switch_Char\nnext h[k]=2 if k<=Switch_Clas\nnext h[k]=3 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_4);;
switchhash_Dataflow_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_5);;
switchhash_Dataflow_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Pass\nnext h[k]=8 if k<=Result\nnext h[k]=9 if k<=Switch_Char\nnext h[k]=10 if k<=Switch_Clas\nnext h[k]=11 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_6);;
switchhash_Dataflow_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Pass\nnext h[k]=8 if k<=Result\nnext h[k]=9 if k<=Switch_Char\nnext h[k]=10 if k<=Switch_Clas\nnext h[k]=11 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_7);;
switchhash_Dataflow_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Many\nnext h[k]=6 if k<=Or\nnext h[k]=7 if k<=Pass\nnext h[k]=8 if k<=Result\nnext h[k]=9 if k<=Switch_Char\nnext h[k]=10 if k<=Switch_Clas\nnext h[k]=11 if k<=Object\n}");rb_global_variable(&switchhash_Dataflow_8);;
sy_Dataflow_Act_lb_bind_7d8f=rb_intern("Dataflow_Act_lb_bind_7d8f");
sy_Dataflow_Apply_lb__ti__lp__753f=rb_intern("Dataflow_Apply_lb__ti__lp__753f");
sy_Dataflow_Lookahea_2972=rb_intern("Dataflow_Lookahea_2972");
sy_Dataflow_Many_dot_cre_2107=rb_intern("Dataflow_Many_dot_cre_2107");
sy_Dataflow_Pass_dot_cre_5b5c=rb_intern("Dataflow_Pass_dot_cre_5b5c");
sy_Dataflow_Seq_lb_src_dot__6f68=rb_intern("Dataflow_Seq_lb_src_dot__6f68");
sy_Dataflow_Switch_O_5445=rb_intern("Dataflow_Switch_O_5445");
sy_Dataflow__at__contex_5f56=rb_intern("Dataflow__at__contex_5f56");
sy_Dataflow__at__contex_cdb3=rb_intern("Dataflow__at__contex_cdb3");
sy_Dataflow__at_marked_lt__59bb=rb_intern("Dataflow__at_marked_lt__59bb");
sy_Dataflow__at_marked_lt__d910=rb_intern("Dataflow__at_marked_lt__d910");
sy_Dataflow__at_marked_lt__f9b9=rb_intern("Dataflow__at_marked_lt__f9b9");
sy_Dataflow__at_oldssan_37c2=rb_intern("Dataflow__at_oldssan_37c2");
sy_Dataflow__at_oldssan_e953=rb_intern("Dataflow__at_oldssan_e953");
sy_Dataflow__lp_src_dot_cla_2024=rb_intern("Dataflow__lp_src_dot_cla_2024");
sy_Dataflow_bind_end_6e13=rb_intern("Dataflow_bind_end_6e13");
sy_Dataflow_bind_lb_1_rb_=rb_intern("Dataflow_bind_lb_1_rb_");
sy_Dataflow_bind_lb_1_rb__dot__6099=rb_intern("Dataflow_bind_lb_1_rb__dot__6099");
sy_Dataflow_bind_lb_1_rb__dot__9da9=rb_intern("Dataflow_bind_lb_1_rb__dot__9da9");
sy_Dataflow_bind_lb_1_rb__dot__ce70=rb_intern("Dataflow_bind_lb_1_rb__dot__ce70");
sy_Dataflow_bind_lb_1_rb__dot__dbae=rb_intern("Dataflow_bind_lb_1_rb__dot__dbae");
sy_Dataflow_bind_lb_1_rb__eq__fe02=rb_intern("Dataflow_bind_lb_1_rb__eq__fe02");
sy_Dataflow_bind_lb_1_rb__lb__9337=rb_intern("Dataflow_bind_lb_1_rb__lb__9337");
sy_Dataflow_bind_lb_1_rb__lt__7b20=rb_intern("Dataflow_bind_lb_1_rb__lt__7b20");
sy_Dataflow_bind_lb_1_rb__lt__c37a=rb_intern("Dataflow_bind_lb_1_rb__lt__c37a");
sy_Dataflow_bind_lb_1_rb__lt__eda2=rb_intern("Dataflow_bind_lb_1_rb__lt__eda2");
sy_Dataflow_bind_lb_1_rb__sp__6af0=rb_intern("Dataflow_bind_lb_1_rb__sp__6af0");
sy_Dataflow_if_sp_bind_lb__1bed=rb_intern("Dataflow_if_sp_bind_lb__1bed");
sy_Dataflow_many_end_0563=rb_intern("Dataflow_many_end_0563");
sy_Dataflow_n_eq_Result_d8be=rb_intern("Dataflow_n_eq_Result_d8be");
sy_Dataflow_oldssanu_073d=rb_intern("Dataflow_oldssanu_073d");
sy_Dataflow_or_end_lp_b_33b4=rb_intern("Dataflow_or_end_lp_b_33b4");
sy_Dataflow_src_25d9=rb_intern("Dataflow_src_25d9");
sy_Dataflow_src_dot_args_2df5=rb_intern("Dataflow_src_dot_args_2df5");
sy_Dataflow_src_dot_body_b7c1=rb_intern("Dataflow_src_dot_body_b7c1");
sy_Dataflow_src_dot_clas_68f9=rb_intern("Dataflow_src_dot_clas_68f9");
sy_Dataflow_src_dot_dup_d768=rb_intern("Dataflow_src_dot_dup_d768");
sy_Dataflow_src_dot_free_3d49=rb_intern("Dataflow_src_dot_free_3d49");
sy_Dataflow_src_dot_reac_9ae4=rb_intern("Dataflow_src_dot_reac_9ae4");
sy_Dataflow_src_dot_to_5e99=rb_intern("Dataflow_src_dot_to_5e99");
sy_Dataflow_src_dot_var_3a88=rb_intern("Dataflow_src_dot_var_3a88");
sy_Dataflow_src_dot_vars_2db1=rb_intern("Dataflow_src_dot_vars_2db1");
sy_Dataflow_ssanum_lp_s_3920=rb_intern("Dataflow_ssanum_lp_s_3920");
sy_Dataflow_ssanums_dot__ae08=rb_intern("Dataflow_ssanums_dot__ae08");
                    rb_define_method(cls_Dataflow,"root",Dataflow_root,0);
rb_define_method(cls_Dataflow,"switch",Dataflow_switch,0);
rb_define_method(cls_Dataflow,"traverse",Dataflow_traverse,0);
rb_define_method(cls_Dataflow,"traverse_item",Dataflow_traverse_item,0);
rb_define_method(cls_Dataflow,"vars_in",Dataflow_vars_in,0);
rb_define_method(cls_Dataflow,"visit",Dataflow_visit,0);
                    }
