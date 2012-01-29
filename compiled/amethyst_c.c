#include "cthyst.h"
VALUE cls_Amethyst;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst__(VALUE self );
VALUE Amethyst_alnum(VALUE self );
VALUE Amethyst_alpha(VALUE self );
VALUE Amethyst_char(VALUE self );
VALUE Amethyst_clas(VALUE self ,VALUE a0);
VALUE Amethyst_digit(VALUE self );
VALUE Amethyst_empty(VALUE self );
VALUE Amethyst_eof(VALUE self );
VALUE Amethyst_fails(VALUE self );
VALUE Amethyst_false(VALUE self );
VALUE Amethyst_int(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_lower(VALUE self );
VALUE Amethyst_member(VALUE self ,VALUE a0);
VALUE Amethyst_newline(VALUE self );
VALUE Amethyst_nil(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_regch(VALUE self ,VALUE a0);
VALUE Amethyst_replace(VALUE self ,VALUE a0);
VALUE Amethyst_seq(VALUE self ,VALUE a0);
VALUE Amethyst_space(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Amethyst_token(VALUE self ,VALUE a0);
VALUE Amethyst_true(VALUE self );
VALUE Amethyst_until(VALUE self ,VALUE a0);
VALUE Amethyst_upper(VALUE self );
VALUE Amethyst_word(VALUE self );
VALUE Amethyst_xdigit(VALUE self );
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
static VALUE sy_Amethyst__append_lp__088f;
static VALUE sy_Amethyst__append_lp__0d86;
static VALUE sy_Amethyst__append_lp__0eeb;
static VALUE sy_Amethyst__append_lp__26c5;
static VALUE sy_Amethyst__append_lp__29a3;
static VALUE sy_Amethyst__append_lp__2bc4;
static VALUE sy_Amethyst__append_lp__3aef;
static VALUE sy_Amethyst__append_lp__50ed;
static VALUE sy_Amethyst__append_lp__66a2;
static VALUE sy_Amethyst__append_lp__6948;
static VALUE sy_Amethyst__append_lp__6ac6;
static VALUE sy_Amethyst__append_lp__73f1;
static VALUE sy_Amethyst__append_lp__81ec;
static VALUE sy_Amethyst__append_lp__a474;
static VALUE sy_Amethyst__append_lp__b9cb;
static VALUE sy_Amethyst__append_lp__c354;
static VALUE sy_Amethyst__append_lp__cbd1;
static VALUE sy_Amethyst__append_lp__f8f8;
static VALUE sy_Amethyst__append_lp__f960;
static VALUE sy_Amethyst__lp_bind_lb_0_rb__9f45;
static VALUE sy_Amethyst__lp_bind_lb_0_rb__b1f4;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__4329;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__5a69;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__abc3;
static VALUE sy_Amethyst__lp_bind_lb_2_rb__7d6d;
static VALUE sy_Amethyst__lp_false_rp__sp__c3c5;
static VALUE sy_Amethyst_bind_lb_0_rb_;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__206f;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__6a2a;
static VALUE sy_Amethyst_bind_lb_0_rb__dot__ddb4;
static VALUE sy_Amethyst_bind_lb_1_rb__ti__cfcb;
static VALUE sy_Amethyst_bind_lb_2_rb__ti__e7b8;
static VALUE sy_apply;
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; goto fail; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '`':;case '{' ... UC(255):; goto fail; break;
case '0' ... '9':;   it=Amethyst_digit(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case 'A' ... 'Z':;case 'a' ... 'z':;   it=Amethyst_alpha(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;   it=Amethyst_upper(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case 'a' ... 'z':;   it=Amethyst_lower(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*c*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__9f45,1,bind); FAILTEST(fail);it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb_,1,bind);  bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5); bind_aset(bind,0/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*cls*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind); FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto fail; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qnil; bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue);goto alt1_2;
ame_setcut(self,Qnil);goto accept1;
alt1_2: ptr->pos=oldpos1;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}  it=Amethyst_empty(self ); FAILTEST(alt1_3); bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Amethyst_fails(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst__lp_false_rp__sp__c3c5,1,bind); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_false(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qfalse; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_int(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(24);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... UC(255):; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,1/*m*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto fail; break;
case '0' ... '0':; int oldpos1=ptr->pos;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);int oldpos2=ptr->pos;
alt2_1:;if (strncmp(ame_curstr2(ptr),"x",1)) goto alt2_2; else ptr->pos+=1;it=rb_obj_clone(s_0x_f6f8); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f8f8,1,bind); it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto alt2_2; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(alt2_2); bind_aset(bind,5/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Amethyst__append_lp__088f,1,bind); int oldpos3; while(1){oldpos3=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__b9cb,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos3; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6ac6,1,bind); 
;goto accept2;
alt2_2: ptr->pos=oldpos2;if (strncmp(ame_curstr2(ptr),"b",1)) goto alt2_3; else ptr->pos+=1;it=rb_obj_clone(s_0b_3470); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__0eeb,1,bind); it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto alt2_3; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,10/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Amethyst__append_lp__0d86,1,bind); int oldpos4; while(1){oldpos4=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto break2; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(break2); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__c354,1,bind);  break;
}  } break2: ame_setstop(self,Qnil); ptr->pos=oldpos4; it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__66a2,1,bind); 
;goto accept2;
alt2_3: ptr->pos=oldpos2;if (strncmp(ame_curstr2(ptr),"o",1)) goto alt2_4; else ptr->pos+=1;it=rb_obj_clone(s_0o_6f57); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__73f1,1,bind); it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto alt2_4; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(alt2_4); bind_aset(bind,15/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Amethyst__append_lp__a474,1,bind); int oldpos5; while(1){oldpos5=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto break3; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(break3); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__50ed,1,bind);  break;
}  } break3: ame_setstop(self,Qnil); ptr->pos=oldpos5; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__3aef,1,bind); 
;goto accept2;
alt2_4: ptr->pos=oldpos2;goto alt1_2;
 accept2:;

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__26c5,1,bind); int oldpos6; while(1){oldpos6=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break4; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break4); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f960,1,bind);  break;
}  } break4: ame_setstop(self,Qnil); ptr->pos=oldpos6; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__2bc4,1,bind); 
;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case '1' ... '9':; it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__26c5,1,bind); int oldpos7; while(1){oldpos7=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break5; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break5); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f960,1,bind);  break;
}  } break5: ame_setstop(self,Qnil); ptr->pos=oldpos7; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__2bc4,1,bind);  break;
}it=bind_aget(bind,0/*autovar*/); bind_aset(bind,22/*n*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__5a69,1,bind);  bind_aset(bind,23/*_result*/,it);
 break;
case '-' ... '-':; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos8=ptr->pos;
alt3_1:;  it=AmethystCore_anything(self ); FAILTEST(alt3_2);it=rb_obj_clone(s__mi__336d); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,1/*m*/,it);

;goto accept3;
alt3_2: ptr->pos=oldpos8;it=rb_obj_clone(s__d41d); bind_aset(bind,1/*m*/,it);

;goto accept3;
alt3_3: ptr->pos=oldpos8;goto fail;
 accept3:;
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto fail; break;
case '0' ... '0':; int oldpos9=ptr->pos;
alt4_1:;  it=AmethystCore_anything(self ); FAILTEST(alt4_2);int oldpos10=ptr->pos;
alt5_1:;if (strncmp(ame_curstr2(ptr),"x",1)) goto alt5_2; else ptr->pos+=1;it=rb_obj_clone(s_0x_f6f8); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f8f8,1,bind); it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto alt5_2; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(alt5_2); bind_aset(bind,5/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Amethyst__append_lp__088f,1,bind); int oldpos11; while(1){oldpos11=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto break6; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(break6); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__b9cb,1,bind);  break;
}  } break6: ame_setstop(self,Qnil); ptr->pos=oldpos11; it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6ac6,1,bind); 
;goto accept5;
alt5_2: ptr->pos=oldpos10;if (strncmp(ame_curstr2(ptr),"b",1)) goto alt5_3; else ptr->pos+=1;it=rb_obj_clone(s_0b_3470); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,8/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__0eeb,1,bind); it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto alt5_3; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(alt5_3); bind_aset(bind,10/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Amethyst__append_lp__0d86,1,bind); int oldpos12; while(1){oldpos12=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto break7; break;
case '0' ... '1':;   it=AmethystCore_anything(self ); FAILTEST(break7); bind_aset(bind,11/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__c354,1,bind);  break;
}  } break7: ame_setstop(self,Qnil); ptr->pos=oldpos12; it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__66a2,1,bind); 
;goto accept5;
alt5_3: ptr->pos=oldpos10;if (strncmp(ame_curstr2(ptr),"o",1)) goto alt5_4; else ptr->pos+=1;it=rb_obj_clone(s_0o_6f57); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,13/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__73f1,1,bind); it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto alt5_4; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(alt5_4); bind_aset(bind,15/*autovar*/,it);
 break;
}it=rb_funcall(self,sy_Amethyst__append_lp__a474,1,bind); int oldpos13; while(1){oldpos13=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto break8; break;
case '0' ... '7':;   it=AmethystCore_anything(self ); FAILTEST(break8); bind_aset(bind,16/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__50ed,1,bind);  break;
}  } break8: ame_setstop(self,Qnil); ptr->pos=oldpos13; it=bind_aget(bind,14/*autovar*/); bind_aset(bind,17/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__3aef,1,bind); 
;goto accept5;
alt5_4: ptr->pos=oldpos10;goto alt4_2;
 accept5:;

