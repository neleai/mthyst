#include "cthyst.h"
VALUE cls_Normalize;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_alpha(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Normalize_bind(VALUE self );
VALUE Normalize_int(VALUE self );
VALUE Normalize_line(VALUE self );
VALUE Normalize_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE Normalize_newline(VALUE self );
VALUE Normalize_number(VALUE self );
VALUE Normalize_or(VALUE self );
VALUE Normalize_seq(VALUE self );
VALUE Normalize_token(VALUE self ,VALUE a0);
VALUE Normalize_until(VALUE self ,VALUE a0);
VALUE Normalize_word(VALUE self );
VALUE switchhash_Normalize_1;
VALUE switchhash_Normalize_2;
VALUE switchhash_Normalize_3;
VALUE switchhash_Normalize_4;
VALUE switchhash_Normalize_5;
VALUE switchhash_Normalize_6;
static VALUE c_Placeholder;
static VALUE s_0b_3470;
static VALUE s_0o_6f57;
static VALUE s_0x_f6f8;
static VALUE s___b14a;
static VALUE s__bs__bs__7f81;
static VALUE s__bs_n_1d78;
static VALUE s__bs_r_8ce5;
static VALUE s__bs_r_bs_n_bdb2;
static VALUE s__d41d;
static VALUE s__mi__336d;
static VALUE sy_Normalize_0_cfcd;
static VALUE sy_Normalize_1_c4ca;
static VALUE sy_Normalize_Apply_lb__dq_f_3881;
static VALUE sy_Normalize__append_lp__088f;
static VALUE sy_Normalize__append_lp__0d86;
static VALUE sy_Normalize__append_lp__0eeb;
static VALUE sy_Normalize__append_lp__26c5;
static VALUE sy_Normalize__append_lp__29a3;
static VALUE sy_Normalize__append_lp__2bc4;
static VALUE sy_Normalize__append_lp__3aef;
static VALUE sy_Normalize__append_lp__50ed;
static VALUE sy_Normalize__append_lp__653e;
static VALUE sy_Normalize__append_lp__66a2;
static VALUE sy_Normalize__append_lp__6948;
static VALUE sy_Normalize__append_lp__6ac6;
static VALUE sy_Normalize__append_lp__73f1;
static VALUE sy_Normalize__append_lp__81ec;
static VALUE sy_Normalize__append_lp__a474;
static VALUE sy_Normalize__append_lp__b494;
static VALUE sy_Normalize__append_lp__b9cb;
static VALUE sy_Normalize__append_lp__bc95;
static VALUE sy_Normalize__append_lp__c354;
static VALUE sy_Normalize__append_lp__cbd1;
static VALUE sy_Normalize__append_lp__f8f8;
static VALUE sy_Normalize__append_lp__f960;
static VALUE sy_Normalize__lp_bind_lb_15_94ac;
static VALUE sy_Normalize__lp_bind_lb_16_9270;
static VALUE sy_Normalize__lp_bind_lb_1_rb__5a69;
static VALUE sy_Normalize__lp_bind_lb_8_rb__1b9f;
static VALUE sy_Normalize__lp_bind_lb_9_rb__cfc1;
static VALUE sy_Normalize_bind_lb_0_rb_;
static VALUE sy_Normalize_bind_lb_0_rb__dot__206f;
static VALUE sy_Normalize_bind_lb_0_rb__dot__263e;
static VALUE sy_Normalize_bind_lb_0_rb__lb__1f45;
static VALUE sy_Normalize_bind_lb_2_rb__dot__e24b;
static VALUE sy_Normalize_bind_lb_2_rb__ti__e7b8;
static VALUE sy_Normalize_src_25d9;
static VALUE sy_Normalize_src_dot_ary_d5cf;
static VALUE sy_Normalize_src_dot_free_00b9;
static VALUE sy_apply;
VALUE Normalize_bind(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_5,rb_obj_class(ame_curobj2(ptr))))){case 0/*Bind*/:;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,0/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_6,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,2/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,2/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt1_2;
	success2: *ptr=oldpass2;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto pass1;
 accept1:;
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
case 1/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(pass1);it=rb_funcall(self,sy_Normalize_src_dot_free_00b9,1,bind);  bind_aset(bind,4/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1; break;
}
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,4/*autovar*/); bind_aset(bind,5/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_int(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(24);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto fail; break;
case '0' ... '0':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,1/*m*/,it);
int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'a':;case 'c' ... 'n':;case 'p' ... 'w':;case 'y' ... UC(255):; goto alt1_2; break;
case 'o' ... 'o':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);it=rb_obj_clone(s_0o_6f57); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f8f8,1,bind); it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto alt1_2; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,5/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Normalize__append_lp__088f,1,bind); int oldpos2; while(1){oldpos2=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto break1; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b9cb,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__6ac6,1,bind);  break;
case 'x' ... 'x':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);it=rb_obj_clone(s_0x_f6f8); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__0eeb,1,bind); it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto alt1_2; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,10/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Normalize__append_lp__0d86,1,bind); int oldpos3; while(1){oldpos3=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto break2; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__c354,1,bind);  break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__66a2,1,bind);  break;
case 'b' ... 'b':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2);it=rb_obj_clone(s_0b_3470); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__73f1,1,bind); it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto alt1_2; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,15/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Normalize__append_lp__a474,1,bind); int oldpos4; while(1){oldpos4=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto break3; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__50ed,1,bind);  break;
}  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos4; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__3aef,1,bind);  break;
}
;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__26c5,1,bind); int oldpos5; while(1){oldpos5=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break4; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f960,1,bind);  break;
}  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos5; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__2bc4,1,bind); 
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
it=bind_aget(bind,0/*autovar*/); bind_aset(bind,22/*n*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_1_rb__5a69,1,bind);  bind_aset(bind,23/*_result*/,it);
 break;
