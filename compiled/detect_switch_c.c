#include "cthyst.h"
VALUE cls_First_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE First_Dataflow_first(VALUE self );
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_root(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_First_Dataflow_1;
static VALUE sy_First_Dataflow_Compiler_cb78;
static VALUE sy_First_Dataflow__append_lp__51dc;
static VALUE sy_First_Dataflow__append_lp__7b62;
static VALUE sy_First_Dataflow__append_lp__8bfa;
static VALUE sy_First_Dataflow__append_lp__e6cd;
static VALUE sy_First_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_First_Dataflow__lp_;
static VALUE sy_First_Dataflow__lp_Compile_f25c;
static VALUE sy_First_Dataflow_bind_lb_12_rb__980d;
static VALUE sy_First_Dataflow_bind_lb_12_rb__9ef5;
static VALUE sy_First_Dataflow_bind_lb_17_rb__cd44;
static VALUE sy_First_Dataflow_bind_lb_24_rb__d555;
static VALUE sy_First_Dataflow_bind_lb_28_rb__f78d;
static VALUE sy_First_Dataflow_depends_lp__5009;
static VALUE sy_First_Dataflow_empty;
static VALUE sy_First_Dataflow_lattice_dot__5a9e;
static VALUE sy_analyze;
VALUE First_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(40);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_First_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,5/*name*/,it);
it=rb_funcall(self,sy_First_Dataflow__lp_Compile_f25c,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_First_Dataflow_Compiler_cb78,1,bind);  bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,6/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_2;
	success2: *ptr=oldpass2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,12/*val*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_12_rb__980d,1,bind);  bind_aset(bind,13/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt4_2;
	success5: *ptr=oldpass5;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,15/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__8bfa,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,15/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto alt5_2;
	success6: *ptr=oldpass6;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_First_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*el*/,it);
it=bind_aget(bind,3/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
	goto success8;
	pass8: *ptr=oldpass8; goto break2;
	success8: *ptr=oldpass8;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_12_rb__9ef5,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_First_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}  it=Amethyst_empty(self ); FAILTEST(alt7_3);
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,12/*val*/); bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt6_2;
	success7: *ptr=oldpass7;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,25/*autovar*/,it);
int oldpos11=ptr->pos;
alt9_1:;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos12; while(1){oldpos12=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
	goto success10;
	pass10: *ptr=oldpass10; goto break3;
	success10: *ptr=oldpass10;
  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos12; it=rb_funcall(self,sy_First_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
	goto success9;
	pass9: *ptr=oldpass9; goto alt9_2;
	success9: *ptr=oldpass9;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos11;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos13; while(1){oldpos13=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__51dc,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
	goto success11;
	pass11: *ptr=oldpass11; goto alt9_3;
	success11: *ptr=oldpass11;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos11;goto alt8_2;
 accept9:;

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Char*/:; int oldpos14=ptr->pos;
alt10_1:;  it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos15; while(1){oldpos15=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__51dc,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos15; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
	goto success12;
	pass12: *ptr=oldpass12; goto alt10_2;
	success12: *ptr=oldpass12;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_2: ptr->pos=oldpos14;  it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_3: ptr->pos=oldpos14;goto fail;
 accept10:;
 break;
case 15/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos16=ptr->pos;
alt11_1:;  it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos17; while(1){oldpos17=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass14); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass14;
	goto success14;
	pass14: *ptr=oldpass14; goto break6;
	success14: *ptr=oldpass14;
  } break6: ame_setstop(self,Qnil); ptr->pos=oldpos17; it=rb_funcall(self,sy_First_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
	goto success13;
	pass13: *ptr=oldpass13; goto alt11_2;
	success13: *ptr=oldpass13;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_2: ptr->pos=oldpos16;  it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_3: ptr->pos=oldpos16;goto fail;
 accept11:;
 break;
case 16/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos18=ptr->pos;
alt12_1:;  it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos19; while(1){oldpos19=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,37/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,37/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass16); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_First_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=rb_funcall(self,sy_First_Dataflow__append_lp__7b62,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass16;
	goto success16;
	pass16: *ptr=oldpass16; goto break7;
	success16: *ptr=oldpass16;
  } break7: ame_setstop(self,Qnil); ptr->pos=oldpos19; it=rb_funcall(self,sy_First_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,39/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
	goto success15;
	pass15: *ptr=oldpass15; goto alt12_2;
	success15: *ptr=oldpass15;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_2: ptr->pos=oldpos18;  it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_3: ptr->pos=oldpos18;goto fail;
 accept12:;
 break;
case 17/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_First_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE First_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_First_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=First_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE First_Dataflow_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*x*/,it);
 it=bind_aget(bind,0/*x*/); arg0=it; it=rb_funcall(self,sy_analyze,1,arg0); FAILTEST(fail); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE First_Dataflow_value(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*x*/,it);
it=rb_funcall(self,sy_First_Dataflow_depends_lp__5009,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Sizes_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Sizes_Dataflow_first(VALUE self );
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self );
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Sizes_Dataflow_1;
VALUE switchhash_Sizes_Dataflow_2;
VALUE switchhash_Sizes_Dataflow_3;
static VALUE sy_Sizes_Dataflow_Compiler_cb78;
static VALUE sy_Sizes_Dataflow__append_lp__51dc;
static VALUE sy_Sizes_Dataflow__append_lp__7b62;
static VALUE sy_Sizes_Dataflow__append_lp__8bfa;
static VALUE sy_Sizes_Dataflow__append_lp__e6cd;
static VALUE sy_Sizes_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Sizes_Dataflow__lp_;
static VALUE sy_Sizes_Dataflow__lp_Compile_f25c;
static VALUE sy_Sizes_Dataflow_bind_lb_12_rb__980d;
static VALUE sy_Sizes_Dataflow_bind_lb_12_rb__9ef5;
static VALUE sy_Sizes_Dataflow_bind_lb_17_rb__cd44;
static VALUE sy_Sizes_Dataflow_bind_lb_24_rb__d555;
static VALUE sy_Sizes_Dataflow_bind_lb_28_rb__f78d;
static VALUE sy_Sizes_Dataflow_empty;
static VALUE sy_Sizes_Dataflow_lattice_dot__5a9e;
static VALUE sy_Sizes_Dataflow_lattice_dot__e0e5;
static VALUE sy_Sizes_Dataflow_lattice_lb__cef9;
static VALUE sy_Sizes_Dataflow_lattice_lb__fdee;
VALUE Sizes_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_2;
	success2: *ptr=oldpass2;
switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
 break;
case 1/*Object*/:; goto alt2_2; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto alt2_2;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__cef9,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... 'b':;case 'd' ... 'q':;case 's' ... UC(255):; goto pass4; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass4; else ptr->pos+=4; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass4; else ptr->pos+=7; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass4; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt2_3;
	success4: *ptr=oldpass4;
ptr->pos=ptr->len;it=rb_funcall(self,sy_Sizes_Dataflow_lattice_lb__fdee,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass5; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass5; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt2_4;
	success5: *ptr=oldpass5;
it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,10/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,10/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Sizes_Dataflow_first_Sizes_Dataflow(self ); FAILTEST(fail); bind_aset(bind,10/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_first_Sizes_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(40);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Sizes_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,5/*name*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__lp_Compile_f25c,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Sizes_Dataflow_Compiler_cb78,1,bind);  bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,6/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_2;
	success2: *ptr=oldpass2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,12/*val*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_12_rb__980d,1,bind);  bind_aset(bind,13/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt4_2;
	success5: *ptr=oldpass5;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,15/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__8bfa,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,15/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto alt5_2;
	success6: *ptr=oldpass6;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Sizes_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*el*/,it);
it=bind_aget(bind,3/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
	goto success8;
	pass8: *ptr=oldpass8; goto break2;
	success8: *ptr=oldpass8;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_12_rb__9ef5,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Sizes_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}  it=Amethyst_empty(self ); FAILTEST(alt7_3);
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,12/*val*/); bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt6_2;
	success7: *ptr=oldpass7;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,25/*autovar*/,it);
int oldpos11=ptr->pos;
alt9_1:;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos12; while(1){oldpos12=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
	goto success10;
	pass10: *ptr=oldpass10; goto break3;
	success10: *ptr=oldpass10;
  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos12; it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
	goto success9;
	pass9: *ptr=oldpass9; goto alt9_2;
	success9: *ptr=oldpass9;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos11;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos13; while(1){oldpos13=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__51dc,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
	goto success11;
	pass11: *ptr=oldpass11; goto alt9_3;
	success11: *ptr=oldpass11;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos11;goto alt8_2;
 accept9:;

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Char*/:; int oldpos14=ptr->pos;
alt10_1:;  it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos15; while(1){oldpos15=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__51dc,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos15; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
	goto success12;
	pass12: *ptr=oldpass12; goto alt10_2;
	success12: *ptr=oldpass12;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_2: ptr->pos=oldpos14;  it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_3: ptr->pos=oldpos14;goto fail;
 accept10:;
 break;
case 15/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos16=ptr->pos;
alt11_1:;  it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos17; while(1){oldpos17=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass14); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass14;
	goto success14;
	pass14: *ptr=oldpass14; goto break6;
	success14: *ptr=oldpass14;
  } break6: ame_setstop(self,Qnil); ptr->pos=oldpos17; it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
	goto success13;
	pass13: *ptr=oldpass13; goto alt11_2;
	success13: *ptr=oldpass13;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_2: ptr->pos=oldpos16;  it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_3: ptr->pos=oldpos16;goto fail;
 accept11:;
 break;
case 16/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos18=ptr->pos;
alt12_1:;  it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos19; while(1){oldpos19=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,37/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,37/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass16); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow__append_lp__7b62,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass16;
	goto success16;
	pass16: *ptr=oldpass16; goto break7;
	success16: *ptr=oldpass16;
  } break7: ame_setstop(self,Qnil); ptr->pos=oldpos19; it=rb_funcall(self,sy_Sizes_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,39/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
	goto success15;
	pass15: *ptr=oldpass15; goto alt12_2;
	success15: *ptr=oldpass15;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_2: ptr->pos=oldpos18;  it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_3: ptr->pos=oldpos18;goto fail;
 accept12:;
 break;
case 17/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Sizes_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Sizes_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Sizes_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=Sizes_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Switch_Char_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Char_Dataflow_first(VALUE self );
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self );
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Char_Dataflow_1;
VALUE switchhash_Switch_Char_Dataflow_2;
VALUE switchhash_Switch_Char_Dataflow_3;
VALUE switchhash_Switch_Char_Dataflow_4;
static VALUE sy_Switch_Char_Dataflow_Compiler_cb78;
static VALUE sy_Switch_Char_Dataflow__append_lp__51dc;
static VALUE sy_Switch_Char_Dataflow__append_lp__7b62;
static VALUE sy_Switch_Char_Dataflow__append_lp__8bfa;
static VALUE sy_Switch_Char_Dataflow__append_lp__e6cd;
static VALUE sy_Switch_Char_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Char_Dataflow__lp_;
static VALUE sy_Switch_Char_Dataflow__lp_Compile_f25c;
static VALUE sy_Switch_Char_Dataflow_bind_lb_12_rb__980d;
static VALUE sy_Switch_Char_Dataflow_bind_lb_12_rb__9ef5;
static VALUE sy_Switch_Char_Dataflow_bind_lb_17_rb__cd44;
static VALUE sy_Switch_Char_Dataflow_bind_lb_24_rb__d555;
static VALUE sy_Switch_Char_Dataflow_bind_lb_28_rb__f78d;
static VALUE sy_Switch_Char_Dataflow_empty;
static VALUE sy_Switch_Char_Dataflow_firstcha_7cc4;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Char_Dataflow_lattice_dot__e0e5;
static VALUE sy_Switch_Char_Dataflow_regchar_lp__1c32;
VALUE Switch_Char_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(13);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass2; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_2;
	success2: *ptr=oldpass2;
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
 break;
case 1/*Object*/:; goto alt2_2; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,6/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto alt2_2;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Switch_Char_Dataflow_firstcha_7cc4,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass4; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass4; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt2_3;
	success4: *ptr=oldpass4;
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,9/*autovar*/,it);
 break;
case 1/*Object*/:; goto alt2_3; break;
}cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass5); bind_aset(bind,6/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt2_3;
	success5: *ptr=oldpass5;
it=rb_funcall(self,sy_Switch_Char_Dataflow_regchar_lp__1c32,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass6);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case 'b' ... UC(255):; goto pass6; break;
case 'a' ... 'a':;   it=AmethystCore_anything(self ); FAILTEST(pass6);if (strncmp(ame_curstr2(ptr),"nything",7)) goto pass6; else ptr->pos+=7; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto alt2_4;
	success6: *ptr=oldpass6;
it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__e0e5,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass7);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass7; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass7);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass7; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt2_5;
	success7: *ptr=oldpass7;