;goto accept4;
alt4_2: ptr->pos=oldpos9;it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(alt4_3); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__26c5,1,bind); int oldpos14; while(1){oldpos14=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break9; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break9); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f960,1,bind);  break;
}  } break9: ame_setstop(self,Qnil); ptr->pos=oldpos14; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__2bc4,1,bind); 
;goto accept4;
alt4_3: ptr->pos=oldpos9;goto fail;
 accept4:;
 break;
case '1' ... '9':; it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,19/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__26c5,1,bind); int oldpos15; while(1){oldpos15=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break10; break;
case '0' ... '9':;   it=AmethystCore_anything(self ); FAILTEST(break10); bind_aset(bind,20/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f960,1,bind);  break;
}  } break10: ame_setstop(self,Qnil); ptr->pos=oldpos15; it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__2bc4,1,bind);  break;
}it=bind_aget(bind,0/*autovar*/); bind_aset(bind,22/*n*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__5a69,1,bind);  bind_aset(bind,23/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_line(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(9):;case UC(11) ... UC(12):;case UC(14) ... UC(255):;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__cbd1,1,bind);  break;
case UC(10) ... UC(10):;case UC(13) ... UC(13):; int oldpos2=ptr->pos;
alt1_1:;  it=Amethyst_newline(self ); FAILTEST(alt1_2);ame_setcut(self,Qtrue); bind_aset(bind,1/*autovar*/,it);
ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept1;
alt1_2: ptr->pos=oldpos2;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept1:;
it=rb_funcall(self,sy_Amethyst__append_lp__cbd1,1,bind);  break;
} if (ame_getstop(self)!=Qnil){oldpos1=ptr->pos;goto break1;} } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
it=rb_funcall(self,sy_Amethyst_bind_lb_2_rb__ti__e7b8,1,bind);  bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(9); bind_aset(bind,1/*rule*/,a0);bind_aset(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ptr->pos;
alt1_1:; it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__29a3,1,bind); it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2; while(1){oldpos2=ptr->pos; it=bind_aget(bind,4/*delim*/); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=bind_aget(bind,5/*s*/); it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6948,1,bind);   } break1: ame_setstop(self,Qnil); ptr->pos=oldpos2; it=bind_aget(bind,3/*autovar*/); bind_aset(bind,7/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__6ac6,1,bind); it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb_,1,bind);  bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=Amethyst_empty(self ); FAILTEST(alt1_3);it=rb_ary_new3(0); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case '{' ... UC(255):; goto fail; break;
case 'a' ... 'z':;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_member(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,1/*x*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__4329,1,bind); FAILTEST(fail);it=bind_aget(bind,0/*a*/); bind_aset(bind,2/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_newline(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(9):;case UC(11) ... UC(12):;case UC(14) ... UC(255):; goto fail; break;
case UC(10) ... UC(10):;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_obj_clone(s__bs_n_1d78); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;
case UC(13) ... UC(13):;   it=AmethystCore_anything(self ); FAILTEST(fail);int oldpos1=ptr->pos;
alt1_1:;if (strncmp(ame_curstr2(ptr),"\n",1)) goto alt1_2; else ptr->pos+=1;it=rb_obj_clone(s__bs_r_bs_n_bdb2); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=rb_obj_clone(s__bs_r_8ce5); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_nil(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qnil; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_number(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... '/':;case ':' ... UC(255):; goto fail; break;
case '-' ... '-':;case '0' ... '9':;   it=Amethyst_int(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5); bind_aset(bind,2/*rule*/,a0);bind_aset(bind,0/*obj*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*obj*/); bind_aset(bind,1/*autovar*/,it);
cstruct oldpass1=*ptr; ptr->pos=ptr->len=0; ptr->ary=NULL;
          ptr->src=bind_aget(bind,1/*autovar*/); if(TYPE(ptr->src)==T_STRING) {ptr->str=RSTRING_PTR(ptr->src);ptr->len=RSTRING_LEN(ptr->src);} else { VALUE ary;    if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;    else  ary=rb_funcall(ptr->src,s_to_a,0);    ptr->ary=RARRAY_PTR(ary);    ptr->len=RARRAY_LEN(ary);}
  it=bind_aget(bind,2/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(pass1); bind_aset(bind,3/*autovar*/,it);
it=Qnil;if (ptr->pos<ptr->len) goto pass1;
	goto success1;
	pass1: *ptr=oldpass1; goto fail;
	success1: *ptr=oldpass1;
it=bind_aget(bind,3/*autovar*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__6a2a,1,bind);  bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_2_rb__7d6d,1,bind); FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__ddb4,1,bind);  bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_2_rb__7d6d,1,bind); FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5); bind_aset(bind,0/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=bind_aget(bind,0/*regex*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind); FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_replace(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3); bind_aset(bind,0/*exp*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ptr->pos;
alt1_1:; it=bind_aget(bind,0/*exp*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*it*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*it*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__ti__cfcb,1,bind);  bind_aset(bind,2/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; goto fail; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; goto break1; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':;   it=AmethystCore_anything(self ); FAILTEST(break1); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__29a3,1,bind);  break;
}  } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=bind_aget(bind,0/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Amethyst_spaces(self ); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_true(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=Qtrue; bind_aset(bind,0/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,1/*a*/,it);
it=rb_funcall(self,sy_Amethyst__lp_bind_lb_0_rb__b1f4,1,bind); FAILTEST(fail);it=bind_aget(bind,1/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_until(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(7); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; int oldpos2=ptr->pos;
alt1_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*s*/);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue);
ame_setcut(self,Qnil);goto accept1;
alt1_2: ptr->pos=oldpos2;if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}  it=Amethyst_empty(self ); FAILTEST(alt1_3);  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f8f8,1,bind); 
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
it=rb_funcall(self,sy_Amethyst__append_lp__81ec,1,bind); 
;goto accept3;
alt3_2: ptr->pos=oldpos4;  it=Amethyst_empty(self ); FAILTEST(alt3_3);
;goto accept3;
alt3_3: ptr->pos=oldpos4;goto alt2_3;
 accept3:;
  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Amethyst__append_lp__f8f8,1,bind); 
;goto accept2;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept2:;
 break;
} if (ame_getstop(self)!=Qnil){oldpos1=ptr->pos;goto break1;} } break1: ame_setstop(self,Qnil); ptr->pos=oldpos1; it=rb_funcall(self,sy_Amethyst_bind_lb_0_rb__dot__206f,1,bind);  bind_aset(bind,6/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case 'a' ... 'z':;   it=Amethyst_alpha(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case '_' ... '_':;   it=AmethystCore_anything(self ); FAILTEST(fail);it=rb_obj_clone(s___b14a); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto fail; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':;   it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
void Init_amethyst_c(){ 
 cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore"))); 
failobj=rb_eval_string("FAIL");
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
sy_Amethyst__append_lp__088f=rb_intern("Amethyst__append_lp__088f");
sy_Amethyst__append_lp__0d86=rb_intern("Amethyst__append_lp__0d86");
sy_Amethyst__append_lp__0eeb=rb_intern("Amethyst__append_lp__0eeb");
sy_Amethyst__append_lp__26c5=rb_intern("Amethyst__append_lp__26c5");
sy_Amethyst__append_lp__29a3=rb_intern("Amethyst__append_lp__29a3");
sy_Amethyst__append_lp__2bc4=rb_intern("Amethyst__append_lp__2bc4");
sy_Amethyst__append_lp__3aef=rb_intern("Amethyst__append_lp__3aef");
sy_Amethyst__append_lp__50ed=rb_intern("Amethyst__append_lp__50ed");
sy_Amethyst__append_lp__66a2=rb_intern("Amethyst__append_lp__66a2");
sy_Amethyst__append_lp__6948=rb_intern("Amethyst__append_lp__6948");
sy_Amethyst__append_lp__6ac6=rb_intern("Amethyst__append_lp__6ac6");
sy_Amethyst__append_lp__73f1=rb_intern("Amethyst__append_lp__73f1");
sy_Amethyst__append_lp__81ec=rb_intern("Amethyst__append_lp__81ec");
sy_Amethyst__append_lp__a474=rb_intern("Amethyst__append_lp__a474");
sy_Amethyst__append_lp__b9cb=rb_intern("Amethyst__append_lp__b9cb");
sy_Amethyst__append_lp__c354=rb_intern("Amethyst__append_lp__c354");
sy_Amethyst__append_lp__cbd1=rb_intern("Amethyst__append_lp__cbd1");
sy_Amethyst__append_lp__f8f8=rb_intern("Amethyst__append_lp__f8f8");
sy_Amethyst__append_lp__f960=rb_intern("Amethyst__append_lp__f960");
sy_Amethyst__lp_bind_lb_0_rb__9f45=rb_intern("Amethyst__lp_bind_lb_0_rb__9f45");
sy_Amethyst__lp_bind_lb_0_rb__b1f4=rb_intern("Amethyst__lp_bind_lb_0_rb__b1f4");
sy_Amethyst__lp_bind_lb_1_rb__4329=rb_intern("Amethyst__lp_bind_lb_1_rb__4329");
sy_Amethyst__lp_bind_lb_1_rb__5a69=rb_intern("Amethyst__lp_bind_lb_1_rb__5a69");
sy_Amethyst__lp_bind_lb_1_rb__abc3=rb_intern("Amethyst__lp_bind_lb_1_rb__abc3");
sy_Amethyst__lp_bind_lb_2_rb__7d6d=rb_intern("Amethyst__lp_bind_lb_2_rb__7d6d");
sy_Amethyst__lp_false_rp__sp__c3c5=rb_intern("Amethyst__lp_false_rp__sp__c3c5");
sy_Amethyst_bind_lb_0_rb_=rb_intern("Amethyst_bind_lb_0_rb_");
sy_Amethyst_bind_lb_0_rb__dot__206f=rb_intern("Amethyst_bind_lb_0_rb__dot__206f");
sy_Amethyst_bind_lb_0_rb__dot__6a2a=rb_intern("Amethyst_bind_lb_0_rb__dot__6a2a");
sy_Amethyst_bind_lb_0_rb__dot__ddb4=rb_intern("Amethyst_bind_lb_0_rb__dot__ddb4");
sy_Amethyst_bind_lb_1_rb__ti__cfcb=rb_intern("Amethyst_bind_lb_1_rb__ti__cfcb");
sy_Amethyst_bind_lb_2_rb__ti__e7b8=rb_intern("Amethyst_bind_lb_2_rb__ti__e7b8");
sy_apply=rb_intern("apply");
rb_define_method(cls_Amethyst,"_",Amethyst__,0);
rb_define_method(cls_Amethyst,"alnum",Amethyst_alnum,0);
rb_define_method(cls_Amethyst,"alpha",Amethyst_alpha,0);
rb_define_method(cls_Amethyst,"char",Amethyst_char,0);
rb_define_method(cls_Amethyst,"clas",Amethyst_clas,1);
rb_define_method(cls_Amethyst,"digit",Amethyst_digit,0);
rb_define_method(cls_Amethyst,"empty",Amethyst_empty,0);
rb_define_method(cls_Amethyst,"eof",Amethyst_eof,0);
rb_define_method(cls_Amethyst,"fails",Amethyst_fails,0);
rb_define_method(cls_Amethyst,"false",Amethyst_false,0);
rb_define_method(cls_Amethyst,"int",Amethyst_int,0);
rb_define_method(cls_Amethyst,"line",Amethyst_line,0);
rb_define_method(cls_Amethyst,"listOf",Amethyst_listOf,2);
rb_define_method(cls_Amethyst,"lower",Amethyst_lower,0);
rb_define_method(cls_Amethyst,"member",Amethyst_member,1);
rb_define_method(cls_Amethyst,"newline",Amethyst_newline,0);
rb_define_method(cls_Amethyst,"nil",Amethyst_nil,0);
rb_define_method(cls_Amethyst,"number",Amethyst_number,0);
rb_define_method(cls_Amethyst,"parse",Amethyst_parse,2);
rb_define_method(cls_Amethyst,"range_ex",Amethyst_range_ex,2);
rb_define_method(cls_Amethyst,"range_in",Amethyst_range_in,2);
rb_define_method(cls_Amethyst,"regch",Amethyst_regch,1);
rb_define_method(cls_Amethyst,"replace",Amethyst_replace,1);
rb_define_method(cls_Amethyst,"seq",Amethyst_seq,1);
rb_define_method(cls_Amethyst,"space",Amethyst_space,0);
rb_define_method(cls_Amethyst,"spaces",Amethyst_spaces,0);
rb_define_method(cls_Amethyst,"token",Amethyst_token,1);
rb_define_method(cls_Amethyst,"true",Amethyst_true,0);
rb_define_method(cls_Amethyst,"until",Amethyst_until,1);
rb_define_method(cls_Amethyst,"upper",Amethyst_upper,0);
rb_define_method(cls_Amethyst,"word",Amethyst_word,0);
rb_define_method(cls_Amethyst,"xdigit",Amethyst_xdigit,0);
 rb_eval_string("testversionamethyst('c246134c06f6967058cc02576dfe10c6')");}