case '1' ... '9':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,1/*m*/,it);
it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__26c5,1,bind); int oldpos6; while(1){oldpos6=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break5; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f960,1,bind);  break;
}  } break5: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__2bc4,1,bind); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,22/*n*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_1_rb__5a69,1,bind);  bind_aset(bind,23/*_result*/,it);
 break;
} break;
case '-' ... '-':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos7=ptr->pos;
alt2_1:;  it=AmethystCore_anything(self ); FAILTEST(alt2_2);it=rb_obj_clone(s__mi__336d); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,1/*m*/,it);

;goto accept2;
alt2_2: ptr->pos=oldpos7;it=rb_obj_clone(s__d41d); bind_aset(bind,1/*m*/,it);

;goto accept2;
alt2_3: ptr->pos=oldpos7;goto fail;
 accept2:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto fail; break;
case '0' ... '0':; int oldpos8=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'a':;case 'c' ... 'n':;case 'p' ... 'w':;case 'y' ... UC(255):; goto alt3_2; break;
case 'o' ... 'o':;   it=AmethystCore_anything(self ); FAILTEST(alt3_2);it=rb_obj_clone(s_0o_6f57); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f8f8,1,bind); it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto alt3_2; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,5/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Normalize__append_lp__088f,1,bind); int oldpos9; while(1){oldpos9=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto break6; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b9cb,1,bind);  break;
}  } break6: ame_setstop(self,Qnil); ptr->pos=oldpos9; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__6ac6,1,bind);  break;
case 'x' ... 'x':;   it=AmethystCore_anything(self ); FAILTEST(alt3_2);it=rb_obj_clone(s_0x_f6f8); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__0eeb,1,bind); it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto alt3_2; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,10/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Normalize__append_lp__0d86,1,bind); int oldpos10; while(1){oldpos10=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto break7; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__c354,1,bind);  break;
}  } break7: ame_setstop(self,Qnil); ptr->pos=oldpos10; it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__66a2,1,bind);  break;
case 'b' ... 'b':;   it=AmethystCore_anything(self ); FAILTEST(alt3_2);it=rb_obj_clone(s_0b_3470); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__73f1,1,bind); it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto alt3_2; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,15/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Normalize__append_lp__a474,1,bind); int oldpos11; while(1){oldpos11=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto break8; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(break8); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__50ed,1,bind);  break;
}  } break8: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__3aef,1,bind);  break;
}
;goto accept3;
alt3_2: ptr->pos=oldpos8;it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__26c5,1,bind); int oldpos12; while(1){oldpos12=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break9; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break9); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f960,1,bind);  break;
}  } break9: ame_setstop(self,Qnil); ptr->pos=oldpos12; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__2bc4,1,bind); 
;goto accept3;
alt3_3: ptr->pos=oldpos8;goto fail;
 accept3:;
 break;