it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,7/*autovar*/,it);

;goto accept2;
alt2_5: ptr->pos=oldpos2;goto pass1;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,12/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,12/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Switch_Char_Dataflow_first_Switch_Char_Dataflow(self ); FAILTEST(fail); bind_aset(bind,12/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_first_Switch_Char_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(40);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Char_Dataflow_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,5/*name*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_Compile_f25c,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Switch_Char_Dataflow_Compiler_cb78,1,bind);  bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,6/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_2;
	success2: *ptr=oldpass2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,12/*val*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_12_rb__980d,1,bind);  bind_aset(bind,13/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt4_2;
	success5: *ptr=oldpass5;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,15/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__8bfa,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,15/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto alt5_2;
	success6: *ptr=oldpass6;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Switch_Char_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*el*/,it);
it=bind_aget(bind,3/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
	goto success8;
	pass8: *ptr=oldpass8; goto break2;
	success8: *ptr=oldpass8;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_12_rb__9ef5,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Switch_Char_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}  it=Amethyst_empty(self ); FAILTEST(alt7_3);
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,12/*val*/); bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt6_2;
	success7: *ptr=oldpass7;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,25/*autovar*/,it);
int oldpos11=ptr->pos;
alt9_1:;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos12; while(1){oldpos12=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
	goto success10;
	pass10: *ptr=oldpass10; goto break3;
	success10: *ptr=oldpass10;
  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos12; it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
	goto success9;
	pass9: *ptr=oldpass9; goto alt9_2;
	success9: *ptr=oldpass9;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos11;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos13; while(1){oldpos13=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__51dc,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
	goto success11;
	pass11: *ptr=oldpass11; goto alt9_3;
	success11: *ptr=oldpass11;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos11;goto alt8_2;
 accept9:;

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Char*/:; int oldpos14=ptr->pos;
alt10_1:;  it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos15; while(1){oldpos15=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__51dc,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos15; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
	goto success12;
	pass12: *ptr=oldpass12; goto alt10_2;
	success12: *ptr=oldpass12;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_2: ptr->pos=oldpos14;  it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_3: ptr->pos=oldpos14;goto fail;
 accept10:;
 break;
case 15/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos16=ptr->pos;
alt11_1:;  it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos17; while(1){oldpos17=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass14); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass14;
	goto success14;
	pass14: *ptr=oldpass14; goto break6;
	success14: *ptr=oldpass14;
  } break6: ame_setstop(self,Qnil); ptr->pos=oldpos17; it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
	goto success13;
	pass13: *ptr=oldpass13; goto alt11_2;
	success13: *ptr=oldpass13;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_2: ptr->pos=oldpos16;  it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_3: ptr->pos=oldpos16;goto fail;
 accept11:;
 break;
case 16/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos18=ptr->pos;
alt12_1:;  it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos19; while(1){oldpos19=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,37/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,37/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass16); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow__append_lp__7b62,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass16;
	goto success16;
	pass16: *ptr=oldpass16; goto break7;
	success16: *ptr=oldpass16;
  } break7: ame_setstop(self,Qnil); ptr->pos=oldpos19; it=rb_funcall(self,sy_Switch_Char_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,39/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
	goto success15;
	pass15: *ptr=oldpass15; goto alt12_2;
	success15: *ptr=oldpass15;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_2: ptr->pos=oldpos18;  it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_3: ptr->pos=oldpos18;goto fail;
 accept12:;
 break;
case 17/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Char_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Char_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Switch_Char_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=Switch_Char_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Switch_Clas_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE Switch_Clas_Dataflow_first(VALUE self );
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self );
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE switchhash_Switch_Clas_Dataflow_1;
VALUE switchhash_Switch_Clas_Dataflow_2;
VALUE switchhash_Switch_Clas_Dataflow_3;
static VALUE sy_Switch_Clas_Dataflow_Compiler_cb78;
static VALUE sy_Switch_Clas_Dataflow__append_lp__51dc;
static VALUE sy_Switch_Clas_Dataflow__append_lp__7b62;
static VALUE sy_Switch_Clas_Dataflow__append_lp__8bfa;
static VALUE sy_Switch_Clas_Dataflow__append_lp__e6cd;
static VALUE sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53;
static VALUE sy_Switch_Clas_Dataflow__lp_;
static VALUE sy_Switch_Clas_Dataflow__lp_Compile_f25c;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_12_rb__980d;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_12_rb__9ef5;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_17_rb__cd44;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_24_rb__d555;
static VALUE sy_Switch_Clas_Dataflow_bind_lb_28_rb__f78d;
static VALUE sy_Switch_Clas_Dataflow_empty;
static VALUE sy_Switch_Clas_Dataflow_lattice_dot__5a9e;
static VALUE sy_Switch_Clas_Dataflow_lattice_lb__d8d7;
VALUE Switch_Clas_Dataflow_first(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,3/*cls*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass1;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_lb__d8d7,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(alt1_3); bind_aset(bind,5/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:;   it=Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(self ); FAILTEST(fail); bind_aset(bind,5/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_first_Switch_Clas_Dataflow(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(40);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Switch_Clas_Dataflow_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:case 2/*Cut*/:case 3/*Local*/:case 4/*Lookahead*/:case 5/*Pass*/:case 6/*Result*/:case 7/*Stop*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,1/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 8/*Apply*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,5/*name*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_Compile_f25c,1,bind); FAILTEST(pass2);it=rb_funcall(self,sy_Switch_Clas_Dataflow_Compiler_cb78,1,bind);  bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,6/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass3); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_2;
	success2: *ptr=oldpass2;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 9/*Bind*/:; int oldpos3=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass4); bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 10/*Many*/:; int oldpos4=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=First_Dataflow_value(self ); FAILTEST(pass5); bind_aset(bind,12/*val*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_12_rb__980d,1,bind);  bind_aset(bind,13/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt4_2;
	success5: *ptr=oldpass5;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos4;goto fail;
 accept4:;
 break;
case 11/*Or*/:; int oldpos5=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,15/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break1); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__8bfa,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,15/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,18/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto alt5_2;
	success6: *ptr=oldpass6;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos5;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos5;goto fail;
 accept5:;
 break;
case 12/*Seq*/:; int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,19/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,19/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Switch_Clas_Dataflow_lattice_dot__5a9e,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,3/*el*/,it);
it=bind_aget(bind,3/*el*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=First_Dataflow_value(self ); FAILTEST(pass8); bind_aset(bind,21/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8;
	goto success8;
	pass8: *ptr=oldpass8; goto break2;
	success8: *ptr=oldpass8;
it=bind_aget(bind,21/*autovar*/); bind_aset(bind,22/*nev*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_12_rb__9ef5,1,bind);  bind_aset(bind,12/*val*/,it);
int oldpos9=ptr->pos;
alt7_1:;it=rb_funcall(self,sy_Switch_Clas_Dataflow__lp_,1,bind); FAILTEST(alt7_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept7;
alt7_2: ptr->pos=oldpos9;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break2;}  it=Amethyst_empty(self ); FAILTEST(alt7_3);
;goto accept7;
alt7_3: ptr->pos=oldpos9;goto break2;
 accept7:;
 if (ame_getstop(self)!=Qnil){oldpos8=ptr->pos;goto break2;} } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; ptr->pos=ptr->len;it=bind_aget(bind,12/*val*/); bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt6_2;
	success7: *ptr=oldpass7;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto fail;
 accept6:;
 break;
case 13/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos10=ptr->pos;
alt8_1:;  it=AmethystCore_anything(self ); FAILTEST(alt8_2); bind_aset(bind,25/*autovar*/,it);
int oldpos11=ptr->pos;
alt9_1:;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos12; while(1){oldpos12=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass10); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass10;
	goto success10;
	pass10: *ptr=oldpass10; goto break3;
	success10: *ptr=oldpass10;
  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos12; it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
	goto success9;
	pass9: *ptr=oldpass9; goto alt9_2;
	success9: *ptr=oldpass9;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_2: ptr->pos=oldpos11;it=bind_aget(bind,25/*autovar*/); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos13; while(1){oldpos13=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break4); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__51dc,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
	goto success11;
	pass11: *ptr=oldpass11; goto alt9_3;
	success11: *ptr=oldpass11;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept9;
alt9_3: ptr->pos=oldpos11;goto alt8_2;
 accept9:;

