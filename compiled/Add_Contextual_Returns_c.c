#include "cthyst.h"
#include "memo.c"
VALUE cls_Add_Contextual_Returns;
VALUE Add_Contextual_Returns_root(VALUE self );
VALUE Add_Contextual_Returns_traverse(VALUE self );
VALUE Add_Contextual_Returns_traverse_item(VALUE self );
VALUE Add_Contextual_Returns_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Contextual_Returns_1;
VALUE switchhash_Add_Contextual_Returns_2;
VALUE switchhash_Add_Contextual_Returns_3;
VALUE switchhash_Add_Contextual_Returns_4;
VALUE switchhash_Add_Contextual_Returns_5;
VALUE switchhash_Add_Contextual_Returns_6;
static VALUE sy_Add_Contextual_Returns_Seq_lb_src;
static VALUE sy_Add_Contextual_Returns__at__contex_5f56;
static VALUE sy_Add_Contextual_Returns__at__contex_cdb3;
static VALUE sy_Add_Contextual_Returns__at__contex_d6d5;
static VALUE sy_Add_Contextual_Returns__lb_bind_lb_1_rb__1469;
static VALUE sy_Add_Contextual_Returns__lp__at_cargs_lb__e1d6;
static VALUE sy_Add_Contextual_Returns__lp_src_dot_cla_2024;
static VALUE sy_Add_Contextual_Returns_bind_lb_1_rb__eq__e05f;
static VALUE sy_Add_Contextual_Returns_bind_lb_1_rb__lb__ec72;
static VALUE sy_Add_Contextual_Returns_bind_lb_1_rb__lt__7b20;
static VALUE sy_Add_Contextual_Returns_bind_lb_1_rb__sp__6af0;
static VALUE sy_Add_Contextual_Returns_if_sp_bind_lb__1bed;
static VALUE sy_Add_Contextual_Returns_src_dot_dup_d768;
VALUE profile_report_Add_Contextual_Returns(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  return Qnil;}VALUE Add_Contextual_Returns_root(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_t=Qnil,__result=Qnil,_autovar_6=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_5f56,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_2=bind_aget(bind2,2);;it=rb_funcall(self,sy_Add_Contextual_Returns_src_dot_dup_d768,1,bind2); _autovar_3=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar_3;ptr->len=1;
                   switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_4=it;;
 break;
case 1/*Object*/:; if (1){it=failobj;goto pass1;} break;
}
                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; _autovar_5=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_5);
                   bind_aset(bind2,1,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__lb__ec72,1,bind2);_autovar_2=bind_aget(bind2,1);;bind_aset(bind2,1,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_d6d5,1,bind2);_autovar_2=bind_aget(bind2,1);;  it=Add_Contextual_Returns_traverse(self ); if (it==failobj){it=failobj;goto pass2;} _t=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto fail;}
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,_t);bind_aset(bind2,2,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__eq__e05f,1,bind2);_t=bind_aget(bind2,1);;_autovar_2=bind_aget(bind2,2);; __result=it;;
 _autovar_6=it;;
bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_6);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_cdb3,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_6=bind_aget(bind2,2);;
fail: return it;
}
VALUE Add_Contextual_Returns_traverse(VALUE self ){VALUE vals[0]; VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);ptr->pos=ptr->len;it=rb_ary_new3(0); _nvars=it;;
it=rb_funcall(self,sy_Add_Contextual_Returns__lp_src_dot_cla_2024,1,bind2); _ivars=it;;
it=_ivars; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=_autovar;ptr->len=1;
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_2);
                   int stop1=0; while(!stop1){ int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Add_Contextual_Returns_traverse_item(self ); if (it==failobj){it=failobj;goto revert1;} _it=it;;
bind_aset(bind2,1,_nvars);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__sp__6af0,1,bind2);_nvars=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
                bind_aset(bind2,1,_ivars);bind_aset(bind2,2,_nvars);it=rb_funcall(self,sy_Add_Contextual_Returns_if_sp_bind_lb__1bed,1,bind2);_ivars=bind_aget(bind2,1);;_nvars=bind_aget(bind2,2);; __result=it;;

