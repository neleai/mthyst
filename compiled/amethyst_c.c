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
static VALUE sy_Amethyst__append_lp__d113;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__a948;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__abc3;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__afaa;
static VALUE sy_Amethyst__lp_false_rp__sp__c3c5;
static VALUE sy_Amethyst_bind_lb_1_rb_;
static VALUE sy_Amethyst_bind_lb_1_rb__dot__03c2;
static VALUE sy_Amethyst_bind_lb_1_rb__dot__c3ef;
static VALUE sy_Amethyst_bind_lb_1_rb__dot__e879;
static VALUE sy_Amethyst_bind_lb_1_rb__ti__cfcb;
static VALUE sy_apply;
VALUE Amethyst__(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; goto fail; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_alnum(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case '[' ... '`':;case '{' ... UC(255):; goto fail; break;
case '0' ... '9':;   it=Amethyst_digit(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case 'A' ... 'Z':;case 'a' ... 'z':;   it=Amethyst_alpha(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_alpha(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;   it=Amethyst_upper(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case 'a' ... 'z':;   it=Amethyst_lower(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_char(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*c*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*c*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__a948,1,bind2);bind_aset(bind,0/*c*/,bind_aget(bind2,1));FAILTEST(fail);bind_aset(bind2,1,bind_aget(bind,0/*c*/));it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb_,1,bind2);bind_aset(bind,0/*c*/,bind_aget(bind2,1)); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_clas(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5);VALUE bind2=bind_new2(16); bind_aset(bind,0/*cls*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*cls*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*x*/));bind_aset(bind2,2,bind_aget(bind,2/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,1/*x*/,bind_aget(bind2,1));bind_aset(bind,2/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_digit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto fail; break;
case '0' ... '9':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_empty(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=Qnil; bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_eof(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;  it=AmethystCore_anything(self ); FAILTEST(alt1_2);cut1=1;goto alt1_2;
;goto accept1;
alt1_2: ptr->pos=oldpos1;if (cut1) goto fail;it=Qnil; bind_aset(bind,0/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Amethyst_fails(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_funcall(self,sy_Amethyst__lp_false_rp__sp__c3c5,1,bind2);FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_false(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
it=Qfalse; bind_aset(bind,1/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*x*/));bind_aset(bind2,2,bind_aget(bind,0/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,1/*x*/,bind_aget(bind2,1));bind_aset(bind,0/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,0/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_int(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(29);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... ',':;case '.' ... UC(255):; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:;it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt1_2;
;goto accept1;
alt1_2: ptr->pos=oldpos1;it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt1_3;
;goto accept1;
alt1_3: ptr->pos=oldpos1;it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt1_4;
;goto accept1;
alt1_4: ptr->pos=oldpos1;it=bind_aget(bind,0/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt1_5;
;goto accept1;
alt1_5: ptr->pos=oldpos1;goto fail;
 accept1:;
 break;
case '0' ... '0':; it=rb_ary_new3(0); bind_aset(bind,2/*autovar*/,it);
int oldpos2=ptr->pos;int cut2=0;
alt2_1:;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1; else goto alt2_2;it=rb_obj_clone(s_0x_f6f8); bind_aset(bind,3/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,3/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,3/*autovar*/,bind_aget(bind2,2));it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto alt2_2; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,5/*autovar*/,it);
 break;
}bind_aset(bind2,1,bind_aget(bind,4/*autovar*/));bind_aset(bind2,2,bind_aget(bind,5/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,4/*autovar*/,bind_aget(bind2,1));bind_aset(bind,5/*autovar*/,bind_aget(bind2,2));int oldpos3;  while(1){oldpos3=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto break1; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,6/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,4/*autovar*/));bind_aset(bind2,2,bind_aget(bind,6/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,4/*autovar*/,bind_aget(bind2,1));bind_aset(bind,6/*autovar*/,bind_aget(bind2,2)); break;
} } break1: ptr->pos=oldpos3;   it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,7/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,7/*autovar*/,bind_aget(bind2,2));
;goto accept2;
alt2_2: ptr->pos=oldpos2;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1; else goto alt2_3;it=rb_obj_clone(s_0b_3470); bind_aset(bind,8/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,8/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,8/*autovar*/,bind_aget(bind2,2));it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto alt2_3; break;
case '0' ... '1':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,10/*autovar*/,it);
 break;
}bind_aset(bind2,1,bind_aget(bind,9/*autovar*/));bind_aset(bind2,2,bind_aget(bind,10/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,9/*autovar*/,bind_aget(bind2,1));bind_aset(bind,10/*autovar*/,bind_aget(bind2,2));int oldpos4;  while(1){oldpos4=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto break2; break;
case '0' ... '1':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,11/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,9/*autovar*/));bind_aset(bind2,2,bind_aget(bind,11/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,9/*autovar*/,bind_aget(bind2,1));bind_aset(bind,11/*autovar*/,bind_aget(bind2,2)); break;
} } break2: ptr->pos=oldpos4;   it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,12/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,12/*autovar*/,bind_aget(bind2,2));
;goto accept2;
alt2_3: ptr->pos=oldpos2;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='o')  ptr->pos+=1; else goto alt2_4;it=rb_obj_clone(s_0o_6f57); bind_aset(bind,13/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,13/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,13/*autovar*/,bind_aget(bind2,2));it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto alt2_4; break;
case '0' ... '7':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,15/*autovar*/,it);
 break;
}bind_aset(bind2,1,bind_aget(bind,14/*autovar*/));bind_aset(bind2,2,bind_aget(bind,15/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,14/*autovar*/,bind_aget(bind2,1));bind_aset(bind,15/*autovar*/,bind_aget(bind2,2));int oldpos5;  while(1){oldpos5=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto break3; break;
case '0' ... '7':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,16/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,14/*autovar*/));bind_aset(bind2,2,bind_aget(bind,16/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,14/*autovar*/,bind_aget(bind2,1));bind_aset(bind,16/*autovar*/,bind_aget(bind2,2)); break;
} } break3: ptr->pos=oldpos5;   it=bind_aget(bind,14/*autovar*/); bind_aset(bind,17/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,17/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,17/*autovar*/,bind_aget(bind2,2));
;goto accept2;
alt2_4: ptr->pos=oldpos2;it=bind_aget(bind,2/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,19/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,19/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,19/*autovar*/,bind_aget(bind2,2));int oldpos6;  while(1){oldpos6=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break4; break;
case '0' ... '9':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,20/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,20/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,20/*autovar*/,bind_aget(bind2,2)); break;
} } break4: ptr->pos=oldpos6;   it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,21/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,21/*autovar*/,bind_aget(bind2,2));
;goto accept2;
alt2_5: ptr->pos=oldpos2;goto fail;
 accept2:;
 break;