case '1' ... '9':; it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__26c5,1,bind); int oldpos13; while(1){oldpos13=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break10; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f960,1,bind);  break;
}  } break10: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__2bc4,1,bind);  break;
}it=bind_aget(bind,0/*autovar*/); bind_aset(bind,22/*n*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_1_rb__5a69,1,bind);  bind_aset(bind,23/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Normalize_line(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(9):;case UC(11) ... UC(12):;case UC(14) ... UC(255):;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__cbd1,1,bind);  break;
case UC(10) ... UC(10):;case UC(13) ... UC(13):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(9):;case UC(11) ... UC(12):;case UC(14) ... UC(255):;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__cbd1,1,bind);  break;
case UC(10) ... UC(10):;case UC(13) ... UC(13):; int oldpos2=ptr->pos;
alt1_1:;  it=Normalize_newline(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue); bind_aset(bind,1/*autovar*/,it);
ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept1;
alt1_2: ptr->pos=oldpos2;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Normalize__append_lp__cbd1,1,bind);  break;
} break;
} if (ame_getstop(self)!=Qnil){oldpos1=ptr->pos;goto break1;} } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__ti__e7b8,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Normalize_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(9); bind_aset(bind,1/*rule*/,a0);bind_aset(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ptr->pos;
alt1_1:; it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__29a3,1,bind); it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos; it=bind_aget(bind,4/*delim*/); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=bind_aget(bind,5/*s*/); it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__6948,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,3/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__6ac6,1,bind); it=rb_funcall(self,sy_Normalize_bind_lb_0_rb_,1,bind);  bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Normalize_newline(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(9):;case UC(11) ... UC(12):;case UC(14) ... UC(255):; goto fail; break;
case UC(10) ... UC(10):;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_obj_clone(s__bs_n_1d78); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;
case UC(13) ... UC(13):;   it=AmethystCore_anything(self ); FAILTEST(fail);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(9):;case UC(11) ... UC(255):; it=rb_obj_clone(s__bs_r_8ce5); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;
case UC(10) ... UC(10):; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);it=rb_obj_clone(s__bs_r_bs_n_bdb2); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_obj_clone(s__bs_r_8ce5); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
} break;
}
return it;
fail: return failobj; }
VALUE Normalize_number(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... UC(255):; goto fail; break;
case '-' ... '-':;case '0' ... '9':; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... UC(255):; goto fail; break;
case '-' ... '-':;case '0' ... '9':;   it=Normalize_int(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
} break;
}
return it;
fail: return failobj; }
VALUE Normalize_or(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(19);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_1,rb_obj_class(ame_curobj2(ptr))))){case 0/*Or*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*or*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_2,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt1_2;
	success2: *ptr=oldpass2;

;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
int oldpos3=ptr->pos;
alt2_1:;it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_8_rb__1b9f,1,bind); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos3;it=bind_aget(bind,7/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); 
;goto accept2;
alt2_3: ptr->pos=oldpos3;goto alt1_3;
 accept2:;

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case 1/*Or*/:; int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,10/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,10/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__bc95,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,12/*autovar*/,it);
int oldpos5=ptr->pos;
alt4_1:;it=bind_aget(bind,12/*autovar*/); bind_aset(bind,8/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_8_rb__1b9f,1,bind); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos5;it=bind_aget(bind,12/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); 
;goto accept4;
alt4_3: ptr->pos=oldpos5;goto alt3_3;
 accept4:;

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept3:;
 break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,5/*autovar*/,it);
it=bind_aget(bind,5/*autovar*/); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,13/*autovar*/,it);
int oldpos6=ptr->pos;
alt5_1:;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,8/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_8_rb__1b9f,1,bind); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos6;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,9/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__653e,1,bind); 
;goto accept5;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept5:;
 break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,14/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,14/*autovar*/);ptr->len=1;
 int oldpos7=ptr->pos;
alt6_1:;it=rb_funcall(self,sy_Normalize_0_cfcd,1,bind);  bind_aset(bind,15/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,16/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_15_94ac,1,bind); FAILTEST(alt6_2);it=rb_funcall(self,sy_Normalize_Apply_lb__dq_f_3881,1,bind);  bind_aset(bind,17/*autovar*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;it=rb_funcall(self,sy_Normalize_1_c4ca,1,bind);  bind_aset(bind,15/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,16/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_15_94ac,1,bind); FAILTEST(alt6_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,17/*autovar*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,17/*autovar*/,it);