;goto accept8;
alt8_2: ptr->pos=oldpos10;  it=AmethystCore_anything(self ); FAILTEST(alt8_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos10;goto fail;
 accept8:;
 break;
case 14/*Switch_Char*/:; int oldpos14=ptr->pos;
alt10_1:;  it=AmethystCore_anything(self ); FAILTEST(alt10_2); bind_aset(bind,32/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,32/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,33/*autovar*/,it);
int oldpos15; while(1){oldpos15=ptr->pos;   it=First_Dataflow_value(self ); FAILTEST(break5); bind_aset(bind,34/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__51dc,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos15; it=bind_aget(bind,33/*autovar*/); bind_aset(bind,17/*it*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_17_rb__cd44,1,bind);  bind_aset(bind,35/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12;
	goto success12;
	pass12: *ptr=oldpass12; goto alt10_2;
	success12: *ptr=oldpass12;
it=bind_aget(bind,35/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_2: ptr->pos=oldpos14;  it=AmethystCore_anything(self ); FAILTEST(alt10_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept10;
alt10_3: ptr->pos=oldpos14;goto fail;
 accept10:;
 break;
case 15/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos16=ptr->pos;
alt11_1:;  it=AmethystCore_anything(self ); FAILTEST(alt11_2); bind_aset(bind,26/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,26/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos17; while(1){oldpos17=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,27/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,27/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass14); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass14); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,30/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__e6cd,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass14;
	goto success14;
	pass14: *ptr=oldpass14; goto break6;
	success14: *ptr=oldpass14;
  } break6: ame_setstop(self,Qnil); ptr->pos=oldpos17; it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,31/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
	goto success13;
	pass13: *ptr=oldpass13; goto alt11_2;
	success13: *ptr=oldpass13;
it=bind_aget(bind,31/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_2: ptr->pos=oldpos16;  it=AmethystCore_anything(self ); FAILTEST(alt11_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept11;
alt11_3: ptr->pos=oldpos16;goto fail;
 accept11:;
 break;
case 16/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,24/*vals*/,it);
int oldpos18=ptr->pos;
alt12_1:;  it=AmethystCore_anything(self ); FAILTEST(alt12_2); bind_aset(bind,36/*autovar*/,it);
cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,36/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos19; while(1){oldpos19=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,37/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,37/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,28/*p*/,it);
  it=First_Dataflow_value(self ); FAILTEST(pass16); bind_aset(bind,29/*v*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_28_rb__f78d,1,bind);  bind_aset(bind,38/*autovar*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow__append_lp__7b62,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass16;
	goto success16;
	pass16: *ptr=oldpass16; goto break7;
	success16: *ptr=oldpass16;
  } break7: ame_setstop(self,Qnil); ptr->pos=oldpos19; it=rb_funcall(self,sy_Switch_Clas_Dataflow_bind_lb_24_rb__d555,1,bind);  bind_aset(bind,39/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
	goto success15;
	pass15: *ptr=oldpass15; goto alt12_2;
	success15: *ptr=oldpass15;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_2: ptr->pos=oldpos18;  it=AmethystCore_anything(self ); FAILTEST(alt12_3); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept12;
alt12_3: ptr->pos=oldpos18;goto fail;
 accept12:;
 break;
case 17/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*el*/,it);
it=rb_funcall(self,sy_Switch_Clas_Dataflow_empty,1,bind);  bind_aset(bind,2/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Switch_Clas_Dataflow_getvalue(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*v*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53,1,bind);  bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,1/*autovar*/);ptr->len=1;
   it=Switch_Clas_Dataflow_first(self ); FAILTEST(pass1); bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Detect_First;
VALUE AmethystCore_anything(VALUE self );
VALUE Detect_First_itrans(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_First_root(VALUE self );
VALUE Traverser_Clone2_traverse(VALUE self );
VALUE switchhash_Detect_First_1;
VALUE switchhash_Detect_First_2;
VALUE switchhash_Detect_First_3;
VALUE switchhash_Detect_First_4;
static VALUE sy_Detect_First__append_lp__7352;
static VALUE sy_Detect_First__append_lp__b494;
static VALUE sy_Detect_First__at_name_eq_sr_362f;
static VALUE sy_Detect_First__do_rules_eq__le__ab16;
static VALUE sy_Detect_First_src_25d9;
static VALUE sy_Detect_First_src_dot_rule_5acf;
static VALUE sy_Detect_First_src_dot_rule_d270;
VALUE Detect_First_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_First__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_First__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_First_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_First_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto break2;
	success4: *ptr=oldpass4;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__7352,1,bind);  break;
case 1/*Object*/:; goto break2; break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
it=rb_funcall(self,sy_Detect_First_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_First_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_First__append_lp__b494,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_First_must_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case 2/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Detect_First_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:case 1/*Bind*/:case 2/*CAct*/:;   it=Detect_First_must_empty(self ); FAILTEST(pass1);it=rb_funcall(self,sy_Detect_First_src_25d9,1,bind);  bind_aset(bind,2/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 3/*Object*/:; goto pass1; break;
}
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,0/*_result*/,it);
 break;
case 3/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Detect_First_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Traverser_Clone2_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }VALUE cls_Detect_Switch_Char;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0);
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE);
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0);
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE);
VALUE Detect_Switch_Char_itrans(VALUE self );
VALUE Detect_Switch_Char_root(VALUE self );
VALUE Detect_Switch_Char_traverse(VALUE self );
VALUE Detect_Switch_Char_traverse_item(VALUE self );
VALUE Detect_Switch_Char_visit(VALUE self );
VALUE switchhash_Detect_Switch_Char_10;
VALUE switchhash_Detect_Switch_Char_11;
VALUE switchhash_Detect_Switch_Char_12;
VALUE switchhash_Detect_Switch_Char_1;
VALUE switchhash_Detect_Switch_Char_2;
VALUE switchhash_Detect_Switch_Char_3;
VALUE switchhash_Detect_Switch_Char_4;
VALUE switchhash_Detect_Switch_Char_5;
VALUE switchhash_Detect_Switch_Char_6;
VALUE switchhash_Detect_Switch_Char_7;
VALUE switchhash_Detect_Switch_Char_8;
VALUE switchhash_Detect_Switch_Char_9;
static VALUE sy_Detect_Switch_Char_Or_lb__ti_bind_ab33;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6;
static VALUE sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_e56a;
static VALUE sy_Detect_Switch_Char_Switch_C_4343;
static VALUE sy_Detect_Switch_Char_Switch_C_605e;
static VALUE sy_Detect_Switch_Char_Switch_C_badf;
static VALUE sy_Detect_Switch_Char_Switch_C_fe8b;
static VALUE sy_Detect_Switch_Char__append_lp__05b0;
static VALUE sy_Detect_Switch_Char__append_lp__3d0f;
static VALUE sy_Detect_Switch_Char__append_lp__599a;
static VALUE sy_Detect_Switch_Char__append_lp__6f56;
static VALUE sy_Detect_Switch_Char__append_lp__7352;
static VALUE sy_Detect_Switch_Char__append_lp__b375;
static VALUE sy_Detect_Switch_Char__append_lp__b494;
static VALUE sy_Detect_Switch_Char__append_lp__c323;
static VALUE sy_Detect_Switch_Char__at_changed_5352;
static VALUE sy_Detect_Switch_Char__at_changed_b885;
static VALUE sy_Detect_Switch_Char__at_changed_c681;
static VALUE sy_Detect_Switch_Char__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Char__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Char__lb__lb_Lattic_d322;
static VALUE sy_Detect_Switch_Char__lp_2;
static VALUE sy_Detect_Switch_Char__lp_;
static VALUE sy_Detect_Switch_Char__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_Switch_Char__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be;
static VALUE sy_Detect_Switch_Char_bind_lb_27_rb__d04b;
static VALUE sy_Detect_Switch_Char_bind_lb_32_rb__5e16;
static VALUE sy_Detect_Switch_Char_bind_lb_32_rb__7e2a;
static VALUE sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57;
static VALUE sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725;
static VALUE sy_Detect_Switch_Char_bind_lb_45_rb__4a92;
static VALUE sy_Detect_Switch_Char_bind_lb_5_rb__lt__1671;
static VALUE sy_Detect_Switch_Char_first_lp_sr_3298;
static VALUE sy_Detect_Switch_Char_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_09bd;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_0f4e;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_0f7e;
static VALUE sy_Detect_Switch_Char_s_eq_Switch_2226;
static VALUE sy_Detect_Switch_Char_src_25d9;
static VALUE sy_Detect_Switch_Char_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Char_src_dot_rule_d270;
static VALUE sy_first;
VALUE Detect_Switch_Char_combine_or(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(6); bind_aset(bind,3/*list*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_9,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,1/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=rb_ary_new3(0); bind_aset(bind,2/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725,1,bind);  it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_4;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_fe8b,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=Qnil;if (ptr->pos<ptr->len) goto alt2_3;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_fe8b,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_combine_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(10); bind_aset(bind,1/*prefix*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt1_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,4/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_3;
	success1: *ptr=oldpass1;
it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__6f56,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_4343,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b375,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos4=ptr->pos;
alt2_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt2_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos4;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos5; while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b375,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos5; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos4;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_11,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch_Char__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_12,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Char_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto break2;
	success4: *ptr=oldpass4;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__7352,1,bind);  break;
case 1/*Object*/:; goto break2; break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b494,1,bind);  break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__b494,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Detect_Switch_Char_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_b885,1,bind);   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto break1;
	success3: *ptr=oldpass3;
  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=rb_funcall(self,sy_Detect_Switch_Char_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Char_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_10,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Char_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_3;
	success1: *ptr=oldpass1;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;
alt2_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_5_rb__lt__1671,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_3;
	success2: *ptr=oldpass2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;
alt3_1:;  it=Detect_Switch_Char_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Char_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(58);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ptr->pos;
alt1_1:;it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
int oldpos2=ptr->pos;
alt2_1:;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass2; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass2; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,6/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass1; break;
}cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass1;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,7/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_2226,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt2_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass5);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass5; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass5);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass5; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto pass4;
	success5: *ptr=oldpass5;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass4); bind_aset(bind,12/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass4; break;
}cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass6); bind_aset(bind,13/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto pass4;
	success6: *ptr=oldpass6;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,7/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_0f4e,1,bind);  bind_aset(bind,14/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt2_3;
	success4: *ptr=oldpass4;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,3/*autovar*/); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass8);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass8; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass8);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass8; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass8;
	goto success8;
	pass8: *ptr=oldpass8; goto pass7;
	success8: *ptr=oldpass8;
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,17/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt2_4;
	success7: *ptr=oldpass7;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=bind_aget(bind,0/*autovar*/); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,7/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass9);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_0f7e,1,bind);  bind_aset(bind,19/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
	goto success9;
	pass9: *ptr=oldpass9; goto alt1_3;
	success9: *ptr=oldpass9;
it=bind_aget(bind,19/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
it=bind_aget(bind,2/*autovar*/); bind_aset(bind,20/*autovar*/,it);
int oldpos3=ptr->pos;
alt3_1:;it=bind_aget(bind,20/*autovar*/); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass11);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'q':;case 's' ... UC(255):; goto pass11; break;
case 'r' ... 'r':;   it=AmethystCore_anything(self ); FAILTEST(pass11);if (strncmp(ame_curstr2(ptr),"egch",4)) goto pass11; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass11;
	goto success11;
	pass11: *ptr=oldpass11; goto pass10;
	success11: *ptr=oldpass11;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Act*/:;   it=AmethystCore_anything(self ); FAILTEST(pass10); bind_aset(bind,6/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass10; break;
}cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=Qnil;if (ptr->pos<ptr->len) goto pass12;
	goto success12;
	pass12: *ptr=oldpass12; goto pass10;
	success12: *ptr=oldpass12;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,7/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_2226,1,bind);  bind_aset(bind,8/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
	goto success10;
	pass10: *ptr=oldpass10; goto alt3_2;
	success10: *ptr=oldpass10;
it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos3;it=bind_aget(bind,20/*autovar*/); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass13); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass14=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass14);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '^':;case '`' ... UC(255):; goto pass14; break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(pass14);if (strncmp(ame_curstr2(ptr),"seq",3)) goto pass14; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass14;
	goto success14;
	pass14: *ptr=oldpass14; goto pass13;
	success14: *ptr=oldpass14;
switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*CAct*/:;   it=AmethystCore_anything(self ); FAILTEST(pass13); bind_aset(bind,12/*autovar*/,it);
 break;
case 1/*Object*/:; goto pass13; break;
}cstruct oldpass15=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,12/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass15); bind_aset(bind,13/*str*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass15;
	goto success15;
	pass15: *ptr=oldpass15; goto pass13;
	success15: *ptr=oldpass15;
it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,7/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_0f4e,1,bind);  bind_aset(bind,14/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
	goto success13;
	pass13: *ptr=oldpass13; goto alt3_3;
	success13: *ptr=oldpass13;
it=bind_aget(bind,14/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos3;it=bind_aget(bind,20/*autovar*/); bind_aset(bind,15/*autovar*/,it);
cstruct oldpass16=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,15/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass16); bind_aset(bind,16/*autovar*/,it);
cstruct oldpass17=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,16/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass17);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass17; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass17);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass17; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass17;
	goto success17;
	pass17: *ptr=oldpass17; goto pass16;
	success17: *ptr=oldpass17;
it=rb_funcall(self,sy_Detect_Switch_Char_src_25d9,1,bind);  bind_aset(bind,17/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass16;
	goto success16;
	pass16: *ptr=oldpass16; goto alt3_4;
	success16: *ptr=oldpass16;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,9/*_result*/,it);

;goto accept3;
alt3_4: ptr->pos=oldpos3;goto fail;
 accept3:;
 break;
case 2/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,18/*autovar*/,it);
cstruct oldpass18=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,18/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_first_lp_sr_3298,1,bind);  bind_aset(bind,7/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass18);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_0f7e,1,bind);  bind_aset(bind,19/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass18;
	goto success18;
	pass18: *ptr=oldpass18; goto fail;
	success18: *ptr=oldpass18;
it=bind_aget(bind,19/*autovar*/); bind_aset(bind,9/*_result*/,it);
 break;
case 3/*Many*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass19=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Char_traverse(self ); FAILTEST(pass19); bind_aset(bind,22/*t*/,it);
 it=bind_aget(bind,22/*t*/); arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(pass19); bind_aset(bind,7/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__lp_,1,bind); FAILTEST(pass19);it=rb_funcall(self,sy_Detect_Switch_Char_s_eq_Switch_09bd,1,bind);  bind_aset(bind,23/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass19;
	goto success19;
	pass19: *ptr=oldpass19; goto fail;
	success19: *ptr=oldpass19;
it=bind_aget(bind,23/*autovar*/); bind_aset(bind,9/*_result*/,it);
 break;
case 4/*Or*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,24/*autovar*/,it);
cstruct oldpass20=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,24/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,25/*autovar*/,it);
int oldpos4; while(1){oldpos4=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break1); bind_aset(bind,26/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__05b0,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos4; it=bind_aget(bind,25/*autovar*/); bind_aset(bind,27/*items*/,it);
it=Qfalse; bind_aset(bind,28/*aswitch*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_27_rb__d04b,1,bind); int oldpos5=ptr->pos;
alt4_1:;it=rb_funcall(self,sy_Detect_Switch_Char__lp_2,1,bind); FAILTEST(alt4_2);it=rb_funcall(self,sy_Detect_Switch_Char_Or_lb__ti_bind_ab33,1,bind);  bind_aset(bind,29/*autovar*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos5;it=bind_aget(bind,27/*items*/); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass21=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,30/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass21); bind_aset(bind,31/*autovar*/,it);
cstruct oldpass22=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,31/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind);  bind_aset(bind,32/*list*/,it);
int oldpos6=ptr->pos;
alt5_1:;  it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass23=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,33/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,34/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass23;
	goto success23;
	pass23: *ptr=oldpass23; goto alt5_2;
	success23: *ptr=oldpass23;
it=rb_ary_new3(0); bind_aset(bind,35/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_32_rb__7e2a,1,bind);  it=bind_aget(bind,35/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt5_2); bind_aset(bind,36/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos6;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,37/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_32_rb__5e16,1,bind);  bind_aset(bind,35/*newlist*/,it);
 it=bind_aget(bind,35/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt5_3); bind_aset(bind,36/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos6;it=Qnil;if (ptr->pos<ptr->len) goto alt5_4;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_badf,1,bind);  bind_aset(bind,36/*_result*/,it);

;goto accept5;
alt5_4: ptr->pos=oldpos6;goto pass22;
 accept5:;
it=bind_aget(bind,36/*_result*/); bind_aset(bind,38/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass22; break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Char__lb__lb_Lattic_d322,1,bind);  bind_aset(bind,32/*list*/,it);
int oldpos7=ptr->pos;
alt6_1:;  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,37/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_32_rb__5e16,1,bind);  bind_aset(bind,35/*newlist*/,it);
 it=bind_aget(bind,35/*newlist*/); arg0=it; it=Detect_Switch_Char_combine_or(self ,arg0); FAILTEST(alt6_2); bind_aset(bind,36/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;it=Qnil;if (ptr->pos<ptr->len) goto alt6_3;it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_badf,1,bind);  bind_aset(bind,36/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;goto pass22;
 accept6:;
it=bind_aget(bind,36/*_result*/); bind_aset(bind,38/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass22; break;
}
	goto success22;
	pass22: *ptr=oldpass22; goto pass21;
	success22: *ptr=oldpass22;
it=bind_aget(bind,38/*autovar*/); bind_aset(bind,39/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass21;
	goto success21;
	pass21: *ptr=oldpass21; goto alt4_3;
	success21: *ptr=oldpass21;
it=bind_aget(bind,39/*autovar*/); bind_aset(bind,29/*autovar*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos5;goto pass20;
 accept4:;
it=Qnil;if (ptr->pos<ptr->len) goto pass20;
	goto success20;
	pass20: *ptr=oldpass20; goto fail;
	success20: *ptr=oldpass20;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,9/*_result*/,it);
 break;
case 5/*Seq*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,40/*autovar*/,it);
cstruct oldpass24=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,40/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,41/*autovar*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=Detect_Switch_Char_traverse_item(self ); FAILTEST(break2); bind_aset(bind,42/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__599a,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos8; it=bind_aget(bind,41/*autovar*/); bind_aset(bind,43/*autovar*/,it);
cstruct oldpass25=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,43/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass25); bind_aset(bind,44/*autovar*/,it);
cstruct oldpass26=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,44/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Char_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Char*/:; it=rb_ary_new3(0); bind_aset(bind,45/*prefix*/,it);
int oldpos9=ptr->pos;
alt7_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt7_2); bind_aset(bind,46/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_45_rb__4a92,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt7_2); bind_aset(bind,47/*_result*/,it);

