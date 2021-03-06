#include "cthyst.h"
#include "memo.c"
VALUE cls_Left_Factor;
VALUE AmethystCore_anything(VALUE self );
VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_binds(VALUE self ,VALUE,VALUE);
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Left_Factor_factor(VALUE self ,VALUE,VALUE,VALUE);
VALUE Left_Factor_first(VALUE self ,VALUE a0);
VALUE Left_Factor_first(VALUE self ,VALUE);
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1);
VALUE Left_Factor_root(VALUE self );
VALUE Left_Factor_traverse(VALUE self );
VALUE Left_Factor_traverse_item(VALUE self );
VALUE Left_Factor_visit(VALUE self );
VALUE switchhash_Left_Factor_1;
VALUE switchhash_Left_Factor_2;
VALUE switchhash_Left_Factor_3;
VALUE switchhash_Left_Factor_4;
VALUE switchhash_Left_Factor_5;
VALUE switchhash_Left_Factor_6;
VALUE switchhash_Left_Factor_7;
VALUE switchhash_Left_Factor_8;
static VALUE sy_Left_Factor_Bind_lb_src_66c4;
static VALUE sy_Left_Factor_Or_lb__ti__lp_bin_849e;
static VALUE sy_Left_Factor_Seq_lb__lb_bin_4ce0;
static VALUE sy_Left_Factor__lb_bind_lb_1_rb__1906;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__34a7;
static VALUE sy_Left_Factor__lp_bind_lb_1_rb__b868;
static VALUE sy_Left_Factor__lp_src_dot_cla_2024;
static VALUE sy_Left_Factor_bind_lb_1_rb__lt__7b20;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4651;
static VALUE sy_Left_Factor_bind_lb_1_rb__pl__4c53;
static VALUE sy_Left_Factor_bind_lb_1_rb__sp__6af0;
static VALUE sy_Left_Factor_first_lp_bi_150a;
static VALUE sy_Left_Factor_if_sp_bind_lb__1bed;
static VALUE sy_Left_Factor_src_dot_expr_ef77;

 memo_struct *mem_Left_Factor=NULL;VALUE memo_val_Left_Factor;VALUE profile_report_Left_Factor(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr); if(ptr->mem){fprintf(profile_report,"memo Left_Factor::traverse  hit: %i miss: %i ticks: %i\n",((memo_struct *)ptr->mem)->hits[117],((memo_struct *)ptr->mem)->miss[117],((memo_struct *)ptr->mem)->ticks[117]);((memo_struct *)ptr->mem)->hits[117]=0;((memo_struct *)ptr->mem)->miss[117]=0;((memo_struct *)ptr->mem)->ticks[117]=0;} return Qnil;}VALUE Left_Factor_binds(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE it ,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,_a=Qnil,_nexp=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_f=Qnil,_autovar_6=Qnil,__result=Qnil;VALUE bind2=bind_new2(1); _s=a0;;_a=a1;; VALUE arg0;VALUE arg1; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=_s; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   ptr->pos=ptr->len; it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2); arg0=it;it=_a; arg1=it; it=Left_Factor_binds(self ,arg0,arg1); if (it==failobj){it=failobj;goto pass2;} _nexp=it;;
bind_aset(bind2,1,_nexp);it=rb_funcall(self,sy_Left_Factor_Bind_lb_src_66c4,1,bind2);_nexp=bind_aget(bind2,1);; _autovar_3=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto revert1;}
                   success2: *ptr=oldpass2;
                it=_autovar_3; _autovar_4=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert2;}it=_a; _autovar_4=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept1:;
 break;