case '1' ... '9':; it=rb_ary_new3(0); bind_aset(bind,22/*autovar*/,it);
int oldpos7=ptr->pos;int cut3=0;
alt3_1:;it=bind_aget(bind,22/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt3_2;
;goto accept7;
alt3_2: ptr->pos=oldpos7;it=bind_aget(bind,22/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt3_3;
;goto accept7;
alt3_3: ptr->pos=oldpos7;it=bind_aget(bind,22/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt3_4;
;goto accept7;
alt3_4: ptr->pos=oldpos7;it=bind_aget(bind,22/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,19/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,19/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,19/*autovar*/,bind_aget(bind2,2));int oldpos8;  while(1){oldpos8=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break5; break;
case '0' ... '9':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,20/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,20/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,20/*autovar*/,bind_aget(bind2,2)); break;
} } break5: ptr->pos=oldpos8;   it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,21/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,21/*autovar*/,bind_aget(bind2,2));
;goto accept7;
alt3_5: ptr->pos=oldpos7;goto fail;
 accept7:;
 break;
}it=bind_aget(bind,1/*autovar*/); bind_aset(bind,23/*n*/,it);
it=rb_obj_clone(s__d41d); bind_aset(bind,24/*m*/,it);
bind_aset(bind2,1,bind_aget(bind,24/*m*/));bind_aset(bind2,2,bind_aget(bind,23/*n*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__afaa,1,bind2);bind_aset(bind,24/*m*/,bind_aget(bind2,1));bind_aset(bind,23/*n*/,bind_aget(bind2,2)); bind_aset(bind,25/*_result*/,it);
 break;
case '-' ... '-':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; it=rb_ary_new3(0); bind_aset(bind,26/*autovar*/,it);
int oldpos9=ptr->pos;int cut4=0;
alt4_1:;it=bind_aget(bind,26/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt4_2;
;goto accept9;
alt4_2: ptr->pos=oldpos9;it=bind_aget(bind,26/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt4_3;
;goto accept9;
alt4_3: ptr->pos=oldpos9;it=bind_aget(bind,26/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt4_4;
;goto accept9;
alt4_4: ptr->pos=oldpos9;it=bind_aget(bind,26/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt4_5;
;goto accept9;
alt4_5: ptr->pos=oldpos9;goto fail;
 accept9:;
 break;
case '0' ... '0':; it=rb_ary_new3(0); bind_aset(bind,27/*autovar*/,it);
int oldpos10=ptr->pos;int cut5=0;
alt5_1:;it=bind_aget(bind,27/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1; else goto alt5_2;it=rb_obj_clone(s_0x_f6f8); bind_aset(bind,3/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,3/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,3/*autovar*/,bind_aget(bind2,2));it=rb_ary_new3(0); bind_aset(bind,4/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto alt5_2; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,5/*autovar*/,it);
 break;
}bind_aset(bind2,1,bind_aget(bind,4/*autovar*/));bind_aset(bind2,2,bind_aget(bind,5/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,4/*autovar*/,bind_aget(bind2,1));bind_aset(bind,5/*autovar*/,bind_aget(bind2,2));int oldpos11;  while(1){oldpos11=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto break6; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,6/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,4/*autovar*/));bind_aset(bind2,2,bind_aget(bind,6/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,4/*autovar*/,bind_aget(bind2,1));bind_aset(bind,6/*autovar*/,bind_aget(bind2,2)); break;
} } break6: ptr->pos=oldpos11;   it=bind_aget(bind,4/*autovar*/); bind_aset(bind,7/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,7/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,7/*autovar*/,bind_aget(bind2,2));
;goto accept10;
alt5_2: ptr->pos=oldpos10;it=bind_aget(bind,27/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1; else goto alt5_3;it=rb_obj_clone(s_0b_3470); bind_aset(bind,8/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,8/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,8/*autovar*/,bind_aget(bind2,2));it=rb_ary_new3(0); bind_aset(bind,9/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto alt5_3; break;
case '0' ... '1':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,10/*autovar*/,it);
 break;
}bind_aset(bind2,1,bind_aget(bind,9/*autovar*/));bind_aset(bind2,2,bind_aget(bind,10/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,9/*autovar*/,bind_aget(bind2,1));bind_aset(bind,10/*autovar*/,bind_aget(bind2,2));int oldpos12;  while(1){oldpos12=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '2' ... UC(255):; goto break7; break;
case '0' ... '1':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,11/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,9/*autovar*/));bind_aset(bind2,2,bind_aget(bind,11/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,9/*autovar*/,bind_aget(bind2,1));bind_aset(bind,11/*autovar*/,bind_aget(bind2,2)); break;
} } break7: ptr->pos=oldpos12;   it=bind_aget(bind,9/*autovar*/); bind_aset(bind,12/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,12/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,12/*autovar*/,bind_aget(bind2,2));
;goto accept10;
alt5_3: ptr->pos=oldpos10;it=bind_aget(bind,27/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;if (ame_curstr2(ptr)[0]=='o')  ptr->pos+=1; else goto alt5_4;it=rb_obj_clone(s_0o_6f57); bind_aset(bind,13/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,13/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,13/*autovar*/,bind_aget(bind2,2));it=rb_ary_new3(0); bind_aset(bind,14/*autovar*/,it);
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto alt5_4; break;
case '0' ... '7':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,15/*autovar*/,it);
 break;
}bind_aset(bind2,1,bind_aget(bind,14/*autovar*/));bind_aset(bind2,2,bind_aget(bind,15/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,14/*autovar*/,bind_aget(bind2,1));bind_aset(bind,15/*autovar*/,bind_aget(bind2,2));int oldpos13;  while(1){oldpos13=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case '8' ... UC(255):; goto break8; break;
case '0' ... '7':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,16/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,14/*autovar*/));bind_aset(bind2,2,bind_aget(bind,16/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,14/*autovar*/,bind_aget(bind2,1));bind_aset(bind,16/*autovar*/,bind_aget(bind2,2)); break;
} } break8: ptr->pos=oldpos13;   it=bind_aget(bind,14/*autovar*/); bind_aset(bind,17/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,17/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,17/*autovar*/,bind_aget(bind2,2));
;goto accept10;
alt5_4: ptr->pos=oldpos10;it=bind_aget(bind,27/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,19/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,19/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,19/*autovar*/,bind_aget(bind2,2));int oldpos14;  while(1){oldpos14=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break9; break;
case '0' ... '9':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,20/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,20/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,20/*autovar*/,bind_aget(bind2,2)); break;
} } break9: ptr->pos=oldpos14;   it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,21/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,21/*autovar*/,bind_aget(bind2,2));
;goto accept10;
alt5_5: ptr->pos=oldpos10;goto fail;
 accept10:;
 break;
