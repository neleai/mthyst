#include "cthyst.h"
#include "memo.c"
VALUE cls_DetectCalls;
VALUE AmethystCore_anything(VALUE self );
VALUE DetectCalls_root(VALUE self );
VALUE DetectCalls_traverse(VALUE self );
VALUE DetectCalls_traverse_item(VALUE self );
VALUE DetectCalls_visit(VALUE self );
VALUE switchhash_DetectCalls_1;
VALUE switchhash_DetectCalls_2;
VALUE switchhash_DetectCalls_3;
VALUE switchhash_DetectCalls_4;
VALUE switchhash_DetectCalls_5;
VALUE switchhash_DetectCalls_6;
static VALUE sy_DetectCalls__at_calls_7f81;
static VALUE sy_DetectCalls__at_calls_eq__le__39e9;
static VALUE sy_DetectCalls__at_calls_lb_b_e709;
static VALUE sy_DetectCalls__lp_src_dot_ins_a413;
VALUE profile_report_DetectCalls(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  return Qnil;}VALUE DetectCalls_root(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil;VALUE bind2=bind_new2(0);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                   it=rb_funcall(self,sy_DetectCalls__at_calls_eq__le__39e9,1,bind2);  it=DetectCalls_traverse(self ); if (it==failobj){it=failobj;goto pass1;}it=rb_funcall(self,sy_DetectCalls__at_calls_7f81,1,bind2); _autovar_2=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_2; __result=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto fail;} break;
}
fail: return it;
}
VALUE DetectCalls_traverse(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,__result=Qnil;VALUE bind2=bind_new2(0);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);ptr->pos=ptr->len;it=rb_funcall(self,sy_DetectCalls__lp_src_dot_ins_a413,1,bind2); _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   it=rb_ary_new3(0); _autovar_3=it;;
int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=DetectCalls_traverse_item(self ); if (it==failobj){it=failobj;goto revert1;} _autovar_4=it;;
it=AmethystCore_append(self,_autovar_3,_autovar_4);
;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=2; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; stop1=1;
;goto accept3;revert2:;  goto alt1_3; accept3:;

;ptr->branches-=1; goto accept1;
alt1_3: ptr->pos=oldpos1;ptr->branches-=1;if (1){it=failobj;goto pass2;};
 accept1:;
 } it=_autovar_3; _autovar_5=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto pass1;}
                   success2: *ptr=oldpass2;
                it=_autovar_5; _autovar_6=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_6; __result=it;;

fail: return it;
}
VALUE DetectCalls_traverse_item(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil;VALUE bind2=bind_new2(0);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=DetectCalls_visit(self ); if (it==failobj){it=failobj;goto revert1;} __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=3; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=DetectCalls_traverse(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;

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
                     it=DetectCalls_traverse(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_2=it;;

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
case 1/*Array*/:; switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=DetectCalls_visit(self ); if (it==failobj){it=failobj;goto revert6;} __result=it;;

;goto accept9;revert6:;  goto alt3_2; accept9:;

;ptr->branches-=2; goto accept8;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _autovar_4=it;;
int stop1=0; while(!stop1){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=DetectCalls_traverse_item(self ); if (it==failobj){it=failobj;goto revert8;} _autovar_5=it;;
it=AmethystCore_append(self,_autovar_4,_autovar_5);
;goto accept12;revert8:;  goto alt4_2; accept12:;

;ptr->branches-=2; goto accept11;
alt4_2: ptr->pos=oldpos4;ptr->branches-=1; stop1=1;
;goto accept13;revert9:;  goto alt4_3; accept13:;

;ptr->branches-=1; goto accept11;
alt4_3: ptr->pos=oldpos4;ptr->branches-=1;if (1){it=failobj;goto pass3;};
 accept11:;
 } it=_autovar_4; _autovar_6=it;;

                   goto success3;
                   pass3: *ptr=oldpass3;if (1){it=failobj;goto revert7;}
                   success3: *ptr=oldpass3;
                it=_autovar_6; __result=it;;

;goto accept10;revert7:;  goto alt3_3; accept10:;

;ptr->branches-=1; goto accept8;
alt3_3: ptr->pos=oldpos3;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept8:;
 break;
case 1/*Object*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _autovar_4=it;;
int stop2=0; while(!stop2){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=DetectCalls_traverse_item(self ); if (it==failobj){it=failobj;goto revert10;} _autovar_5=it;;
it=AmethystCore_append(self,_autovar_4,_autovar_5);
;goto accept15;revert10:;  goto alt5_2; accept15:;

;ptr->branches-=2; goto accept14;
alt5_2: ptr->pos=oldpos5;ptr->branches-=1; stop2=1;
;goto accept16;revert11:;  goto alt5_3; accept16:;

;ptr->branches-=1; goto accept14;
alt5_3: ptr->pos=oldpos5;ptr->branches-=1;if (1){it=failobj;goto pass4;};
 accept14:;
 } it=_autovar_4; _autovar_6=it;;

                   goto success4;
                   pass4: *ptr=oldpass4;if (1){it=failobj;goto fail;}
                   success4: *ptr=oldpass4;
                it=_autovar_6; __result=it;;
 break;
} break;
case 2/*Object*/:; switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=DetectCalls_visit(self ); if (it==failobj){it=failobj;goto revert12;} __result=it;;

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
VALUE DetectCalls_visit(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_name=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_DetectCalls_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _name=it;;
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
 } bind_aset(bind2,1,_name);it=rb_funcall(self,sy_DetectCalls__at_calls_lb_b_e709,1,bind2);_name=bind_aget(bind2,1);;it=_autovar_2; _autovar_4=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto fail;} break;
}
fail: return it;
}
void Init_DetectCalls_c(){ 
 cls_DetectCalls=rb_define_class("DetectCalls",rb_const_get(rb_cObject,rb_intern("Visitor"))); 
                    failobj=rb_eval_string("FAIL");
                    rb_define_method(cls_DetectCalls,"profile_report",profile_report_DetectCalls,0);
switchhash_DetectCalls_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_DetectCalls_1);;
switchhash_DetectCalls_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_DetectCalls_2);;
switchhash_DetectCalls_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_DetectCalls_3);;
switchhash_DetectCalls_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_DetectCalls_4);;
switchhash_DetectCalls_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_DetectCalls_5);;
switchhash_DetectCalls_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_DetectCalls_6);;
sy_DetectCalls__at_calls_7f81=rb_intern("DetectCalls__at_calls_7f81");
sy_DetectCalls__at_calls_eq__le__39e9=rb_intern("DetectCalls__at_calls_eq__le__39e9");
sy_DetectCalls__at_calls_lb_b_e709=rb_intern("DetectCalls__at_calls_lb_b_e709");
sy_DetectCalls__lp_src_dot_ins_a413=rb_intern("DetectCalls__lp_src_dot_ins_a413");
                    rb_define_method(cls_DetectCalls,"root",DetectCalls_root,0);
rb_define_method(cls_DetectCalls,"traverse",DetectCalls_traverse,0);
rb_define_method(cls_DetectCalls,"traverse_item",DetectCalls_traverse_item,0);
rb_define_method(cls_DetectCalls,"visit",DetectCalls_visit,0);
                    }
