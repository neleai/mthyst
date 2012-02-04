#include "cthyst.h"
VALUE cls_Traverser_Clone2;
VALUE AmethystCore_anything(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE Traverser_Clone2_traverse_item(VALUE self );
VALUE switchhash_Traverser_Clone2_1;
static VALUE sy_Traverser_Clone2__at_changed_5352;
static VALUE sy_Traverser_Clone2__at_changed_b885;
static VALUE sy_Traverser_Clone2__at_changed_c681;
static VALUE sy_Traverser_Clone2__lp_bind_lb_1_rb__ee3d;
static VALUE sy_Traverser_Clone2__lp_src_dot_ins_6a75;
static VALUE sy_Traverser_Clone2_bind_lb_1_rb__lt__7b20;
static VALUE sy_Traverser_Clone2_if_sp_bind_lb__8e0b;
static VALUE sy_Traverser_Clone2_src_25d9;
static VALUE sy_visit;
VALUE Traverser_Clone2_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7;VALUE var8;VALUE var9; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Traverser_Clone2__at_changed_c681,1,bind2); var0/*oldchanged*/=it;;
it=rb_funcall(self,sy_Traverser_Clone2_src_25d9,1,bind2); var1/*this*/=it;;
it=Qnil; var2/*clon*/=it;;
it=Qfalse; var3/*changed*/=it;;
it=rb_funcall(self,sy_Traverser_Clone2__lp_src_dot_ins_6a75,1,bind2); var4/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var4/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var5/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var5/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   int oldpos1;  while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); var6/*autovar*/=it;;
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var6/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=AmethystCore_anything(self ); FAILTEST(pass3); var7/*key*/=it;;
it=rb_funcall(self,sy_Traverser_Clone2__at_changed_b885,1,bind2);  it=Traverser_Clone2_traverse_item(self ); FAILTEST(pass3); var8/*val*/=it;;
bind_aset(bind2,1,var2/*clon*/);bind_aset(bind2,2,var1/*this*/);bind_aset(bind2,3,var3/*changed*/);bind_aset(bind2,4,var7/*key*/);bind_aset(bind2,5,var8/*val*/);it=rb_funcall(self,sy_Traverser_Clone2__lp_bind_lb_1_rb__ee3d,1,bind2);var2/*clon*/=bind_aget(bind2,1);;var1/*this*/=bind_aget(bind2,2);;var3/*changed*/=bind_aget(bind2,3);;var7/*key*/=bind_aget(bind2,4);;var8/*val*/=bind_aget(bind2,5);;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
                   goto success3;
                   pass3: *ptr=oldpass3; goto break1;
                   success3: *ptr=oldpass3;
                 } break1: ptr->pos=oldpos1;   it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                bind_aset(bind2,1,var3/*changed*/);bind_aset(bind2,2,var2/*clon*/);bind_aset(bind2,3,var0/*oldchanged*/);it=rb_funcall(self,sy_Traverser_Clone2_if_sp_bind_lb__8e0b,1,bind2);var3/*changed*/=bind_aget(bind2,1);;var2/*clon*/=bind_aget(bind2,2);;var0/*oldchanged*/=bind_aget(bind2,3);; var9/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Traverser_Clone2_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6;VALUE var7; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Traverser_Clone2_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=rb_funcall(self,sy_visit,0); FAILTEST(alt1_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Traverser_Clone2__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var2/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var2/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Traverser_Clone2_traverse(self ); FAILTEST(pass1); var3/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=var3/*autovar*/; var1/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var1/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=rb_funcall(self,sy_visit,0); FAILTEST(alt2_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Traverser_Clone2__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var4/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var4/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var5/*ar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Traverser_Clone2_traverse_item(self ); FAILTEST(break1); var6/*it*/=it;;
bind_aset(bind2,1,var5/*ar*/);bind_aset(bind2,2,var6/*it*/);it=rb_funcall(self,sy_Traverser_Clone2_bind_lb_1_rb__lt__7b20,1,bind2);var5/*ar*/=bind_aget(bind2,1);;var6/*it*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos3;   it=var5/*ar*/; var7/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_3;
                   success2: *ptr=oldpass2;
                it=var7/*autovar*/; var1/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var1/*_result*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=rb_funcall(self,sy_visit,0); FAILTEST(alt3_2); var0/*a*/=it;;
it=rb_funcall(self,sy_Traverser_Clone2__at_changed_5352,1,bind2);it=var0/*a*/; var1/*_result*/=it;;

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var1/*_result*/=it;;

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }VALUE cls_Visitor;
VALUE AmethystCore_anything(VALUE self );
VALUE Visitor_traverse(VALUE self );
VALUE Visitor_traverse_item(VALUE self );
VALUE switchhash_Visitor_1;
static VALUE sy_Visitor__append_lp__d113;
static VALUE sy_Visitor__lp_src_dot_ins_a413;
static VALUE sy_visit;
VALUE Visitor_traverse(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
ptr->pos=ptr->len;it=rb_funcall(self,sy_Visitor__lp_src_dot_ins_a413,1,bind2); var0/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=var0/*autovar*/;ptr->len=1;
                     it=AmethystCore_anything(self ); FAILTEST(pass1); var1/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var2/*autovar*/=it;;
int oldpos1;  while(1){oldpos1=ptr->pos;   it=Visitor_traverse_item(self ); FAILTEST(break1); var3/*autovar*/=it;;
bind_aset(bind2,1,var2/*autovar*/);bind_aset(bind2,2,var3/*autovar*/);it=rb_funcall(self,sy_Visitor__append_lp__d113,1,bind2);var2/*autovar*/=bind_aget(bind2,1);;var3/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos1;   it=var2/*autovar*/; var4/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto pass1;
                   success2: *ptr=oldpass2;
                it=var4/*autovar*/; var5/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto fail;
                   success1: *ptr=oldpass1;
                it=var5/*autovar*/; var6/*_result*/=it;;

return it;
fail: return failobj; }
VALUE Visitor_traverse_item(VALUE self ){VALUE vals[0];  VALUE var0;VALUE var1;VALUE var2;VALUE var3;VALUE var4;VALUE var5;VALUE var6; ;VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch(FIX2LONG(rb_hash_aref(switchhash_Visitor_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=rb_funcall(self,sy_visit,0); FAILTEST(alt1_2); var0/*_result*/=it;;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=ame_curobj2(ptr)               ;ptr->pos++; var1/*autovar*/=it;;
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var1/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                     it=Visitor_traverse(self ); FAILTEST(pass1); var2/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
                   goto success1;
                   pass1: *ptr=oldpass1; goto alt1_3;
                   success1: *ptr=oldpass1;
                it=var2/*autovar*/; var0/*_result*/=it;;

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); var0/*_result*/=it;;

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;int cut2=0;
alt2_1:;  it=rb_funcall(self,sy_visit,0); FAILTEST(alt2_2); var0/*_result*/=it;;

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=ame_curobj2(ptr)               ;ptr->pos++; var3/*autovar*/=it;;
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
                   ptr->src=var3/*autovar*/; if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
                   it=rb_ary_new3(0); var4/*autovar*/=it;;
int oldpos3;  while(1){oldpos3=ptr->pos;   it=Visitor_traverse_item(self ); FAILTEST(break1); var5/*autovar*/=it;;
bind_aset(bind2,1,var4/*autovar*/);bind_aset(bind2,2,var5/*autovar*/);it=rb_funcall(self,sy_Visitor__append_lp__d113,1,bind2);var4/*autovar*/=bind_aget(bind2,1);;var5/*autovar*/=bind_aget(bind2,2);; } break1: ptr->pos=oldpos3;   it=var4/*autovar*/; var6/*autovar*/=it;;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
                   goto success2;
                   pass2: *ptr=oldpass2; goto alt2_3;
                   success2: *ptr=oldpass2;
                it=var6/*autovar*/; var0/*_result*/=it;;

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); var0/*_result*/=it;;

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;int cut3=0;
alt3_1:;  it=rb_funcall(self,sy_visit,0); FAILTEST(alt3_2); var0/*_result*/=it;;

;goto accept4;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); var0/*_result*/=it;;

;goto accept4;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
}
return it;
fail: return failobj; }
void Init_traverser_c(){ 
 cls_Traverser_Clone2=rb_define_class("Traverser_Clone2",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Traverser_Clone2_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Traverser_Clone2_1);;
sy_Traverser_Clone2__at_changed_5352=rb_intern("Traverser_Clone2__at_changed_5352");
sy_Traverser_Clone2__at_changed_b885=rb_intern("Traverser_Clone2__at_changed_b885");
sy_Traverser_Clone2__at_changed_c681=rb_intern("Traverser_Clone2__at_changed_c681");
sy_Traverser_Clone2__lp_bind_lb_1_rb__ee3d=rb_intern("Traverser_Clone2__lp_bind_lb_1_rb__ee3d");
sy_Traverser_Clone2__lp_src_dot_ins_6a75=rb_intern("Traverser_Clone2__lp_src_dot_ins_6a75");
sy_Traverser_Clone2_bind_lb_1_rb__lt__7b20=rb_intern("Traverser_Clone2_bind_lb_1_rb__lt__7b20");
sy_Traverser_Clone2_if_sp_bind_lb__8e0b=rb_intern("Traverser_Clone2_if_sp_bind_lb__8e0b");
sy_Traverser_Clone2_src_25d9=rb_intern("Traverser_Clone2_src_25d9");
sy_visit=rb_intern("visit");
                    rb_define_method(cls_Traverser_Clone2,"traverse",Traverser_Clone2_traverse,0);
rb_define_method(cls_Traverser_Clone2,"traverse_item",Traverser_Clone2_traverse_item,0);
                   
 cls_Visitor=rb_define_class("Visitor",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    switchhash_Visitor_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_global_variable(&switchhash_Visitor_1);;
sy_Visitor__append_lp__d113=rb_intern("Visitor__append_lp__d113");
sy_Visitor__lp_src_dot_ins_a413=rb_intern("Visitor__lp_src_dot_ins_a413");
sy_visit=rb_intern("visit");
                    rb_define_method(cls_Visitor,"traverse",Visitor_traverse,0);
rb_define_method(cls_Visitor,"traverse_item",Visitor_traverse_item,0);
                    rb_eval_string("testversiontraverser('14756dd0c8c1aa2c1641ed8057970b5a')");}