;goto accept6;
alt6_4: ptr->pos=oldpos7;goto pass5;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto fail;
	success5: *ptr=oldpass5;
it=bind_aget(bind,17/*autovar*/); bind_aset(bind,18/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_seq(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(20);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_3,rb_obj_class(ame_curobj2(ptr))))){case 0/*Seq*/:; it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,2/*seq*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_4,rb_obj_class(ame_curobj2(ptr))))){case 0/*Apply*/:; int oldpos2=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2); bind_aset(bind,3/*autovar*/,it);
cstruct oldpass2=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,3/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=AmethystCore_anything(self ); FAILTEST(pass2); bind_aset(bind,4/*autovar*/,it);
cstruct oldpass3=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,4/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
   it=Amethyst_spaces(self ); FAILTEST(pass3);switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... 'e':;case 'g' ... UC(255):; goto pass3; break;
case 'f' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(pass3);if (strncmp(ame_curstr2(ptr),"ails",4)) goto pass3; else ptr->pos+=4; break;
}it=Qnil;if (ptr->pos<ptr->len) goto pass3;
	goto success3;
	pass3: *ptr=oldpass3; goto pass2;
	success3: *ptr=oldpass3;
it=rb_funcall(self,sy_Normalize_src_25d9,1,bind);  bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass2;
	goto success2;
	pass2: *ptr=oldpass2; goto alt1_2;
	success2: *ptr=oldpass2;
ptr->pos=ptr->len;
;goto accept1;
alt1_2: ptr->pos=oldpos2;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
int oldpos3=ptr->pos;
alt2_1:;it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_9_rb__cfc1,1,bind); FAILTEST(alt2_2);
;goto accept2;
alt2_2: ptr->pos=oldpos3;it=bind_aget(bind,8/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b494,1,bind); 
;goto accept2;
alt2_3: ptr->pos=oldpos3;goto alt1_3;
 accept2:;

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case 1/*Seq*/:; int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2); bind_aset(bind,11/*autovar*/,it);
cstruct oldpass4=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,11/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
 ptr->pos=ptr->len;it=rb_funcall(self,sy_Normalize_src_dot_ary_d5cf,1,bind);  bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__66a2,1,bind); it=Qnil;if (ptr->pos<ptr->len) goto pass4;
	goto success4;
	pass4: *ptr=oldpass4; goto alt3_2;
	success4: *ptr=oldpass4;

;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=AmethystCore_anything(self ); FAILTEST(alt3_3); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,13/*autovar*/,it);
int oldpos5=ptr->pos;
alt4_1:;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,9/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_9_rb__cfc1,1,bind); FAILTEST(alt4_2);
;goto accept4;
alt4_2: ptr->pos=oldpos5;it=bind_aget(bind,13/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b494,1,bind); 
;goto accept4;
alt4_3: ptr->pos=oldpos5;goto alt3_3;
 accept4:;

;goto accept3;
alt3_3: ptr->pos=oldpos4;goto break1;
 accept3:;
 break;
case 2/*Object*/:;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=bind_aget(bind,6/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,14/*autovar*/,it);
int oldpos6=ptr->pos;
alt5_1:;it=bind_aget(bind,14/*autovar*/); bind_aset(bind,9/*x*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_9_rb__cfc1,1,bind); FAILTEST(alt5_2);
;goto accept5;
alt5_2: ptr->pos=oldpos6;it=bind_aget(bind,14/*autovar*/); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__b494,1,bind); 
;goto accept5;
alt5_3: ptr->pos=oldpos6;goto break1;
 accept5:;
 break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__263e,1,bind);  bind_aset(bind,15/*autovar*/,it);
cstruct oldpass5=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=failobj;ptr->ary=alloca(sizeof(VALUE));ptr->ary[0]=bind_aget(bind,15/*autovar*/);ptr->len=1;
 int oldpos7=ptr->pos;
alt6_1:;it=rb_funcall(self,sy_Normalize_0_cfcd,1,bind);  bind_aset(bind,16/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_2); bind_aset(bind,17/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_16_9270,1,bind); FAILTEST(alt6_2);it=c_Placeholder; bind_aset(bind,18/*autovar*/,it);