case 1/*Seq*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_5=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass3;} _f=it;;
ptr->pos=ptr->len; it=_f; arg0=it;it=_a; arg1=it; it=Left_Factor_binds(self ,arg0,arg1); if (it==failobj){it=failobj;goto pass3;} _autovar_6=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert3;}
                   success3: *ptr=oldpass3;
                it=_autovar_6; _autovar_4=it;;

;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert4;}it=_a; _autovar_4=it;;

;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept4:;
 break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;}it=_a; _autovar_4=it;;
 break;
}
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result=it;;

fail: return it;
}
VALUE Left_Factor_factor(VALUE self ,VALUE a0,VALUE a1,VALUE a2){VALUE vals[3]; VALUE it ,_next=Qnil,_start=Qnil,_prev=Qnil,_cur=Qnil,__result=Qnil;VALUE bind2=bind_new2(2); _prev=a0;;_start=a1;;_cur=a2;; VALUE arg0;VALUE arg1;VALUE arg2; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert1;} _next=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; bind_aset(bind2,1,_start);bind_aset(bind2,2,_next);it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);_start=bind_aget(bind2,1);;_next=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert2;}; it=_prev; arg0=it;it=_start; arg1=it;bind_aset(bind2,1,_cur);bind_aset(bind2,2,_next);it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);_cur=bind_aget(bind2,1);;_next=bind_aget(bind2,2);; arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert2;} __result=it;;

;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; bind_aset(bind2,1,_start);bind_aset(bind2,2,_next);it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);_start=bind_aget(bind2,1);;_next=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert3;}; bind_aset(bind2,1,_prev);bind_aset(bind2,2,_cur);it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);_prev=bind_aget(bind2,1);;_cur=bind_aget(bind2,2);; arg0=it;bind_aset(bind2,1,_next);it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);_next=bind_aget(bind2,1);; arg1=it;bind_aset(bind2,1,_next);it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);_next=bind_aget(bind2,1);; arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert3;} __result=it;;

;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=Qnil;if (ptr->pos<ptr->len){it=failobj;goto revert4;}bind_aset(bind2,1,_prev);bind_aset(bind2,2,_cur);it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);_prev=bind_aget(bind2,1);;_cur=bind_aget(bind2,2);; __result=it;;

;goto accept6;revert4:;  goto alt1_3; accept6:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept1:;

fail: return it;
}
VALUE Left_Factor_first(VALUE self ,VALUE a0){VALUE vals[1]; VALUE it ,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_f=Qnil,_autovar_6=Qnil,__result=Qnil;VALUE bind2=bind_new2(0); _s=a0;; VALUE arg0; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=_s; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   ptr->pos=ptr->len; it=rb_funcall(self,sy_Left_Factor_src_dot_expr_ef77,1,bind2); arg0=it; it=Left_Factor_first(self ,arg0); if (it==failobj){it=failobj;goto pass2;} _autovar_3=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto revert1;}
                   success2: *ptr=oldpass2;
                it=_autovar_3; _autovar_4=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert2;} _autovar_4=it;;

;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept1:;
 break;
case 1/*Seq*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_5=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass3;} _f=it;;
ptr->pos=ptr->len; it=_f; arg0=it; it=Left_Factor_first(self ,arg0); if (it==failobj){it=failobj;goto pass3;} _autovar_6=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert3;}
                   success3: *ptr=oldpass3;
                it=_autovar_6; _autovar_4=it;;

;goto accept5;revert3:;  goto alt2_2; accept5:;

;ptr->branches-=2; goto accept4;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert4;} _autovar_4=it;;

;goto accept6;revert4:;  goto alt2_3; accept6:;

;ptr->branches-=1; goto accept4;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept4:;
 break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_4=it;;
 break;
}
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result=it;;

fail: return it;
}
VALUE Left_Factor_rest(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE it ,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_it=Qnil,_bin=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,__result=Qnil;VALUE bind2=bind_new2(2); _s=a0;;_bin=a1;;  cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);it=_s; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Seq*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass2;}it=rb_ary_new3(0); _autovar_3=it;;
int stop1=0; while(!stop1){ int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert2;} _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4);
;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; stop1=1;
;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto pass2;};
 accept3:;
 } it=_autovar_3; _it=it;;
bind_aset(bind2,1,_bin);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Left_Factor_Seq_lb__lb_bin_4ce0,1,bind2);_bin=bind_aget(bind2,1);;_it=bind_aget(bind2,2);; _autovar_5=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto revert1;}
                   success2: *ptr=oldpass2;
                it=_autovar_5; _autovar_6=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert4;}it=_bin; _autovar_6=it;;

;goto accept6;revert4:;  goto alt1_3; accept6:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass1;};
 accept1:;
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;}it=_bin; _autovar_6=it;;
 break;
}
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_6; __result=it;;

fail: return it;
}
VALUE Left_Factor_root(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil;VALUE bind2=bind_new2(0);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  it=Left_Factor_traverse(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;

fail: return it;
}
VALUE Left_Factor_traverse(VALUE self ){VALUE vals[0]; VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);if (ptr->mem==NULL){ptr->mem=mem_Left_Factor;}time_struct time_old=memo_get(ptr->mem,117,ptr->src,ptr->pos); if (time_old.pos!=-1) {ptr->pos=time_old.pos;return time_old.result;} int oldpos=ptr->pos;ptr->pos=ptr->len;it=rb_ary_new3(0); _nvars=it;;
it=rb_funcall(self,sy_Left_Factor__lp_src_dot_cla_2024,1,bind2); _ivars=it;;
it=_ivars; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Left_Factor_traverse_item(self ); if (it==failobj){it=failobj;goto revert1;} _it=it;;
bind_aset(bind2,1,_nvars);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__sp__6af0,1,bind2);_nvars=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
                bind_aset(bind2,1,_ivars);bind_aset(bind2,2,_nvars);it=rb_funcall(self,sy_Left_Factor_if_sp_bind_lb__1bed,1,bind2);_ivars=bind_aget(bind2,1);;_nvars=bind_aget(bind2,2);; __result=it;;
memo_fail:if(!ptr->branches)ptr->discard=ptr->pos;time_old.discard=ptr->discard; memo_add(ptr->mem,117,ptr->src,oldpos,it,ptr->pos,time_old); return it;

fail: return it;
}
VALUE Left_Factor_traverse_item(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=Left_Factor_visit(self ); if (it==failobj){it=failobj;goto revert1;} __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=3; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Left_Factor_traverse(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;

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
case 1/*Object*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Left_Factor_traverse(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_2=it;;

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
case 1/*Array*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Left_Factor_visit(self ); if (it==failobj){it=failobj;goto revert6;} __result=it;;

;goto accept9;revert6:;  goto alt3_2; accept9:;

;ptr->branches-=2; goto accept8;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop1=0; while(!stop1){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Left_Factor_traverse_item(self ); if (it==failobj){it=failobj;goto revert8;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
case 1/*Object*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop2=0; while(!stop2){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Left_Factor_traverse_item(self ); if (it==failobj){it=failobj;goto revert10;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
case 2/*Object*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Left_Factor_visit(self ); if (it==failobj){it=failobj;goto revert12;} __result=it;;

;goto accept18;revert12:;  goto alt6_2; accept18:;

;ptr->branches-=2; goto accept17;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert13;} __result=it;;

;goto accept19;revert13:;  goto alt6_3; accept19:;

;ptr->branches-=1; goto accept17;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept17:;
 break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;
 break;
} break;
}
fail: return it;
}
VALUE Left_Factor_visit(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_x=Qnil,_cur=Qnil,_start=Qnil,_prev=Qnil,_next=Qnil,__result=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result_2=Qnil;VALUE bind2=bind_new2(2);  VALUE arg0;VALUE arg1;VALUE arg2; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Left_Factor_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Left_Factor_traverse(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass2;} _x=it;;
bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);_x=bind_aget(bind2,1);; _cur=it;;
bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);_x=bind_aget(bind2,1);; _start=it;;
it=rb_ary_new3(0); _prev=it;;
int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert1;} _next=it;;
int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; bind_aset(bind2,1,_start);bind_aset(bind2,2,_next);it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__34a7,1,bind2);_start=bind_aget(bind2,1);;_next=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert2;}; it=rb_ary_new3(0); arg0=it;it=_start; arg1=it;bind_aset(bind2,1,_cur);bind_aset(bind2,2,_next);it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4651,1,bind2);_cur=bind_aget(bind2,1);;_next=bind_aget(bind2,2);; arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert2;} __result=it;;

;goto accept4;revert2:;  goto alt2_2; accept4:;

;ptr->branches-=2; goto accept3;
alt2_2: ptr->pos=oldpos2;ptr->branches-=1; bind_aset(bind2,1,_start);bind_aset(bind2,2,_next);it=rb_funcall(self,sy_Left_Factor__lp_bind_lb_1_rb__b868,1,bind2);_start=bind_aget(bind2,1);;_next=bind_aget(bind2,2);;if (it==failobj){it=failobj;goto revert3;}; bind_aset(bind2,1,_prev);bind_aset(bind2,2,_cur);it=rb_funcall(self,sy_Left_Factor_bind_lb_1_rb__pl__4c53,1,bind2);_prev=bind_aget(bind2,1);;_cur=bind_aget(bind2,2);; arg0=it;bind_aset(bind2,1,_next);it=rb_funcall(self,sy_Left_Factor_first_lp_bi_150a,1,bind2);_next=bind_aget(bind2,1);; arg1=it;bind_aset(bind2,1,_next);it=rb_funcall(self,sy_Left_Factor__lb_bind_lb_1_rb__1906,1,bind2);_next=bind_aget(bind2,1);; arg2=it; it=Left_Factor_factor(self ,arg0,arg1,arg2); if (it==failobj){it=failobj;goto revert3;} __result=it;;

;goto accept5;revert3:;  goto alt2_3; accept5:;

;ptr->branches-=1; goto accept3;
alt2_3: ptr->pos=oldpos2;ptr->branches-=1;if (1){it=failobj;goto revert1;};
 accept3:;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=Qnil;if (ptr->pos<ptr->len){it=failobj;goto revert4;}bind_aset(bind2,1,_prev);bind_aset(bind2,2,_cur);it=rb_funcall(self,sy_Left_Factor_Or_lb__ti__lp_bin_849e,1,bind2);_prev=bind_aget(bind2,1);;_cur=bind_aget(bind2,2);; __result=it;;

;goto accept6;revert4:;  goto alt1_3; accept6:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass2;};
 accept1:;
it=__result; _autovar_3=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                it=_autovar_3; _autovar_4=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result_2=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto fail;} break;
}
fail: return it;
}
void Init_Left_Factor_c(){ 
 cls_Left_Factor=rb_define_class("Left_Factor",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    mem_Left_Factor=memo_init();memo_val_Left_Factor=Data_Wrap_Struct(rb_cObject,memo_mark,memo_free,mem_Left_Factor);rb_global_variable(&memo_val_Left_Factor);
rb_define_method(cls_Left_Factor,"profile_report",profile_report_Left_Factor,0);
switchhash_Left_Factor_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_1);;
switchhash_Left_Factor_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_2);;
switchhash_Left_Factor_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_3);;
switchhash_Left_Factor_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_4);;
switchhash_Left_Factor_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_5);;
switchhash_Left_Factor_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_6);;
switchhash_Left_Factor_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_7);;
switchhash_Left_Factor_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Left_Factor_8);;
sy_Left_Factor_Bind_lb_src_66c4=rb_intern("Left_Factor_Bind_lb_src_66c4");
sy_Left_Factor_Or_lb__ti__lp_bin_849e=rb_intern("Left_Factor_Or_lb__ti__lp_bin_849e");
sy_Left_Factor_Seq_lb__lb_bin_4ce0=rb_intern("Left_Factor_Seq_lb__lb_bin_4ce0");
sy_Left_Factor__lb_bind_lb_1_rb__1906=rb_intern("Left_Factor__lb_bind_lb_1_rb__1906");
sy_Left_Factor__lp_bind_lb_1_rb__34a7=rb_intern("Left_Factor__lp_bind_lb_1_rb__34a7");
sy_Left_Factor__lp_bind_lb_1_rb__b868=rb_intern("Left_Factor__lp_bind_lb_1_rb__b868");
sy_Left_Factor__lp_src_dot_cla_2024=rb_intern("Left_Factor__lp_src_dot_cla_2024");
sy_Left_Factor_bind_lb_1_rb__lt__7b20=rb_intern("Left_Factor_bind_lb_1_rb__lt__7b20");
sy_Left_Factor_bind_lb_1_rb__pl__4651=rb_intern("Left_Factor_bind_lb_1_rb__pl__4651");
sy_Left_Factor_bind_lb_1_rb__pl__4c53=rb_intern("Left_Factor_bind_lb_1_rb__pl__4c53");
sy_Left_Factor_bind_lb_1_rb__sp__6af0=rb_intern("Left_Factor_bind_lb_1_rb__sp__6af0");
sy_Left_Factor_first_lp_bi_150a=rb_intern("Left_Factor_first_lp_bi_150a");
sy_Left_Factor_if_sp_bind_lb__1bed=rb_intern("Left_Factor_if_sp_bind_lb__1bed");
sy_Left_Factor_src_dot_expr_ef77=rb_intern("Left_Factor_src_dot_expr_ef77");
                    rb_define_method(cls_Left_Factor,"binds",Left_Factor_binds,2);
rb_define_method(cls_Left_Factor,"factor",Left_Factor_factor,3);
rb_define_method(cls_Left_Factor,"first",Left_Factor_first,1);
rb_define_method(cls_Left_Factor,"rest",Left_Factor_rest,2);
rb_define_method(cls_Left_Factor,"root",Left_Factor_root,0);
rb_define_method(cls_Left_Factor,"traverse",Left_Factor_traverse,0);
rb_define_method(cls_Left_Factor,"traverse_item",Left_Factor_traverse_item,0);
rb_define_method(cls_Left_Factor,"visit",Left_Factor_visit,0);
                    }