;goto accept7;
alt7_2: ptr->pos=oldpos9;  it=AmethystCore_anything(self ); FAILTEST(alt7_3); bind_aset(bind,48/*autovar*/,it);
cstruct oldpass27=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,48/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Char_src_dot_ary_d5cf,1,bind);  bind_aset(bind,49/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass27;
	goto success27;
	pass27: *ptr=oldpass27; goto alt7_3;
	success27: *ptr=oldpass27;
it=rb_ary_new3(0); bind_aset(bind,50/*autovar*/,it);
int oldpos10; while(1){oldpos10=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,51/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__3d0f,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos10; it=bind_aget(bind,50/*autovar*/); bind_aset(bind,52/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Switch_C_605e,1,bind);  bind_aset(bind,47/*_result*/,it);

;goto accept7;
alt7_3: ptr->pos=oldpos9;it=rb_ary_new3(0); bind_aset(bind,53/*autovar*/,it);
int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,54/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__c323,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=bind_aget(bind,53/*autovar*/); bind_aset(bind,49/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_e56a,1,bind);  bind_aset(bind,47/*_result*/,it);

;goto accept7;
alt7_4: ptr->pos=oldpos9;goto pass26;
 accept7:;
it=bind_aget(bind,47/*_result*/); bind_aset(bind,55/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass26; break;
case 1/*Object*/:; it=rb_ary_new3(0); bind_aset(bind,45/*prefix*/,it);
int oldpos12=ptr->pos;
alt8_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt8_2); bind_aset(bind,46/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Char_bind_lb_45_rb__4a92,1,bind);  arg0=it; it=Detect_Switch_Char_combine_seq(self ,arg0); FAILTEST(alt8_2); bind_aset(bind,47/*_result*/,it);

;goto accept8;
alt8_2: ptr->pos=oldpos12;it=rb_ary_new3(0); bind_aset(bind,53/*autovar*/,it);
int oldpos13; while(1){oldpos13=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,54/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char__append_lp__c323,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=bind_aget(bind,53/*autovar*/); bind_aset(bind,49/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_e56a,1,bind);  bind_aset(bind,47/*_result*/,it);

;goto accept8;
alt8_3: ptr->pos=oldpos12;goto pass26;
 accept8:;
it=bind_aget(bind,47/*_result*/); bind_aset(bind,55/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass26; break;
}
	goto success26;
	pass26: *ptr=oldpass26; goto pass25;
	success26: *ptr=oldpass26;
it=bind_aget(bind,55/*autovar*/); bind_aset(bind,56/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass25;
	goto success25;
	pass25: *ptr=oldpass25; goto pass24;
	success25: *ptr=oldpass25;
it=bind_aget(bind,56/*autovar*/); bind_aset(bind,57/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass24;
	goto success24;
	pass24: *ptr=oldpass24; goto fail;
	success24: *ptr=oldpass24;
it=bind_aget(bind,57/*autovar*/); bind_aset(bind,9/*_result*/,it);
 break;
case 6/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }VALUE cls_Detect_Switch_Clas;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_First_must_empty(VALUE self );
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0);
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE);
VALUE Detect_Switch_Clas_itrans(VALUE self );
VALUE Detect_Switch_Clas_root(VALUE self );
VALUE Detect_Switch_Clas_traverse(VALUE self );
VALUE Detect_Switch_Clas_traverse_item(VALUE self );
VALUE Detect_Switch_Clas_visit(VALUE self );
VALUE switchhash_Detect_Switch_Clas_1;
VALUE switchhash_Detect_Switch_Clas_2;
VALUE switchhash_Detect_Switch_Clas_3;
VALUE switchhash_Detect_Switch_Clas_4;
VALUE switchhash_Detect_Switch_Clas_5;
VALUE switchhash_Detect_Switch_Clas_6;
VALUE switchhash_Detect_Switch_Clas_7;
VALUE switchhash_Detect_Switch_Clas_8;
static VALUE sy_Detect_Switch_Clas_Or_lb__ti_bind_2778;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6;
static VALUE sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_fab8;
static VALUE sy_Detect_Switch_Clas_Switch_C_0e01;
static VALUE sy_Detect_Switch_Clas_Switch_C_4588;
static VALUE sy_Detect_Switch_Clas_Switch_C_4c94;
static VALUE sy_Detect_Switch_Clas_Switch_C_ee57;
static VALUE sy_Detect_Switch_Clas_Switch_C_f93c;
static VALUE sy_Detect_Switch_Clas__append_lp__6f56;
static VALUE sy_Detect_Switch_Clas__append_lp__7352;
static VALUE sy_Detect_Switch_Clas__append_lp__8bfa;
static VALUE sy_Detect_Switch_Clas__append_lp__9160;
static VALUE sy_Detect_Switch_Clas__append_lp__b375;
static VALUE sy_Detect_Switch_Clas__append_lp__b494;
static VALUE sy_Detect_Switch_Clas__append_lp__c7ad;
static VALUE sy_Detect_Switch_Clas__append_lp__e512;
static VALUE sy_Detect_Switch_Clas__at_changed_5352;
static VALUE sy_Detect_Switch_Clas__at_changed_b885;
static VALUE sy_Detect_Switch_Clas__at_changed_c681;
static VALUE sy_Detect_Switch_Clas__at_name_eq_sr_362f;
static VALUE sy_Detect_Switch_Clas__do_rules_eq__le__ab16;
static VALUE sy_Detect_Switch_Clas__lb__lb_Lattic_62e5;
static VALUE sy_Detect_Switch_Clas__lp_2;
static VALUE sy_Detect_Switch_Clas__lp_;
static VALUE sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693;
static VALUE sy_Detect_Switch_Clas__lp_src_dot_ins_6a75;
static VALUE sy_Detect_Switch_Clas_bind_lb_17_rb__171f;
static VALUE sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be;
static VALUE sy_Detect_Switch_Clas_bind_lb_22_rb__6728;
static VALUE sy_Detect_Switch_Clas_bind_lb_22_rb__e2be;
static VALUE sy_Detect_Switch_Clas_bind_lb_35_rb__0ac2;
static VALUE sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57;
static VALUE sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d;
static VALUE sy_Detect_Switch_Clas_bind_lb_5_rb__lt__1671;
static VALUE sy_Detect_Switch_Clas_c_eq_Switch_f609;
static VALUE sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9;
static VALUE sy_Detect_Switch_Clas_src_25d9;
static VALUE sy_Detect_Switch_Clas_src_dot_ary_d5cf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_5acf;
static VALUE sy_Detect_Switch_Clas_src_dot_rule_d270;
static VALUE sy_first;
VALUE Detect_Switch_Clas_combine_or(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(6); bind_aset(bind,3/*list*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,1/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=rb_ary_new3(0); bind_aset(bind,2/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d,1,bind);  it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt1_3); bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=Qnil;if (ptr->pos<ptr->len) goto alt1_4;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_0e01,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos2=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57,1,bind);  bind_aset(bind,2/*newlist*/,it);
 it=bind_aget(bind,2/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;it=Qnil;if (ptr->pos<ptr->len) goto alt2_3;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_0e01,1,bind);  bind_aset(bind,4/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_combine_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(10); bind_aset(bind,1/*prefix*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt1_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,4/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_3;
	success1: *ptr=oldpass1;
it=rb_ary_new3(0); bind_aset(bind,5/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__6f56,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,5/*autovar*/); bind_aset(bind,7/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_4c94,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b375,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Object*/:; int oldpos4=ptr->pos;
alt2_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt2_2); bind_aset(bind,0/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt2_2); bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos4;it=rb_ary_new3(0); bind_aset(bind,8/*autovar*/,it);
int oldpos5; while(1){oldpos5=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b375,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos5; it=bind_aget(bind,8/*autovar*/); bind_aset(bind,4/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6,1,bind);  bind_aset(bind,2/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos4;goto fail;
 accept2:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_itrans(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(12);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_7,rb_obj_class(ame_curobj2(ptr))))){case 0/*Grammar*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_funcall(self,sy_Detect_Switch_Clas__at_name_eq_sr_362f,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas__do_rules_eq__le__ab16,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_5acf,1,bind);  bind_aset(bind,2/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,2/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_8,rb_obj_class(ame_curobj2(ptr))))){case 0/*Rule*/:;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Clas_root(self ); FAILTEST(pass4); bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto break2;
	success4: *ptr=oldpass4;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__7352,1,bind);  break;
case 1/*Object*/:; goto break2; break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,8/*rules*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_rule_d270,1,bind); it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,9/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,9/*autovar*/); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,10/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b494,1,bind);  break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__b494,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,11/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Detect_Switch_Clas_traverse(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(10);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_c681,1,bind);  bind_aset(bind,0/*oldchanged*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,1/*this*/,it);
it=Qnil; bind_aset(bind,2/*clon*/,it);
it=Qfalse; bind_aset(bind,3/*changed*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_src_dot_ins_6a75,1,bind);  bind_aset(bind,4/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,4/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,5/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 int oldpos1; while(1){oldpos1=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,6/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,7/*key*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_b885,1,bind);   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(pass3); bind_aset(bind,8/*val*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto break1;
	success3: *ptr=oldpass3;
  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=rb_funcall(self,sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9,1,bind);  bind_aset(bind,9/*_result*/,it);

return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_traverse_item(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(8);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*AmethystAST*/:; int oldpos1=ptr->pos;
alt1_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt1_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Detect_Switch_Clas_traverse(self ); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_3;
	success1: *ptr=oldpass1;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_4); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Array*/:; int oldpos2=ptr->pos;
alt2_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt2_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,5/*ar*/,it);
int oldpos3; while(1){oldpos3=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); bind_aset(bind,6/*it*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_5_rb__lt__1671,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,5/*ar*/); bind_aset(bind,7/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt2_3;
	success2: *ptr=oldpass2;
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,1/*_result*/,it);

;goto accept2;
alt2_4: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case 2/*Object*/:; int oldpos4=ptr->pos;
alt3_1:;  it=Detect_Switch_Clas_visit(self ); FAILTEST(alt3_2); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__at_changed_5352,1,bind); it=bind_aget(bind,0/*a*/); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,1/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto fail;
 accept3:;
 break;
}
return it;
fail: return failobj; }
VALUE Detect_Switch_Clas_visit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(48);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=bind_aget(bind,1/*autovar*/); bind_aset(bind,2/*autovar*/,it);
int oldpos1=ptr->pos;
alt1_1:;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'b':;case 'd' ... UC(255):; goto pass2; break;
case 'c' ... 'c':;   it=AmethystCore_anything(self ); FAILTEST(pass2);if (strncmp(ame_curstr2(ptr),"las",3)) goto pass2; else ptr->pos+=3; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto pass1;
	success2: *ptr=oldpass2;
  it=AmethystCore_anything(self ); FAILTEST(pass1); bind_aset(bind,5/*clas*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_ee57,1,bind);  bind_aset(bind,6/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto alt1_2;
	success1: *ptr=oldpass1;
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,8/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,8/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=AmethystCore_anything(self ); FAILTEST(pass3); bind_aset(bind,9/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,9/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
   it=Amethyst_spaces(self ); FAILTEST(pass4);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass4; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass4);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass4; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto pass3;
	success4: *ptr=oldpass4;
it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  bind_aset(bind,10/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto alt1_3;
	success3: *ptr=oldpass3;
it=bind_aget(bind,10/*autovar*/); bind_aset(bind,7/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len; it=rb_funcall(self,sy_Detect_Switch_Clas_src_25d9,1,bind);  arg0=it; it=rb_funcall(self,sy_first,1,arg0); FAILTEST(pass5); bind_aset(bind,12/*firs*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__lp_,1,bind); FAILTEST(pass5);it=rb_funcall(self,sy_Detect_Switch_Clas_c_eq_Switch_f609,1,bind);  bind_aset(bind,13/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto alt1_4;
	success5: *ptr=oldpass5;
it=bind_aget(bind,13/*autovar*/); bind_aset(bind,7/*_result*/,it);

;goto accept1;
alt1_4: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case 1/*Or*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,14/*autovar*/,it);
cstruct oldpass6=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,14/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,15/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break1); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__8bfa,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,15/*autovar*/); bind_aset(bind,17/*items*/,it);
it=Qfalse; bind_aset(bind,18/*aswitch*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_17_rb__171f,1,bind); int oldpos3=ptr->pos;
alt2_1:;it=rb_funcall(self,sy_Detect_Switch_Clas__lp_2,1,bind); FAILTEST(alt2_2);it=rb_funcall(self,sy_Detect_Switch_Clas_Or_lb__ti_bind_2778,1,bind);  bind_aset(bind,19/*autovar*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos3;it=bind_aget(bind,17/*items*/); bind_aset(bind,20/*autovar*/,it);
cstruct oldpass7=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,20/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass7); bind_aset(bind,21/*autovar*/,it);
cstruct oldpass8=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,21/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind);  bind_aset(bind,22/*list*/,it);
int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,23/*autovar*/,it);
cstruct oldpass9=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,23/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,24/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass9;
	goto success9;
	pass9: *ptr=oldpass9; goto alt3_2;
	success9: *ptr=oldpass9;
it=rb_ary_new3(0); bind_aset(bind,25/*newlist*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_22_rb__6728,1,bind);  it=bind_aget(bind,25/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt3_2); bind_aset(bind,26/*_result*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,27/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_22_rb__e2be,1,bind);  bind_aset(bind,25/*newlist*/,it);
 it=bind_aget(bind,25/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt3_3); bind_aset(bind,26/*_result*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos4;it=Qnil;if (ptr->pos<ptr->len) goto alt3_4;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_f93c,1,bind);  bind_aset(bind,26/*_result*/,it);

;goto accept3;
alt3_4: ptr->pos=oldpos4;goto pass8;
 accept3:;
it=bind_aget(bind,26/*_result*/); bind_aset(bind,28/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8; break;
case 1/*Object*/:; it=rb_funcall(self,sy_Detect_Switch_Clas__lb__lb_Lattic_62e5,1,bind);  bind_aset(bind,22/*list*/,it);
int oldpos5=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2); bind_aset(bind,27/*n*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_22_rb__e2be,1,bind);  bind_aset(bind,25/*newlist*/,it);
 it=bind_aget(bind,25/*newlist*/); arg0=it; it=Detect_Switch_Clas_combine_or(self ,arg0); FAILTEST(alt4_2); bind_aset(bind,26/*_result*/,it);

;goto accept4;
alt4_2: ptr->pos=oldpos5;it=Qnil;if (ptr->pos<ptr->len) goto alt4_3;it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_f93c,1,bind);  bind_aset(bind,26/*_result*/,it);

;goto accept4;
alt4_3: ptr->pos=oldpos5;goto pass8;
 accept4:;