;goto accept6;
alt6_2: ptr->pos=oldpos7;it=rb_funcall(self,sy_Normalize_1_c4ca,1,bind);  bind_aset(bind,16/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt6_3); bind_aset(bind,17/*a*/,it);
it=rb_funcall(self,sy_Normalize__lp_bind_lb_16_9270,1,bind); FAILTEST(alt6_3);it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__lb__1f45,1,bind);  bind_aset(bind,18/*autovar*/,it);

;goto accept6;
alt6_3: ptr->pos=oldpos7;  it=AmethystCore_anything(self ); FAILTEST(alt6_4);it=rb_funcall(self,sy_Normalize_bind_lb_2_rb__dot__e24b,1,bind);  bind_aset(bind,18/*autovar*/,it);

;goto accept6;
alt6_4: ptr->pos=oldpos7;goto pass5;
 accept6:;
it=Qnil;if (ptr->pos<ptr->len) goto pass5;
	goto success5;
	pass5: *ptr=oldpass5; goto fail;
	success5: *ptr=oldpass5;
it=bind_aget(bind,18/*autovar*/); bind_aset(bind,19/*_result*/,it);
 break;
case 1/*Object*/:; goto fail; break;
}
return it;
fail: return failobj; }
VALUE Normalize_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Normalize_until(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(7); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; int oldpos2=ptr->pos;
alt1_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*s*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept1;
alt1_2: ptr->pos=oldpos2;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}  it=Amethyst_empty(self ); FAILTEST(alt1_3);  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f8f8,1,bind); 
;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
 break;
case UC(92) ... UC(92):; int oldpos3=ptr->pos;
alt2_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*s*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept2;
alt2_2: ptr->pos=oldpos3;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}int oldpos4=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__81ec,1,bind); 
;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=Amethyst_empty(self ); FAILTEST(alt3_3);
;goto accept3;
alt3_3: ptr->pos=oldpos4;goto alt2_3;
 accept3:;
  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Normalize__append_lp__f8f8,1,bind); 