fail: return it;
}
VALUE Add_Contextual_Returns_traverse_item(VALUE self ){VALUE vals[0]; VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Contextual_Return*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=3;   it=Add_Contextual_Returns_visit(self ); if (it==failobj){it=failobj;goto revert1;} __result=it;;

;goto accept2;revert1:;  goto alt1_2; accept2:;

;ptr->branches-=3; goto accept1;
alt1_2: ptr->pos=oldpos1;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Add_Contextual_Returns_traverse(self ); if (it==failobj){it=failobj;goto pass1;} _autovar_2=it;;

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
case 2/*Object*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar);
                     it=Add_Contextual_Returns_traverse(self ); if (it==failobj){it=failobj;goto pass2;} _autovar_2=it;;

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
case 1/*Array*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Contextual_Return*/:; int oldpos3=ptr->pos;int cut3=0;
alt3_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Add_Contextual_Returns_visit(self ); if (it==failobj){it=failobj;goto revert6;} __result=it;;

;goto accept9;revert6:;  goto alt3_2; accept9:;

;ptr->branches-=2; goto accept8;
alt3_2: ptr->pos=oldpos3;ptr->branches-=1; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop1=0; while(!stop1){ int oldpos4=ptr->pos;int cut4=0;
alt4_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Add_Contextual_Returns_traverse_item(self ); if (it==failobj){it=failobj;goto revert8;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
case 2/*Object*/:; it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   it=rb_ary_new3(0); _ar=it;;
int stop2=0; while(!stop2){ int oldpos5=ptr->pos;int cut5=0;
alt5_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Add_Contextual_Returns_traverse_item(self ); if (it==failobj){it=failobj;goto revert10;} _it=it;;
bind_aset(bind2,1,_ar);bind_aset(bind2,2,_it);it=rb_funcall(self,sy_Add_Contextual_Returns_bind_lb_1_rb__lt__7b20,1,bind2);_ar=bind_aget(bind2,1);;_it=bind_aget(bind2,2);;
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
case 2/*Object*/:; switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:case 1/*Contextual_Return*/:; int oldpos6=ptr->pos;int cut6=0;
alt6_1:if(!ptr->branches)ptr->discard=ptr->pos; ptr->branches+=2;   it=Add_Contextual_Returns_visit(self ); if (it==failobj){it=failobj;goto revert12;} __result=it;;

;goto accept18;revert12:;  goto alt6_2; accept18:;

;ptr->branches-=2; goto accept17;
alt6_2: ptr->pos=oldpos6;ptr->branches-=1;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto revert13;} __result=it;;

;goto accept19;revert13:;  goto alt6_3; accept19:;

;ptr->branches-=1; goto accept17;
alt6_3: ptr->pos=oldpos6;ptr->branches-=1;if (1){it=failobj;goto fail;};
 accept17:;
 break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} __result=it;;
 break;
} break;
}
fail: return it;
}
VALUE Add_Contextual_Returns_visit(VALUE self ){VALUE vals[0]; VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_name=Qnil;VALUE bind2=bind_new2(2);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Returns_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_5f56,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_2=bind_aget(bind2,2);;it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_3=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_3);
                   ptr->pos=ptr->len;it=rb_funcall(self,sy_Add_Contextual_Returns__lp__at_cargs_lb__e1d6,1,bind2);if (it==failobj){it=failobj;goto pass1;};bind_aset(bind2,1,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns_Seq_lb_src,1,bind2);_autovar_2=bind_aget(bind2,1);; _autovar_4=it;;

                   goto success1;
                   pass1: *ptr=oldpass1;if (1){it=failobj;goto fail;}
                   success1: *ptr=oldpass1;
                it=_autovar_4; __result=it;;
 _autovar_5=it;;
bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_5);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_cdb3,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_5=bind_aget(bind2,2);; break;
case 1/*Contextual_Return*/:; bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_5f56,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_2=bind_aget(bind2,2);;it=ptr->ary[ptr->pos];            ;ptr->pos++; _autovar_6=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ame_setsrc2(self,_autovar_6);
                     it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto pass2;} _name=it;;

                   goto success2;
                   pass2: *ptr=oldpass2;if (1){it=failobj;goto fail;}
                   success2: *ptr=oldpass2;
                bind_aset(bind2,1,_autovar_2);bind_aset(bind2,2,_name);it=rb_funcall(self,sy_Add_Contextual_Returns__lb_bind_lb_1_rb__1469,1,bind2);_autovar_2=bind_aget(bind2,1);;_name=bind_aget(bind2,2);; __result=it;;
 _autovar_5=it;;
bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_5);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_cdb3,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_5=bind_aget(bind2,2);; break;
case 2/*Object*/:; bind_aset(bind2,1,_autovar);bind_aset(bind2,2,_autovar_2);it=rb_funcall(self,sy_Add_Contextual_Returns__at__contex_5f56,1,bind2);_autovar=bind_aget(bind2,1);;_autovar_2=bind_aget(bind2,2);;if (1){it=failobj;goto fail;} break;
}
fail: return it;
}
void Init_Add_Contextual_Returns_c(){ 
 cls_Add_Contextual_Returns=rb_define_class("Add_Contextual_Returns",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
                    failobj=rb_eval_string("FAIL");
                    rb_define_method(cls_Add_Contextual_Returns,"profile_report",profile_report_Add_Contextual_Returns,0);
switchhash_Add_Contextual_Returns_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_global_variable(&switchhash_Add_Contextual_Returns_1);;
switchhash_Add_Contextual_Returns_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Return\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Add_Contextual_Returns_2);;
switchhash_Add_Contextual_Returns_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Add_Contextual_Returns_3);;
switchhash_Add_Contextual_Returns_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Return\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Add_Contextual_Returns_4);;
switchhash_Add_Contextual_Returns_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Return\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Add_Contextual_Returns_5);;
switchhash_Add_Contextual_Returns_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Return\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Add_Contextual_Returns_6);;
sy_Add_Contextual_Returns_Seq_lb_src=rb_intern("Add_Contextual_Returns_Seq_lb_src");
sy_Add_Contextual_Returns__at__contex_5f56=rb_intern("Add_Contextual_Returns__at__contex_5f56");
sy_Add_Contextual_Returns__at__contex_cdb3=rb_intern("Add_Contextual_Returns__at__contex_cdb3");
sy_Add_Contextual_Returns__at__contex_d6d5=rb_intern("Add_Contextual_Returns__at__contex_d6d5");
sy_Add_Contextual_Returns__lb_bind_lb_1_rb__1469=rb_intern("Add_Contextual_Returns__lb_bind_lb_1_rb__1469");
sy_Add_Contextual_Returns__lp__at_cargs_lb__e1d6=rb_intern("Add_Contextual_Returns__lp__at_cargs_lb__e1d6");
sy_Add_Contextual_Returns__lp_src_dot_cla_2024=rb_intern("Add_Contextual_Returns__lp_src_dot_cla_2024");
sy_Add_Contextual_Returns_bind_lb_1_rb__eq__e05f=rb_intern("Add_Contextual_Returns_bind_lb_1_rb__eq__e05f");
sy_Add_Contextual_Returns_bind_lb_1_rb__lb__ec72=rb_intern("Add_Contextual_Returns_bind_lb_1_rb__lb__ec72");
sy_Add_Contextual_Returns_bind_lb_1_rb__lt__7b20=rb_intern("Add_Contextual_Returns_bind_lb_1_rb__lt__7b20");
sy_Add_Contextual_Returns_bind_lb_1_rb__sp__6af0=rb_intern("Add_Contextual_Returns_bind_lb_1_rb__sp__6af0");
sy_Add_Contextual_Returns_if_sp_bind_lb__1bed=rb_intern("Add_Contextual_Returns_if_sp_bind_lb__1bed");
sy_Add_Contextual_Returns_src_dot_dup_d768=rb_intern("Add_Contextual_Returns_src_dot_dup_d768");
                    rb_define_method(cls_Add_Contextual_Returns,"root",Add_Contextual_Returns_root,0);
rb_define_method(cls_Add_Contextual_Returns,"traverse",Add_Contextual_Returns_traverse,0);
rb_define_method(cls_Add_Contextual_Returns,"traverse_item",Add_Contextual_Returns_traverse_item,0);
rb_define_method(cls_Add_Contextual_Returns,"visit",Add_Contextual_Returns_visit,0);
                    }