it=bind_aget(bind,26/*_result*/); bind_aset(bind,28/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass8; break;
}
	goto success8;
	pass8: *ptr=oldpass8; goto pass7;
	success8: *ptr=oldpass8;
it=bind_aget(bind,28/*autovar*/); bind_aset(bind,29/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass7;
	goto success7;
	pass7: *ptr=oldpass7; goto alt2_3;
	success7: *ptr=oldpass7;
it=bind_aget(bind,29/*autovar*/); bind_aset(bind,19/*autovar*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos3;goto pass6;
 accept2:;
it=Qnil;if (ptr->pos<ptr->len) goto pass6;
	goto success6;
	pass6: *ptr=oldpass6; goto fail;
	success6: *ptr=oldpass6;
it=bind_aget(bind,19/*autovar*/); bind_aset(bind,7/*_result*/,it);
 break;
case 2/*Seq*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,30/*autovar*/,it);
cstruct oldpass10=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,30/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 it=rb_ary_new3(0); bind_aset(bind,31/*autovar*/,it);
int oldpos6; while(1){oldpos6=ptr->pos;   it=Detect_Switch_Clas_traverse_item(self ); FAILTEST(break2); bind_aset(bind,32/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__9160,1,bind);   } break2: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,31/*autovar*/); bind_aset(bind,33/*autovar*/,it);
cstruct oldpass11=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,33/*autovar*/);ptr->len=1;
   it=AmethystCore_anything(self ); FAILTEST(pass11); bind_aset(bind,34/*autovar*/,it);
cstruct oldpass12=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,34/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Switch_Clas_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Switch_Clas*/:; it=rb_ary_new3(0); bind_aset(bind,35/*prefix*/,it);
int oldpos7=ptr->pos;
alt5_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt5_2); bind_aset(bind,36/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_35_rb__0ac2,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt5_2); bind_aset(bind,37/*_result*/,it);

;goto accept5;
alt5_2: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,38/*autovar*/,it);
cstruct oldpass13=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,38/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Detect_Switch_Clas_src_dot_ary_d5cf,1,bind);  bind_aset(bind,39/*ary*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass13;
	goto success13;
	pass13: *ptr=oldpass13; goto alt5_3;
	success13: *ptr=oldpass13;
it=rb_ary_new3(0); bind_aset(bind,40/*autovar*/,it);
int oldpos8; while(1){oldpos8=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,41/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__c7ad,1,bind);   } break3: ame_setstop(self,Qnil); ptr->pos=oldpos8; it=bind_aget(bind,40/*autovar*/); bind_aset(bind,42/*rest*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Switch_C_4588,1,bind);  bind_aset(bind,37/*_result*/,it);

;goto accept5;
alt5_3: ptr->pos=oldpos7;it=rb_ary_new3(0); bind_aset(bind,43/*autovar*/,it);
int oldpos9; while(1){oldpos9=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,44/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__e512,1,bind);   } break4: ame_setstop(self,Qnil); ptr->pos=oldpos9; it=bind_aget(bind,43/*autovar*/); bind_aset(bind,39/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_fab8,1,bind);  bind_aset(bind,37/*_result*/,it);

;goto accept5;
alt5_4: ptr->pos=oldpos7;goto pass12;
 accept5:;
it=bind_aget(bind,37/*_result*/); bind_aset(bind,45/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12; break;
case 1/*Object*/:; it=rb_ary_new3(0); bind_aset(bind,35/*prefix*/,it);
int oldpos10=ptr->pos;
alt6_1:;  it=Detect_First_must_empty(self ); FAILTEST(alt6_2); bind_aset(bind,36/*s*/,it);
 it=rb_funcall(self,sy_Detect_Switch_Clas_bind_lb_35_rb__0ac2,1,bind);  arg0=it; it=Detect_Switch_Clas_combine_seq(self ,arg0); FAILTEST(alt6_2); bind_aset(bind,37/*_result*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos10;it=rb_ary_new3(0); bind_aset(bind,43/*autovar*/,it);
int oldpos11; while(1){oldpos11=ptr->pos;   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,44/*autovar*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas__append_lp__e512,1,bind);   } break5: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=bind_aget(bind,43/*autovar*/); bind_aset(bind,39/*ary*/,it);
it=rb_funcall(self,sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_fab8,1,bind);  bind_aset(bind,37/*_result*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos10;goto pass12;
 accept6:;
it=bind_aget(bind,37/*_result*/); bind_aset(bind,45/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass12; break;
}
	goto success12;
	pass12: *ptr=oldpass12; goto pass11;
	success12: *ptr=oldpass12;
it=bind_aget(bind,45/*autovar*/); bind_aset(bind,46/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass11;
	goto success11;
	pass11: *ptr=oldpass11; goto pass10;
	success11: *ptr=oldpass11;
it=bind_aget(bind,46/*autovar*/); bind_aset(bind,47/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass10;
	goto success10;
	pass10: *ptr=oldpass10; goto fail;
	success10: *ptr=oldpass10;
it=bind_aget(bind,47/*autovar*/); bind_aset(bind,7/*_result*/,it);
 break;
case 3/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
void Init_detect_switch_c(){ 
 cls_First_Dataflow=rb_define_class("First_Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
switchhash_First_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Char\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_First_Dataflow_1);;
sy_First_Dataflow_Compiler_cb78=rb_intern("First_Dataflow_Compiler_cb78");
sy_First_Dataflow__append_lp__51dc=rb_intern("First_Dataflow__append_lp__51dc");
sy_First_Dataflow__append_lp__7b62=rb_intern("First_Dataflow__append_lp__7b62");
sy_First_Dataflow__append_lp__8bfa=rb_intern("First_Dataflow__append_lp__8bfa");
sy_First_Dataflow__append_lp__e6cd=rb_intern("First_Dataflow__append_lp__e6cd");
sy_First_Dataflow__at_vis_eq_bin_af53=rb_intern("First_Dataflow__at_vis_eq_bin_af53");
sy_First_Dataflow__lp_=rb_intern("First_Dataflow__lp_");
sy_First_Dataflow__lp_Compile_f25c=rb_intern("First_Dataflow__lp_Compile_f25c");
sy_First_Dataflow_bind_lb_12_rb__980d=rb_intern("First_Dataflow_bind_lb_12_rb__980d");
sy_First_Dataflow_bind_lb_12_rb__9ef5=rb_intern("First_Dataflow_bind_lb_12_rb__9ef5");
sy_First_Dataflow_bind_lb_17_rb__cd44=rb_intern("First_Dataflow_bind_lb_17_rb__cd44");
sy_First_Dataflow_bind_lb_24_rb__d555=rb_intern("First_Dataflow_bind_lb_24_rb__d555");
sy_First_Dataflow_bind_lb_28_rb__f78d=rb_intern("First_Dataflow_bind_lb_28_rb__f78d");
sy_First_Dataflow_depends_lp__5009=rb_intern("First_Dataflow_depends_lp__5009");
sy_First_Dataflow_empty=rb_intern("First_Dataflow_empty");
sy_First_Dataflow_lattice_dot__5a9e=rb_intern("First_Dataflow_lattice_dot__5a9e");
sy_analyze=rb_intern("analyze");
rb_define_method(cls_First_Dataflow,"first",First_Dataflow_first,0);
rb_define_method(cls_First_Dataflow,"getvalue",First_Dataflow_getvalue,1);
rb_define_method(cls_First_Dataflow,"root",First_Dataflow_root,0);
rb_define_method(cls_First_Dataflow,"value",First_Dataflow_value,0);

 cls_Sizes_Dataflow=rb_define_class("Sizes_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhash_Sizes_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_1);;
switchhash_Sizes_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_2);;
switchhash_Sizes_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Char\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Sizes_Dataflow_3);;
sy_Sizes_Dataflow_Compiler_cb78=rb_intern("Sizes_Dataflow_Compiler_cb78");
sy_Sizes_Dataflow__append_lp__51dc=rb_intern("Sizes_Dataflow__append_lp__51dc");
sy_Sizes_Dataflow__append_lp__7b62=rb_intern("Sizes_Dataflow__append_lp__7b62");
sy_Sizes_Dataflow__append_lp__8bfa=rb_intern("Sizes_Dataflow__append_lp__8bfa");
sy_Sizes_Dataflow__append_lp__e6cd=rb_intern("Sizes_Dataflow__append_lp__e6cd");
sy_Sizes_Dataflow__at_vis_eq_bin_af53=rb_intern("Sizes_Dataflow__at_vis_eq_bin_af53");
sy_Sizes_Dataflow__lp_=rb_intern("Sizes_Dataflow__lp_");
sy_Sizes_Dataflow__lp_Compile_f25c=rb_intern("Sizes_Dataflow__lp_Compile_f25c");
sy_Sizes_Dataflow_bind_lb_12_rb__980d=rb_intern("Sizes_Dataflow_bind_lb_12_rb__980d");
sy_Sizes_Dataflow_bind_lb_12_rb__9ef5=rb_intern("Sizes_Dataflow_bind_lb_12_rb__9ef5");
sy_Sizes_Dataflow_bind_lb_17_rb__cd44=rb_intern("Sizes_Dataflow_bind_lb_17_rb__cd44");
sy_Sizes_Dataflow_bind_lb_24_rb__d555=rb_intern("Sizes_Dataflow_bind_lb_24_rb__d555");
sy_Sizes_Dataflow_bind_lb_28_rb__f78d=rb_intern("Sizes_Dataflow_bind_lb_28_rb__f78d");
sy_Sizes_Dataflow_empty=rb_intern("Sizes_Dataflow_empty");
sy_Sizes_Dataflow_lattice_dot__5a9e=rb_intern("Sizes_Dataflow_lattice_dot__5a9e");
sy_Sizes_Dataflow_lattice_dot__e0e5=rb_intern("Sizes_Dataflow_lattice_dot__e0e5");
sy_Sizes_Dataflow_lattice_lb__cef9=rb_intern("Sizes_Dataflow_lattice_lb__cef9");
sy_Sizes_Dataflow_lattice_lb__fdee=rb_intern("Sizes_Dataflow_lattice_lb__fdee");
rb_define_method(cls_Sizes_Dataflow,"first",Sizes_Dataflow_first,0);
rb_define_method(cls_Sizes_Dataflow,"first_Sizes_Dataflow",Sizes_Dataflow_first_Sizes_Dataflow,0);
rb_define_method(cls_Sizes_Dataflow,"getvalue",Sizes_Dataflow_getvalue,1);

 cls_Switch_Char_Dataflow=rb_define_class("Switch_Char_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhash_Switch_Char_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_1);;
switchhash_Switch_Char_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_2);;
switchhash_Switch_Char_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_3);;
switchhash_Switch_Char_Dataflow_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Char\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Char_Dataflow_4);;
sy_Switch_Char_Dataflow_Compiler_cb78=rb_intern("Switch_Char_Dataflow_Compiler_cb78");
sy_Switch_Char_Dataflow__append_lp__51dc=rb_intern("Switch_Char_Dataflow__append_lp__51dc");
sy_Switch_Char_Dataflow__append_lp__7b62=rb_intern("Switch_Char_Dataflow__append_lp__7b62");
sy_Switch_Char_Dataflow__append_lp__8bfa=rb_intern("Switch_Char_Dataflow__append_lp__8bfa");
sy_Switch_Char_Dataflow__append_lp__e6cd=rb_intern("Switch_Char_Dataflow__append_lp__e6cd");
sy_Switch_Char_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Char_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Char_Dataflow__lp_=rb_intern("Switch_Char_Dataflow__lp_");
sy_Switch_Char_Dataflow__lp_Compile_f25c=rb_intern("Switch_Char_Dataflow__lp_Compile_f25c");
sy_Switch_Char_Dataflow_bind_lb_12_rb__980d=rb_intern("Switch_Char_Dataflow_bind_lb_12_rb__980d");
sy_Switch_Char_Dataflow_bind_lb_12_rb__9ef5=rb_intern("Switch_Char_Dataflow_bind_lb_12_rb__9ef5");
sy_Switch_Char_Dataflow_bind_lb_17_rb__cd44=rb_intern("Switch_Char_Dataflow_bind_lb_17_rb__cd44");
sy_Switch_Char_Dataflow_bind_lb_24_rb__d555=rb_intern("Switch_Char_Dataflow_bind_lb_24_rb__d555");
sy_Switch_Char_Dataflow_bind_lb_28_rb__f78d=rb_intern("Switch_Char_Dataflow_bind_lb_28_rb__f78d");
sy_Switch_Char_Dataflow_empty=rb_intern("Switch_Char_Dataflow_empty");
sy_Switch_Char_Dataflow_firstcha_7cc4=rb_intern("Switch_Char_Dataflow_firstcha_7cc4");
sy_Switch_Char_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Char_Dataflow_lattice_dot__5a9e");
sy_Switch_Char_Dataflow_lattice_dot__e0e5=rb_intern("Switch_Char_Dataflow_lattice_dot__e0e5");
sy_Switch_Char_Dataflow_regchar_lp__1c32=rb_intern("Switch_Char_Dataflow_regchar_lp__1c32");
rb_define_method(cls_Switch_Char_Dataflow,"first",Switch_Char_Dataflow_first,0);
rb_define_method(cls_Switch_Char_Dataflow,"first_Switch_Char_Dataflow",Switch_Char_Dataflow_first_Switch_Char_Dataflow,0);
rb_define_method(cls_Switch_Char_Dataflow,"getvalue",Switch_Char_Dataflow_getvalue,1);

 cls_Switch_Clas_Dataflow=rb_define_class("Switch_Clas_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow"))); 