;goto accept2;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept2:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos1=ptr->pos;goto break1;} } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=rb_funcall(self,sy_Normalize_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE Normalize_word(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case 'a' ... 'z':; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case 'a' ... 'z':;   it=Amethyst_alpha(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
} break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_obj_clone(s___b14a); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
void Init_normalize_c(){ 
 cls_Normalize=rb_define_class("Normalize",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_Placeholder=rb_const_get(rb_cObject, rb_intern("Placeholder"));rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_Placeholder);
s_0b_3470=rb_str_new2("0b");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_0b_3470);
s_0o_6f57=rb_str_new2("0o");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_0o_6f57);
s_0x_f6f8=rb_str_new2("0x");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_0x_f6f8);
s___b14a=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s___b14a);
s__bs__bs__7f81=rb_str_new2("\\");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs__bs__7f81);
s__bs_n_1d78=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_n_1d78);
s__bs_r_8ce5=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_r_8ce5);
s__bs_r_bs_n_bdb2=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__bs_r_bs_n_bdb2);
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s__mi__336d=rb_str_new2("-");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__mi__336d);
switchhash_Normalize_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_1);;
switchhash_Normalize_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_2);;
switchhash_Normalize_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_3);;
switchhash_Normalize_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_4);;
switchhash_Normalize_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_5);;
switchhash_Normalize_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),switchhash_Normalize_6);;
sy_Normalize_0_cfcd=rb_intern("Normalize_0_cfcd");
sy_Normalize_1_c4ca=rb_intern("Normalize_1_c4ca");
sy_Normalize_Apply_lb__dq_f_3881=rb_intern("Normalize_Apply_lb__dq_f_3881");
sy_Normalize__append_lp__088f=rb_intern("Normalize__append_lp__088f");
sy_Normalize__append_lp__0d86=rb_intern("Normalize__append_lp__0d86");
sy_Normalize__append_lp__0eeb=rb_intern("Normalize__append_lp__0eeb");
sy_Normalize__append_lp__26c5=rb_intern("Normalize__append_lp__26c5");
sy_Normalize__append_lp__29a3=rb_intern("Normalize__append_lp__29a3");
sy_Normalize__append_lp__2bc4=rb_intern("Normalize__append_lp__2bc4");
sy_Normalize__append_lp__3aef=rb_intern("Normalize__append_lp__3aef");
sy_Normalize__append_lp__50ed=rb_intern("Normalize__append_lp__50ed");
sy_Normalize__append_lp__653e=rb_intern("Normalize__append_lp__653e");
sy_Normalize__append_lp__66a2=rb_intern("Normalize__append_lp__66a2");
sy_Normalize__append_lp__6948=rb_intern("Normalize__append_lp__6948");
sy_Normalize__append_lp__6ac6=rb_intern("Normalize__append_lp__6ac6");
sy_Normalize__append_lp__73f1=rb_intern("Normalize__append_lp__73f1");
sy_Normalize__append_lp__81ec=rb_intern("Normalize__append_lp__81ec");
sy_Normalize__append_lp__a474=rb_intern("Normalize__append_lp__a474");
sy_Normalize__append_lp__b494=rb_intern("Normalize__append_lp__b494");
sy_Normalize__append_lp__b9cb=rb_intern("Normalize__append_lp__b9cb");
sy_Normalize__append_lp__bc95=rb_intern("Normalize__append_lp__bc95");
sy_Normalize__append_lp__c354=rb_intern("Normalize__append_lp__c354");
sy_Normalize__append_lp__cbd1=rb_intern("Normalize__append_lp__cbd1");
sy_Normalize__append_lp__f8f8=rb_intern("Normalize__append_lp__f8f8");
sy_Normalize__append_lp__f960=rb_intern("Normalize__append_lp__f960");
sy_Normalize__lp_bind_lb_15_94ac=rb_intern("Normalize__lp_bind_lb_15_94ac");
sy_Normalize__lp_bind_lb_16_9270=rb_intern("Normalize__lp_bind_lb_16_9270");
sy_Normalize__lp_bind_lb_1_rb__5a69=rb_intern("Normalize__lp_bind_lb_1_rb__5a69");
sy_Normalize__lp_bind_lb_8_rb__1b9f=rb_intern("Normalize__lp_bind_lb_8_rb__1b9f");
sy_Normalize__lp_bind_lb_9_rb__cfc1=rb_intern("Normalize__lp_bind_lb_9_rb__cfc1");
sy_Normalize_bind_lb_0_rb_=rb_intern("Normalize_bind_lb_0_rb_");
sy_Normalize_bind_lb_0_rb__dot__206f=rb_intern("Normalize_bind_lb_0_rb__dot__206f");
sy_Normalize_bind_lb_0_rb__dot__263e=rb_intern("Normalize_bind_lb_0_rb__dot__263e");
sy_Normalize_bind_lb_0_rb__lb__1f45=rb_intern("Normalize_bind_lb_0_rb__lb__1f45");
sy_Normalize_bind_lb_2_rb__dot__e24b=rb_intern("Normalize_bind_lb_2_rb__dot__e24b");
sy_Normalize_bind_lb_2_rb__ti__e7b8=rb_intern("Normalize_bind_lb_2_rb__ti__e7b8");
sy_Normalize_src_25d9=rb_intern("Normalize_src_25d9");
sy_Normalize_src_dot_ary_d5cf=rb_intern("Normalize_src_dot_ary_d5cf");
sy_Normalize_src_dot_free_00b9=rb_intern("Normalize_src_dot_free_00b9");
sy_apply=rb_intern("apply");
rb_define_method(cls_Normalize,"bind",Normalize_bind,0);
rb_define_method(cls_Normalize,"int",Normalize_int,0);
rb_define_method(cls_Normalize,"line",Normalize_line,0);
rb_define_method(cls_Normalize,"listOf",Normalize_listOf,2);
rb_define_method(cls_Normalize,"newline",Normalize_newline,0);
rb_define_method(cls_Normalize,"number",Normalize_number,0);
rb_define_method(cls_Normalize,"or",Normalize_or,0);
rb_define_method(cls_Normalize,"seq",Normalize_seq,0);
rb_define_method(cls_Normalize,"token",Normalize_token,1);
rb_define_method(cls_Normalize,"until",Normalize_until,1);
rb_define_method(cls_Normalize,"word",Normalize_word,0);
 rb_eval_string("testversionnormalize('c34396102ab8452380304da783d16bdc')");}