case '1' ... '9':; it=rb_ary_new3(0); bind_aset(bind,28/*autovar*/,it);
int oldpos15=ptr->pos;int cut6=0;
alt6_1:;it=bind_aget(bind,28/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt6_2;
;goto accept15;
alt6_2: ptr->pos=oldpos15;it=bind_aget(bind,28/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt6_3;
;goto accept15;
alt6_3: ptr->pos=oldpos15;it=bind_aget(bind,28/*autovar*/); bind_aset(bind,1/*autovar*/,it);
goto alt6_4;
;goto accept15;
alt6_4: ptr->pos=oldpos15;it=bind_aget(bind,28/*autovar*/); bind_aset(bind,1/*autovar*/,it);
it=rb_ary_new3(0); bind_aset(bind,18/*autovar*/,it);
it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,19/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,19/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,19/*autovar*/,bind_aget(bind2,2));int oldpos16;  while(1){oldpos16=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... UC(255):; goto break10; break;
case '0' ... '9':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,20/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,18/*autovar*/));bind_aset(bind2,2,bind_aget(bind,20/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,18/*autovar*/,bind_aget(bind2,1));bind_aset(bind,20/*autovar*/,bind_aget(bind2,2)); break;
} } break10: ptr->pos=oldpos16;   it=bind_aget(bind,18/*autovar*/); bind_aset(bind,21/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*autovar*/));bind_aset(bind2,2,bind_aget(bind,21/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,1/*autovar*/,bind_aget(bind2,1));bind_aset(bind,21/*autovar*/,bind_aget(bind2,2));
;goto accept15;
alt6_5: ptr->pos=oldpos15;goto fail;
 accept15:;
 break;
}it=bind_aget(bind,1/*autovar*/); bind_aset(bind,23/*n*/,it);
it=rb_obj_clone(s__mi__336d); bind_aset(bind,24/*m*/,it);
bind_aset(bind2,1,bind_aget(bind,24/*m*/));bind_aset(bind2,2,bind_aget(bind,23/*n*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__afaa,1,bind2);bind_aset(bind,24/*m*/,bind_aget(bind2,1));bind_aset(bind,23/*n*/,bind_aget(bind2,2)); bind_aset(bind,25/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_line(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;  it=Amethyst_newline(self ); FAILTEST(alt1_2);cut1=1; bind_aset(bind,1/*autovar*/,it);
stop1=1;
;goto accept2;
alt1_2: ptr->pos=oldpos2;if (cut1) goto break1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*autovar*/,it);

;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));bind_aset(bind2,2,bind_aget(bind,1/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));bind_aset(bind,1/*autovar*/,bind_aget(bind2,2)); if (stop1) goto accept1; } break1: goto fail; accept1:;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*it*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*it*/));it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__ti__cfcb,1,bind2);bind_aset(bind,2/*it*/,bind_aget(bind2,1)); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(9);VALUE bind2=bind_new2(16); bind_aset(bind,1/*rule*/,a0);bind_aset(bind,4/*delim*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*f*/,it);
int oldpos1=ptr->pos;int cut1=0;
alt1_1:; it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,2/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*f*/));bind_aset(bind2,2,bind_aget(bind,2/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,0/*f*/,bind_aget(bind2,1));bind_aset(bind,2/*autovar*/,bind_aget(bind2,2));it=rb_ary_new3(0); bind_aset(bind,3/*autovar*/,it);
int oldpos2;  while(1){oldpos2=ptr->pos; it=bind_aget(bind,4/*delim*/); bind_aset(bind,5/*s*/,it);
 it=bind_aget(bind,5/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(break1);it=bind_aget(bind,5/*s*/); it=bind_aget(bind,1/*rule*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(break1); bind_aset(bind,6/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,3/*autovar*/));bind_aset(bind2,2,bind_aget(bind,6/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,3/*autovar*/,bind_aget(bind2,1));bind_aset(bind,6/*autovar*/,bind_aget(bind2,2)); } break1: ptr->pos=oldpos2;   it=bind_aget(bind,3/*autovar*/); bind_aset(bind,7/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*f*/));bind_aset(bind2,2,bind_aget(bind,7/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,0/*f*/,bind_aget(bind2,1));bind_aset(bind,7/*autovar*/,bind_aget(bind2,2));bind_aset(bind2,1,bind_aget(bind,0/*f*/));it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb_,1,bind2);bind_aset(bind,0/*f*/,bind_aget(bind2,1)); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;it=Qnil;it=rb_ary_new3(0); bind_aset(bind,8/*_result*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;

return it;
fail: return failobj; }
VALUE Amethyst_lower(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '`':;case '{' ... UC(255):; goto fail; break;
case 'a' ... 'z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_member(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3);VALUE bind2=bind_new2(16); bind_aset(bind,1/*x*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*x*/));bind_aset(bind2,2,bind_aget(bind,0/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,1/*x*/,bind_aget(bind2,1));bind_aset(bind,0/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,0/*a*/); bind_aset(bind,2/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_newline(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(9):;case UC(11) ... UC(12):;case UC(14) ... UC(255):; goto fail; break;
case UC(10) ... UC(10):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs_n_1d78); bind_aset(bind,0/*_result*/,it);
it=bind_aget(bind,0/*_result*/); bind_aset(bind,1/*_result*/,it);
 break;
case UC(13) ... UC(13):; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;int oldpos1=ptr->pos;int cut1=0;
alt1_1:;if (ame_curstr2(ptr)[0]==UC(10))  ptr->pos+=1; else goto alt1_2;it=rb_obj_clone(s__bs_r_bs_n_bdb2); bind_aset(bind,0/*_result*/,it);
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
VALUE Amethyst_nil(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
it=Qnil; bind_aset(bind,1/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*x*/));bind_aset(bind2,2,bind_aget(bind,0/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,1/*x*/,bind_aget(bind2,1));bind_aset(bind,0/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,0/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_number(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Amethyst_int(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(5);VALUE bind2=bind_new2(16); bind_aset(bind,2/*rule*/,a0);bind_aset(bind,0/*obj*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
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
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6);VALUE bind2=bind_new2(16); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,bind_aget(bind,0/*a*/));bind_aset(bind2,2,bind_aget(bind,1/*b*/));it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__dot__c3ef,1,bind2);bind_aset(bind,0/*a*/,bind_aget(bind2,1));bind_aset(bind,1/*b*/,bind_aget(bind2,2)); bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*x*/));bind_aset(bind2,2,bind_aget(bind,3/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,2/*x*/,bind_aget(bind2,1));bind_aset(bind,3/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1){VALUE vals[2]; VALUE bind=bind_new2(6);VALUE bind2=bind_new2(16); bind_aset(bind,0/*a*/,a0);bind_aset(bind,1/*b*/,a1); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
bind_aset(bind2,1,bind_aget(bind,0/*a*/));bind_aset(bind2,2,bind_aget(bind,1/*b*/));it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__dot__03c2,1,bind2);bind_aset(bind,0/*a*/,bind_aget(bind2,1));bind_aset(bind,1/*b*/,bind_aget(bind2,2)); bind_aset(bind,2/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,3/*a*/,it);
bind_aset(bind2,1,bind_aget(bind,2/*x*/));bind_aset(bind2,2,bind_aget(bind,3/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,2/*x*/,bind_aget(bind2,1));bind_aset(bind,3/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,3/*a*/); bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/); bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_regch(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(5);VALUE bind2=bind_new2(16); bind_aset(bind,0/*regex*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=bind_aget(bind,0/*regex*/); bind_aset(bind,1/*x*/,it);
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,2/*a*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*x*/));bind_aset(bind2,2,bind_aget(bind,2/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,1/*x*/,bind_aget(bind2,1));bind_aset(bind,2/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/); bind_aset(bind,4/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_replace(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(3);VALUE bind2=bind_new2(16); bind_aset(bind,0/*exp*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
int oldpos1=ptr->pos;int cut1=0;
alt1_1:; it=bind_aget(bind,0/*exp*/); arg0=it; it=rb_funcall(self,sy_apply,1,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*it*/,it);

;goto accept1;
alt1_2: ptr->pos=oldpos1;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,1/*it*/,it);

;goto accept1;
alt1_3: ptr->pos=oldpos1;goto fail;
 accept1:;
bind_aset(bind2,1,bind_aget(bind,1/*it*/));it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__ti__cfcb,1,bind2);bind_aset(bind,1/*it*/,bind_aget(bind2,1)); bind_aset(bind,2/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_seq(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(2);VALUE bind2=bind_new2(16); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
 it=bind_aget(bind,0/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_space(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; goto fail; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_spaces(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1;  while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... UC(8):;case UC(11) ... UC(11):;case UC(14) ... UC(31):;case '!' ... UC(255):; goto break1; break;
case UC(9) ... UC(10):;case UC(12) ... UC(13):;case ' ' ... ' ':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,2/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*autovar*/));bind_aset(bind2,2,bind_aget(bind,2/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,0/*autovar*/,bind_aget(bind2,1));bind_aset(bind,2/*autovar*/,bind_aget(bind2,2)); break;
} } break1: ptr->pos=oldpos1;   it=bind_aget(bind,0/*autovar*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_token(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(4);VALUE bind2=bind_new2(16); bind_aset(bind,0/*s*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=Amethyst_spaces(self ); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*s*/,it);
 it=bind_aget(bind,1/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(fail);it=bind_aget(bind,1/*s*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_true(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
  it=AmethystCore_anything(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
it=Qtrue; bind_aset(bind,1/*x*/,it);
bind_aset(bind2,1,bind_aget(bind,1/*x*/));bind_aset(bind2,2,bind_aget(bind,0/*a*/));it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);bind_aset(bind,1/*x*/,bind_aget(bind2,1));bind_aset(bind,0/*a*/,bind_aget(bind2,2));FAILTEST(fail);it=bind_aget(bind,0/*a*/); bind_aset(bind,2/*_result*/,it);
it=bind_aget(bind,2/*_result*/); bind_aset(bind,3/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_until(VALUE self ,VALUE a0){VALUE vals[1]; VALUE bind=bind_new2(6);VALUE bind2=bind_new2(16); bind_aset(bind,1/*e*/,a0); int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
it=rb_ary_new3(0); bind_aset(bind,0/*x*/,it);
int oldpos1; int stop1=0; while(1){oldpos1=ptr->pos; switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '[':;case ']' ... UC(255):; int oldpos2=ptr->pos;int cut1=0;
alt1_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt1_2);it=bind_aget(bind,2/*s*/);cut1=1;stop1=1;
;goto accept2;
alt1_2: ptr->pos=oldpos2;if (cut1) goto break1;it=Qnil;  it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*x*/));bind_aset(bind2,2,bind_aget(bind,3/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,0/*x*/,bind_aget(bind2,1));bind_aset(bind,3/*autovar*/,bind_aget(bind2,2));
;goto accept2;
alt1_3: ptr->pos=oldpos2;goto break1;
 accept2:;
 break;
case UC(92) ... UC(92):; int oldpos3=ptr->pos;int cut2=0;
alt2_1:;it=bind_aget(bind,1/*e*/); bind_aset(bind,2/*s*/,it);
 it=bind_aget(bind,2/*s*/); arg0=it; it=AmethystCore__seq(self ,arg0); FAILTEST(alt2_2);it=bind_aget(bind,2/*s*/);cut2=1;stop1=1;
;goto accept3;
alt2_2: ptr->pos=oldpos3;if (cut2) goto break1;it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s__bs__bs__7f81); bind_aset(bind,4/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*x*/));bind_aset(bind2,2,bind_aget(bind,4/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,0/*x*/,bind_aget(bind2,1));bind_aset(bind,4/*autovar*/,bind_aget(bind2,2));  it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,3/*autovar*/,it);
bind_aset(bind2,1,bind_aget(bind,0/*x*/));bind_aset(bind2,2,bind_aget(bind,3/*autovar*/));it=rb_funcall(self,sy_Amethyst__append_lp__d113,1,bind2);bind_aset(bind,0/*x*/,bind_aget(bind2,1));bind_aset(bind,3/*autovar*/,bind_aget(bind2,2));
;goto accept3;
alt2_3: ptr->pos=oldpos3;goto break1;
 accept3:;
 break;
} if (stop1) goto accept1; } break1: goto fail; accept1:;   bind_aset(bind2,1,bind_aget(bind,0/*x*/));it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__dot__e879,1,bind2);bind_aset(bind,0/*x*/,bind_aget(bind2,1)); bind_aset(bind,5/*_result*/,it);

return it;
fail: return failobj; }
VALUE Amethyst_upper(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... UC(255):; goto fail; break;
case 'A' ... 'Z':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_word(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '@':;case '[' ... '^':;case '`' ... '`':;case '{' ... UC(255):; goto fail; break;
case 'A' ... 'Z':;case 'a' ... 'z':;   it=Amethyst_alpha(self ); FAILTEST(fail); bind_aset(bind,0/*_result*/,it);
 break;
case '_' ... '_':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++;it=rb_obj_clone(s___b14a); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/); bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
VALUE Amethyst_xdigit(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);VALUE bind2=bind_new2(16);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);
            