failobj=rb_eval_string("FAIL");
switchhash_Switch_Clas_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_1);;
switchhash_Switch_Clas_Dataflow_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_2);;
switchhash_Switch_Clas_Dataflow_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Cut\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Lookahead\nnext h[k]=5 if k<=Pass\nnext h[k]=6 if k<=Result\nnext h[k]=7 if k<=Stop\nnext h[k]=8 if k<=Apply\nnext h[k]=9 if k<=Bind\nnext h[k]=10 if k<=Many\nnext h[k]=11 if k<=Or\nnext h[k]=12 if k<=Seq\nnext h[k]=13 if k<=Switch_Char\nnext h[k]=14 if k<=Switch_Char\nnext h[k]=15 if k<=Switch_Char\nnext h[k]=16 if k<=Switch_Clas\nnext h[k]=17 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Switch_Clas_Dataflow_3);;
sy_Switch_Clas_Dataflow_Compiler_cb78=rb_intern("Switch_Clas_Dataflow_Compiler_cb78");
sy_Switch_Clas_Dataflow__append_lp__51dc=rb_intern("Switch_Clas_Dataflow__append_lp__51dc");
sy_Switch_Clas_Dataflow__append_lp__7b62=rb_intern("Switch_Clas_Dataflow__append_lp__7b62");
sy_Switch_Clas_Dataflow__append_lp__8bfa=rb_intern("Switch_Clas_Dataflow__append_lp__8bfa");
sy_Switch_Clas_Dataflow__append_lp__e6cd=rb_intern("Switch_Clas_Dataflow__append_lp__e6cd");
sy_Switch_Clas_Dataflow__at_vis_eq_bin_af53=rb_intern("Switch_Clas_Dataflow__at_vis_eq_bin_af53");
sy_Switch_Clas_Dataflow__lp_=rb_intern("Switch_Clas_Dataflow__lp_");
sy_Switch_Clas_Dataflow__lp_Compile_f25c=rb_intern("Switch_Clas_Dataflow__lp_Compile_f25c");
sy_Switch_Clas_Dataflow_bind_lb_12_rb__980d=rb_intern("Switch_Clas_Dataflow_bind_lb_12_rb__980d");
sy_Switch_Clas_Dataflow_bind_lb_12_rb__9ef5=rb_intern("Switch_Clas_Dataflow_bind_lb_12_rb__9ef5");
sy_Switch_Clas_Dataflow_bind_lb_17_rb__cd44=rb_intern("Switch_Clas_Dataflow_bind_lb_17_rb__cd44");
sy_Switch_Clas_Dataflow_bind_lb_24_rb__d555=rb_intern("Switch_Clas_Dataflow_bind_lb_24_rb__d555");
sy_Switch_Clas_Dataflow_bind_lb_28_rb__f78d=rb_intern("Switch_Clas_Dataflow_bind_lb_28_rb__f78d");
sy_Switch_Clas_Dataflow_empty=rb_intern("Switch_Clas_Dataflow_empty");
sy_Switch_Clas_Dataflow_lattice_dot__5a9e=rb_intern("Switch_Clas_Dataflow_lattice_dot__5a9e");
sy_Switch_Clas_Dataflow_lattice_lb__d8d7=rb_intern("Switch_Clas_Dataflow_lattice_lb__d8d7");
rb_define_method(cls_Switch_Clas_Dataflow,"first",Switch_Clas_Dataflow_first,0);
rb_define_method(cls_Switch_Clas_Dataflow,"first_Switch_Clas_Dataflow",Switch_Clas_Dataflow_first_Switch_Clas_Dataflow,0);
rb_define_method(cls_Switch_Clas_Dataflow,"getvalue",Switch_Clas_Dataflow_getvalue,1);

 cls_Detect_First=rb_define_class("Detect_First",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2"))); 
failobj=rb_eval_string("FAIL");
switchhash_Detect_First_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_1);;
switchhash_Detect_First_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_2);;
switchhash_Detect_First_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Bind\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_3);;
switchhash_Detect_First_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_First_4);;
sy_Detect_First__append_lp__7352=rb_intern("Detect_First__append_lp__7352");
sy_Detect_First__append_lp__b494=rb_intern("Detect_First__append_lp__b494");
sy_Detect_First__at_name_eq_sr_362f=rb_intern("Detect_First__at_name_eq_sr_362f");
sy_Detect_First__do_rules_eq__le__ab16=rb_intern("Detect_First__do_rules_eq__le__ab16");
sy_Detect_First_src_25d9=rb_intern("Detect_First_src_25d9");
sy_Detect_First_src_dot_rule_5acf=rb_intern("Detect_First_src_dot_rule_5acf");
sy_Detect_First_src_dot_rule_d270=rb_intern("Detect_First_src_dot_rule_d270");
rb_define_method(cls_Detect_First,"itrans",Detect_First_itrans,0);
rb_define_method(cls_Detect_First,"must_empty",Detect_First_must_empty,0);
rb_define_method(cls_Detect_First,"root",Detect_First_root,0);

 cls_Detect_Switch_Char=rb_define_class("Detect_Switch_Char",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
switchhash_Detect_Switch_Char_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_10);;
switchhash_Detect_Switch_Char_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_11);;
switchhash_Detect_Switch_Char_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_12);;
switchhash_Detect_Switch_Char_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Apply\nnext h[k]=2 if k<=Apply\nnext h[k]=3 if k<=Many\nnext h[k]=4 if k<=Or\nnext h[k]=5 if k<=Seq\nnext h[k]=6 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_1);;
switchhash_Detect_Switch_Char_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_2);;
switchhash_Detect_Switch_Char_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_3);;
switchhash_Detect_Switch_Char_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_4);;
switchhash_Detect_Switch_Char_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=CAct\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_5);;
switchhash_Detect_Switch_Char_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_6);;
switchhash_Detect_Switch_Char_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_7);;
switchhash_Detect_Switch_Char_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_8);;
switchhash_Detect_Switch_Char_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Char\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Char_9);;
sy_Detect_Switch_Char_Or_lb__ti_bind_ab33=rb_intern("Detect_Switch_Char_Or_lb__ti_bind_ab33");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_99e6");
sy_Detect_Switch_Char_Seq_lb__ti__lp_bi_e56a=rb_intern("Detect_Switch_Char_Seq_lb__ti__lp_bi_e56a");
sy_Detect_Switch_Char_Switch_C_4343=rb_intern("Detect_Switch_Char_Switch_C_4343");
sy_Detect_Switch_Char_Switch_C_605e=rb_intern("Detect_Switch_Char_Switch_C_605e");
sy_Detect_Switch_Char_Switch_C_badf=rb_intern("Detect_Switch_Char_Switch_C_badf");
sy_Detect_Switch_Char_Switch_C_fe8b=rb_intern("Detect_Switch_Char_Switch_C_fe8b");
sy_Detect_Switch_Char__append_lp__05b0=rb_intern("Detect_Switch_Char__append_lp__05b0");
sy_Detect_Switch_Char__append_lp__3d0f=rb_intern("Detect_Switch_Char__append_lp__3d0f");
sy_Detect_Switch_Char__append_lp__599a=rb_intern("Detect_Switch_Char__append_lp__599a");
sy_Detect_Switch_Char__append_lp__6f56=rb_intern("Detect_Switch_Char__append_lp__6f56");
sy_Detect_Switch_Char__append_lp__7352=rb_intern("Detect_Switch_Char__append_lp__7352");
sy_Detect_Switch_Char__append_lp__b375=rb_intern("Detect_Switch_Char__append_lp__b375");
sy_Detect_Switch_Char__append_lp__b494=rb_intern("Detect_Switch_Char__append_lp__b494");
sy_Detect_Switch_Char__append_lp__c323=rb_intern("Detect_Switch_Char__append_lp__c323");
sy_Detect_Switch_Char__at_changed_5352=rb_intern("Detect_Switch_Char__at_changed_5352");
sy_Detect_Switch_Char__at_changed_b885=rb_intern("Detect_Switch_Char__at_changed_b885");
sy_Detect_Switch_Char__at_changed_c681=rb_intern("Detect_Switch_Char__at_changed_c681");
sy_Detect_Switch_Char__at_name_eq_sr_362f=rb_intern("Detect_Switch_Char__at_name_eq_sr_362f");
sy_Detect_Switch_Char__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Char__do_rules_eq__le__ab16");
sy_Detect_Switch_Char__lb__lb_Lattic_d322=rb_intern("Detect_Switch_Char__lb__lb_Lattic_d322");
sy_Detect_Switch_Char__lp_2=rb_intern("Detect_Switch_Char__lp_2");
sy_Detect_Switch_Char__lp_=rb_intern("Detect_Switch_Char__lp_");
sy_Detect_Switch_Char__lp_bind_lb_2_rb__6693=rb_intern("Detect_Switch_Char__lp_bind_lb_2_rb__6693");
sy_Detect_Switch_Char__lp_src_dot_ins_6a75=rb_intern("Detect_Switch_Char__lp_src_dot_ins_6a75");
sy_Detect_Switch_Char_bind_lb_1_rb__pl__42be=rb_intern("Detect_Switch_Char_bind_lb_1_rb__pl__42be");
sy_Detect_Switch_Char_bind_lb_27_rb__d04b=rb_intern("Detect_Switch_Char_bind_lb_27_rb__d04b");
sy_Detect_Switch_Char_bind_lb_32_rb__5e16=rb_intern("Detect_Switch_Char_bind_lb_32_rb__5e16");
sy_Detect_Switch_Char_bind_lb_32_rb__7e2a=rb_intern("Detect_Switch_Char_bind_lb_32_rb__7e2a");
sy_Detect_Switch_Char_bind_lb_3_rb__dot__2d57=rb_intern("Detect_Switch_Char_bind_lb_3_rb__dot__2d57");
sy_Detect_Switch_Char_bind_lb_3_rb__dot__8725=rb_intern("Detect_Switch_Char_bind_lb_3_rb__dot__8725");
sy_Detect_Switch_Char_bind_lb_45_rb__4a92=rb_intern("Detect_Switch_Char_bind_lb_45_rb__4a92");
sy_Detect_Switch_Char_bind_lb_5_rb__lt__1671=rb_intern("Detect_Switch_Char_bind_lb_5_rb__lt__1671");
sy_Detect_Switch_Char_first_lp_sr_3298=rb_intern("Detect_Switch_Char_first_lp_sr_3298");
sy_Detect_Switch_Char_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_Char_if_sp_bind_lb__f1e9");
sy_Detect_Switch_Char_s_eq_Switch_09bd=rb_intern("Detect_Switch_Char_s_eq_Switch_09bd");
sy_Detect_Switch_Char_s_eq_Switch_0f4e=rb_intern("Detect_Switch_Char_s_eq_Switch_0f4e");
sy_Detect_Switch_Char_s_eq_Switch_0f7e=rb_intern("Detect_Switch_Char_s_eq_Switch_0f7e");
sy_Detect_Switch_Char_s_eq_Switch_2226=rb_intern("Detect_Switch_Char_s_eq_Switch_2226");
sy_Detect_Switch_Char_src_25d9=rb_intern("Detect_Switch_Char_src_25d9");
sy_Detect_Switch_Char_src_dot_ary_d5cf=rb_intern("Detect_Switch_Char_src_dot_ary_d5cf");
sy_Detect_Switch_Char_src_dot_rule_5acf=rb_intern("Detect_Switch_Char_src_dot_rule_5acf");
sy_Detect_Switch_Char_src_dot_rule_d270=rb_intern("Detect_Switch_Char_src_dot_rule_d270");
sy_first=rb_intern("first");
rb_define_method(cls_Detect_Switch_Char,"combine_or",Detect_Switch_Char_combine_or,1);
rb_define_method(cls_Detect_Switch_Char,"combine_seq",Detect_Switch_Char_combine_seq,1);
rb_define_method(cls_Detect_Switch_Char,"itrans",Detect_Switch_Char_itrans,0);
rb_define_method(cls_Detect_Switch_Char,"root",Detect_Switch_Char_root,0);
rb_define_method(cls_Detect_Switch_Char,"traverse",Detect_Switch_Char_traverse,0);
rb_define_method(cls_Detect_Switch_Char,"traverse_item",Detect_Switch_Char_traverse_item,0);
rb_define_method(cls_Detect_Switch_Char,"visit",Detect_Switch_Char_visit,0);

 cls_Detect_Switch_Clas=rb_define_class("Detect_Switch_Clas",rb_const_get(rb_cObject,rb_intern("Detect_First"))); 
failobj=rb_eval_string("FAIL");
switchhash_Detect_Switch_Clas_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_1);;
switchhash_Detect_Switch_Clas_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_2);;
switchhash_Detect_Switch_Clas_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_3);;
switchhash_Detect_Switch_Clas_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_4);;
switchhash_Detect_Switch_Clas_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Switch_Clas\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_5);;
switchhash_Detect_Switch_Clas_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_6);;
switchhash_Detect_Switch_Clas_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Grammar\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_7);;
switchhash_Detect_Switch_Clas_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Detect_Switch_Clas_8);;
sy_Detect_Switch_Clas_Or_lb__ti_bind_2778=rb_intern("Detect_Switch_Clas_Or_lb__ti_bind_2778");
sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_99e6");
sy_Detect_Switch_Clas_Seq_lb__ti__lp_bi_fab8=rb_intern("Detect_Switch_Clas_Seq_lb__ti__lp_bi_fab8");
sy_Detect_Switch_Clas_Switch_C_0e01=rb_intern("Detect_Switch_Clas_Switch_C_0e01");
sy_Detect_Switch_Clas_Switch_C_4588=rb_intern("Detect_Switch_Clas_Switch_C_4588");
sy_Detect_Switch_Clas_Switch_C_4c94=rb_intern("Detect_Switch_Clas_Switch_C_4c94");
sy_Detect_Switch_Clas_Switch_C_ee57=rb_intern("Detect_Switch_Clas_Switch_C_ee57");
sy_Detect_Switch_Clas_Switch_C_f93c=rb_intern("Detect_Switch_Clas_Switch_C_f93c");
sy_Detect_Switch_Clas__append_lp__6f56=rb_intern("Detect_Switch_Clas__append_lp__6f56");
sy_Detect_Switch_Clas__append_lp__7352=rb_intern("Detect_Switch_Clas__append_lp__7352");
sy_Detect_Switch_Clas__append_lp__8bfa=rb_intern("Detect_Switch_Clas__append_lp__8bfa");
sy_Detect_Switch_Clas__append_lp__9160=rb_intern("Detect_Switch_Clas__append_lp__9160");
sy_Detect_Switch_Clas__append_lp__b375=rb_intern("Detect_Switch_Clas__append_lp__b375");
sy_Detect_Switch_Clas__append_lp__b494=rb_intern("Detect_Switch_Clas__append_lp__b494");
sy_Detect_Switch_Clas__append_lp__c7ad=rb_intern("Detect_Switch_Clas__append_lp__c7ad");
sy_Detect_Switch_Clas__append_lp__e512=rb_intern("Detect_Switch_Clas__append_lp__e512");
sy_Detect_Switch_Clas__at_changed_5352=rb_intern("Detect_Switch_Clas__at_changed_5352");
sy_Detect_Switch_Clas__at_changed_b885=rb_intern("Detect_Switch_Clas__at_changed_b885");
sy_Detect_Switch_Clas__at_changed_c681=rb_intern("Detect_Switch_Clas__at_changed_c681");
sy_Detect_Switch_Clas__at_name_eq_sr_362f=rb_intern("Detect_Switch_Clas__at_name_eq_sr_362f");
sy_Detect_Switch_Clas__do_rules_eq__le__ab16=rb_intern("Detect_Switch_Clas__do_rules_eq__le__ab16");
sy_Detect_Switch_Clas__lb__lb_Lattic_62e5=rb_intern("Detect_Switch_Clas__lb__lb_Lattic_62e5");
sy_Detect_Switch_Clas__lp_2=rb_intern("Detect_Switch_Clas__lp_2");
sy_Detect_Switch_Clas__lp_=rb_intern("Detect_Switch_Clas__lp_");
sy_Detect_Switch_Clas__lp_bind_lb_2_rb__6693=rb_intern("Detect_Switch_Clas__lp_bind_lb_2_rb__6693");
sy_Detect_Switch_Clas__lp_src_dot_ins_6a75=rb_intern("Detect_Switch_Clas__lp_src_dot_ins_6a75");
sy_Detect_Switch_Clas_bind_lb_17_rb__171f=rb_intern("Detect_Switch_Clas_bind_lb_17_rb__171f");
sy_Detect_Switch_Clas_bind_lb_1_rb__pl__42be=rb_intern("Detect_Switch_Clas_bind_lb_1_rb__pl__42be");
sy_Detect_Switch_Clas_bind_lb_22_rb__6728=rb_intern("Detect_Switch_Clas_bind_lb_22_rb__6728");
sy_Detect_Switch_Clas_bind_lb_22_rb__e2be=rb_intern("Detect_Switch_Clas_bind_lb_22_rb__e2be");
sy_Detect_Switch_Clas_bind_lb_35_rb__0ac2=rb_intern("Detect_Switch_Clas_bind_lb_35_rb__0ac2");
sy_Detect_Switch_Clas_bind_lb_3_rb__dot__2d57=rb_intern("Detect_Switch_Clas_bind_lb_3_rb__dot__2d57");
sy_Detect_Switch_Clas_bind_lb_3_rb__dot__991d=rb_intern("Detect_Switch_Clas_bind_lb_3_rb__dot__991d");
sy_Detect_Switch_Clas_bind_lb_5_rb__lt__1671=rb_intern("Detect_Switch_Clas_bind_lb_5_rb__lt__1671");
sy_Detect_Switch_Clas_c_eq_Switch_f609=rb_intern("Detect_Switch_Clas_c_eq_Switch_f609");
sy_Detect_Switch_Clas_if_sp_bind_lb__f1e9=rb_intern("Detect_Switch_Clas_if_sp_bind_lb__f1e9");
sy_Detect_Switch_Clas_src_25d9=rb_intern("Detect_Switch_Clas_src_25d9");
sy_Detect_Switch_Clas_src_dot_ary_d5cf=rb_intern("Detect_Switch_Clas_src_dot_ary_d5cf");
sy_Detect_Switch_Clas_src_dot_rule_5acf=rb_intern("Detect_Switch_Clas_src_dot_rule_5acf");
sy_Detect_Switch_Clas_src_dot_rule_d270=rb_intern("Detect_Switch_Clas_src_dot_rule_d270");
sy_first=rb_intern("first");
rb_define_method(cls_Detect_Switch_Clas,"combine_or",Detect_Switch_Clas_combine_or,1);
rb_define_method(cls_Detect_Switch_Clas,"combine_seq",Detect_Switch_Clas_combine_seq,1);
rb_define_method(cls_Detect_Switch_Clas,"itrans",Detect_Switch_Clas_itrans,0);
rb_define_method(cls_Detect_Switch_Clas,"root",Detect_Switch_Clas_root,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse",Detect_Switch_Clas_traverse,0);
rb_define_method(cls_Detect_Switch_Clas,"traverse_item",Detect_Switch_Clas_traverse_item,0);
rb_define_method(cls_Detect_Switch_Clas,"visit",Detect_Switch_Clas_visit,0);
 rb_eval_string("testversiondetect_switch('80b51d6a9935b7ba1df7064c7b9e3c94')");}