switch((unsigned char)*ame_curstr2(ptr)){case UC(0) ... '/':;case ':' ... '@':;case 'G' ... '`':;case 'g' ... UC(255):; goto fail; break;
case '0' ... '9':;case 'A' ... 'F':;case 'a' ... 'f':; it=rb_str_new(ptr->str+ptr->pos,1);ptr->pos++; bind_aset(bind,0/*_result*/,it);
 break;
}
return it;
fail: return failobj; }
void Init_amethyst_c(){ 
 cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore"))); 
                    failobj=rb_eval_string("FAIL");
                    s_0b_3470=rb_str_new2("0b");rb_global_variable(&s_0b_3470);
s_0o_6f57=rb_str_new2("0o");rb_global_variable(&s_0o_6f57);
s_0x_f6f8=rb_str_new2("0x");rb_global_variable(&s_0x_f6f8);
s___b14a=rb_str_new2("_");rb_global_variable(&s___b14a);
s__bs__bs__7f81=rb_str_new2("\\");rb_global_variable(&s__bs__bs__7f81);
s__bs_n_1d78=rb_str_new2("\n");rb_global_variable(&s__bs_n_1d78);
s__bs_r_8ce5=rb_str_new2("\r");rb_global_variable(&s__bs_r_8ce5);
s__bs_r_bs_n_bdb2=rb_str_new2("\r\n");rb_global_variable(&s__bs_r_bs_n_bdb2);
s__d41d=rb_str_new2("");rb_global_variable(&s__d41d);
s__mi__336d=rb_str_new2("-");rb_global_variable(&s__mi__336d);
sy_Amethyst__append_lp__d113=rb_intern("Amethyst__append_lp__d113");
sy_Amethyst__lp_bind_lb_1_rb__a948=rb_intern("Amethyst__lp_bind_lb_1_rb__a948");
sy_Amethyst__lp_bind_lb_1_rb__abc3=rb_intern("Amethyst__lp_bind_lb_1_rb__abc3");
sy_Amethyst__lp_bind_lb_1_rb__afaa=rb_intern("Amethyst__lp_bind_lb_1_rb__afaa");
sy_Amethyst__lp_false_rp__sp__c3c5=rb_intern("Amethyst__lp_false_rp__sp__c3c5");
sy_Amethyst_bind_lb_1_rb_=rb_intern("Amethyst_bind_lb_1_rb_");
sy_Amethyst_bind_lb_1_rb__dot__03c2=rb_intern("Amethyst_bind_lb_1_rb__dot__03c2");
sy_Amethyst_bind_lb_1_rb__dot__c3ef=rb_intern("Amethyst_bind_lb_1_rb__dot__c3ef");
sy_Amethyst_bind_lb_1_rb__dot__e879=rb_intern("Amethyst_bind_lb_1_rb__dot__e879");
sy_Amethyst_bind_lb_1_rb__ti__cfcb=rb_intern("Amethyst_bind_lb_1_rb__ti__cfcb");
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
                    rb_eval_string("testversionamethyst('640925e690529da0b8632518ba8d8b0e')");}
