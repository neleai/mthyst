#include "cthyst.h"
#include "memo.c"
VALUE cls_Normalize;
VALUE AmethystCore__seq(VALUE self ,VALUE);
VALUE AmethystCore_anything(VALUE self );
VALUE Normalize_act(VALUE self );
VALUE Normalize_apply2(VALUE self );
VALUE Normalize_bind(VALUE self );
VALUE Normalize_cant_fail(VALUE self );
VALUE Normalize_defer_acts(VALUE self ,VALUE a0);
VALUE Normalize_must_empty(VALUE self );
VALUE Normalize_or(VALUE self );
VALUE Normalize_seq2(VALUE self );
VALUE Normalize_switch(VALUE self );
VALUE switchhash_Normalize_10;
VALUE switchhash_Normalize_11;
VALUE switchhash_Normalize_12;
VALUE switchhash_Normalize_13;
VALUE switchhash_Normalize_14;
VALUE switchhash_Normalize_1;
VALUE switchhash_Normalize_2;
VALUE switchhash_Normalize_3;
VALUE switchhash_Normalize_4;
VALUE switchhash_Normalize_5;
VALUE switchhash_Normalize_6;
VALUE switchhash_Normalize_7;
VALUE switchhash_Normalize_8;
VALUE switchhash_Normalize_9;
static VALUE i_0;
static VALUE i_1;
static VALUE s__bs__bs__7f81;
static VALUE s__bs__dq__3bd8;
static VALUE s__qu__3590;
static VALUE sy__Act_dot_crea_e434;
static VALUE sy__Apply_lb__dq_e_619e;
static VALUE sy__Apply_lb__dq_f_3881;
static VALUE sy__Apply_lb_bi_3b85;
static VALUE sy__CAct_lb_eva_559c;
static VALUE sy__Or_dot_creat_a50c;
static VALUE sy__Placehol_6875;
static VALUE sy__Placehol_a03d;
static VALUE sy__Seq_dot_crea_0a81;
static VALUE sy__Seq_lb_Bind_1036;
static VALUE sy__Seq_lb_bind_b819;
static VALUE sy__Seq_lb_bind_c98f;
static VALUE sy__Switch_O_5445;
static VALUE sy___lp_bind_lb_1_rb__abc3;
static VALUE sy___lp_cant_fa_17ef;
static VALUE sy___lp_eval_lp_sr_3f78;
static VALUE sy___lp_must_em_43e9;
static VALUE sy__bind_lb_1_rb_;
static VALUE sy__bind_lb_1_rb__dot__30f4;
static VALUE sy__bind_lb_1_rb__lb__64e3;
static VALUE sy__bind_lb_1_rb__lb__79d7;
static VALUE sy__bind_lb_1_rb__lt__f738;
static VALUE sy__nary_eq__lb__rb_;
static VALUE sy__src;
static VALUE sy__src_25d9;
static VALUE sy__src_dot_ary_d5cf;
static VALUE sy__src_dot_clas_68f9;
static VALUE sy__src_dot_free_3d49;
static VALUE sy__src_dot_name_80f3;
static VALUE sy_cant_fail;
static VALUE sy_clas;
static VALUE sy_number;
static VALUE sy_spaces;
static VALUE sy_switch;
VALUE profile_report_Normalize(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Normalize_act(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_s,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_13,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_14,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*CAct*/:
        case 2/*Local*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_2=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            break;
        case 3/*Lambda*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy__Act_dot_crea_e434,1,bind2);
            _autovar_4=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            goto success2;
pass2:
            *ptr=oldpass2;
            if (1) {
                it=failobj;
                goto pass1;
            }
success2:
            *ptr=oldpass2;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            it=_autovar_4;
            _autovar_2=it;;
            break;
        case 4/*String*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_5=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... ',':
                ;
            case '.' ... '/':
                ;
            case ':' ... '@':
                ;
            case '[' ... UC(255):
                ;
                int oldpos1=ptr->pos;
                int cut1=0;
alt1_1:
                ;
                it=rb_funcall(self,sy_spaces,0);
                int oldpos2=ptr->pos;
                int cut2=0;
alt2_1:
                ;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'Z':
                    ;
                case UC(92) ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt2_2;
                    }
                    break;
                case '[' ... '[':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                    else if (1) {
                        it=failobj;
                        goto alt2_2;
                    }
                    break;
                }
                ;
                goto accept2;
alt2_2:
                ptr->pos=oldpos2;
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'e':
                    ;
                case 'g' ... 'm':
                    ;
                case 'o' ... 's':
                    ;
                case 'u' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt2_3;
                    }
                    break;
                case 'f' ... 'f':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4;
                    else if (1) {
                        it=failobj;
                        goto alt2_3;
                    }
                    break;
                case 'n' ... 'n':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2;
                    else if (1) {
                        it=failobj;
                        goto alt2_3;
                    }
                    break;
                case 't' ... 't':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3;
                    else if (1) {
                        it=failobj;
                        goto alt2_3;
                    }
                    break;
                }
                ;
                goto accept2;
alt2_3:
                ptr->pos=oldpos2;
                if (1) {
                    it=failobj;
                    goto alt1_2;
                };
accept2:
                ;

                ;
                goto accept1;
alt1_2:
                ptr->pos=oldpos1;
                it=rb_obj_clone(s__bs__dq__3bd8);
                _s=it;;
                it=_s;
                arg0=it;
                it=AmethystCore__seq(self ,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt1_3;
                }
                int stop1=0;
                while(!stop1) {
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '!':
                        ;
                    case '#' ... '[':
                        ;
                    case ']' ... UC(255):
                        ;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt1_3;
                        }
                        break;
                    case UC(34) ... UC(34):
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        cut1=1;
                        stop1=1;
                        break;
                    case UC(92) ... UC(92):
                        ;
                        int oldpos3=ptr->pos;
                        int cut3=0;
alt3_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt3_2;
                        }
                        it=rb_obj_clone(s__bs__bs__7f81);
                        _s=it;;

                        ;
                        goto accept3;
alt3_2:
                        ptr->pos=oldpos3;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt3_3;
                        }
                        ;
                        goto accept3;
alt3_3:
                        ptr->pos=oldpos3;
                        if (1) {
                            it=failobj;
                            goto alt1_3;
                        };
accept3:
                        ;
                        break;
                    }
                }
                ;
                goto accept1;
alt1_3:
                ptr->pos=oldpos1;
                if (cut1) {
                    it=failobj;
                    goto pass3;
                }
                it=rb_obj_clone(s__qu__3590);
                _s=it;;
                it=_s;
                arg0=it;
                it=AmethystCore__seq(self ,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt1_4;
                }
                int stop2=0;
                while(!stop2) {
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '&':
                        ;
                    case '(' ... '[':
                        ;
                    case ']' ... UC(255):
                        ;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt1_4;
                        }
                        break;
                    case UC(39) ... UC(39):
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        cut1=1;
                        stop2=1;
                        break;
                    case UC(92) ... UC(92):
                        ;
                        int oldpos4=ptr->pos;
                        int cut4=0;
alt4_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt4_2;
                        }
                        it=rb_obj_clone(s__bs__bs__7f81);
                        _s=it;;

                        ;
                        goto accept4;
alt4_2:
                        ptr->pos=oldpos4;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt4_3;
                        }
                        ;
                        goto accept4;
alt4_3:
                        ptr->pos=oldpos4;
                        if (1) {
                            it=failobj;
                            goto alt1_4;
                        };
accept4:
                        ;
                        break;
                    }
                }
                ;
                goto accept1;
alt1_4:
                ptr->pos=oldpos1;
                if (cut1) {
                    it=failobj;
                    goto pass3;
                }
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept1:
                ;
                it=rb_funcall(self,sy_spaces,0);
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass3;
                }
                break;
            case '-' ... '-':
                ;
            case '0' ... '9':
                ;
                int oldpos5=ptr->pos;
                int cut5=0;
alt5_1:
                ;
                it=rb_funcall(self,sy_spaces,0);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'Z':
                    ;
                case UC(92) ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt5_2;
                    }
                    break;
                case '[' ... '[':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                    else if (1) {
                        it=failobj;
                        goto alt5_2;
                    }
                    break;
                }
                ;
                goto accept5;
alt5_2:
                ptr->pos=oldpos5;
                it=rb_funcall(self,sy_number,0);
                if (it==failobj) {
                    it=failobj;
                    goto alt5_3;
                }
                ;
                goto accept5;
alt5_3:
                ptr->pos=oldpos5;
                it=rb_funcall(self,sy_spaces,0);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'e':
                    ;
                case 'g' ... 'm':
                    ;
                case 'o' ... 's':
                    ;
                case 'u' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt5_4;
                    }
                    break;
                case 'f' ... 'f':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4;
                    else if (1) {
                        it=failobj;
                        goto alt5_4;
                    }
                    break;
                case 'n' ... 'n':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2;
                    else if (1) {
                        it=failobj;
                        goto alt5_4;
                    }
                    break;
                case 't' ... 't':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3;
                    else if (1) {
                        it=failobj;
                        goto alt5_4;
                    }
                    break;
                }
                ;
                goto accept5;
alt5_4:
                ptr->pos=oldpos5;
                it=rb_obj_clone(s__bs__dq__3bd8);
                _s=it;;
                it=_s;
                arg0=it;
                it=AmethystCore__seq(self ,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt5_5;
                }
                int stop3=0;
                while(!stop3) {
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '!':
                        ;
                    case '#' ... '[':
                        ;
                    case ']' ... UC(255):
                        ;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt5_5;
                        }
                        break;
                    case UC(34) ... UC(34):
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        cut5=1;
                        stop3=1;
                        break;
                    case UC(92) ... UC(92):
                        ;
                        int oldpos6=ptr->pos;
                        int cut6=0;
alt6_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt6_2;
                        }
                        it=rb_obj_clone(s__bs__bs__7f81);
                        _s=it;;

                        ;
                        goto accept6;
alt6_2:
                        ptr->pos=oldpos6;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt6_3;
                        }
                        ;
                        goto accept6;
alt6_3:
                        ptr->pos=oldpos6;
                        if (1) {
                            it=failobj;
                            goto alt5_5;
                        };
accept6:
                        ;
                        break;
                    }
                }
                ;
                goto accept5;
alt5_5:
                ptr->pos=oldpos5;
                if (cut5) {
                    it=failobj;
                    goto pass3;
                }
                it=rb_obj_clone(s__qu__3590);
                _s=it;;
                it=_s;
                arg0=it;
                it=AmethystCore__seq(self ,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt5_6;
                }
                int stop4=0;
                while(!stop4) {
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '&':
                        ;
                    case '(' ... '[':
                        ;
                    case ']' ... UC(255):
                        ;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt5_6;
                        }
                        break;
                    case UC(39) ... UC(39):
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        cut5=1;
                        stop4=1;
                        break;
                    case UC(92) ... UC(92):
                        ;
                        int oldpos7=ptr->pos;
                        int cut7=0;
alt7_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt7_2;
                        }
                        it=rb_obj_clone(s__bs__bs__7f81);
                        _s=it;;

                        ;
                        goto accept7;
alt7_2:
                        ptr->pos=oldpos7;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt7_3;
                        }
                        ;
                        goto accept7;
alt7_3:
                        ptr->pos=oldpos7;
                        if (1) {
                            it=failobj;
                            goto alt5_6;
                        };
accept7:
                        ;
                        break;
                    }
                }
                ;
                goto accept5;
alt5_6:
                ptr->pos=oldpos5;
                if (cut5) {
                    it=failobj;
                    goto pass3;
                }
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept5:
                ;
                it=rb_funcall(self,sy_spaces,0);
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass3;
                }
                break;
            case 'A' ... 'Z':
                ;
                int oldpos8=ptr->pos;
                int cut8=0;
alt8_1:
                ;
                it=rb_funcall(self,sy_spaces,0);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'Z':
                    ;
                case UC(92) ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt8_2;
                    }
                    break;
                case '[' ... '[':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]==']')  ptr->pos+=1;
                    else if (1) {
                        it=failobj;
                        goto alt8_2;
                    }
                    break;
                }
                ;
                goto accept8;
alt8_2:
                ptr->pos=oldpos8;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                int stop5=0;
                while(!stop5) {
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '/':
                        ;
                    case ':' ... '@':
                        ;
                    case '[' ... '^':
                        ;
                    case '`' ... '`':
                        ;
                    case '{' ... UC(255):
                        ;
                        stop5=1;
                        break;
                    case '0' ... '9':
                        ;
                    case 'A' ... 'Z':
                        ;
                    case '_' ... '_':
                        ;
                    case 'a' ... 'z':
                        ;
                        int oldpos9=ptr->pos;
                        int cut9=0;
alt9_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        ;
                        goto accept9;
alt9_2:
                        ptr->pos=oldpos9;
                        stop5=1;
                        ;
                        goto accept9;
alt9_3:
                        ptr->pos=oldpos9;
                        if (1) {
                            it=failobj;
                            goto alt8_3;
                        };
accept9:
                        ;
                        break;
                    }
                }
                it=rb_funcall(self,sy___lp_eval_lp_sr_3f78,1,bind2);
                if (it==failobj) {
                    it=failobj;
                    goto alt8_3;
                };
                ;
                goto accept8;
alt8_3:
                ptr->pos=oldpos8;
                it=rb_funcall(self,sy_spaces,0);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'e':
                    ;
                case 'g' ... 'm':
                    ;
                case 'o' ... 's':
                    ;
                case 'u' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto alt8_4;
                    }
                    break;
                case 'f' ... 'f':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='l'&&ame_curstr2(ptr)[2]=='s'&&ame_curstr2(ptr)[3]=='e')  ptr->pos+=4;
                    else if (1) {
                        it=failobj;
                        goto alt8_4;
                    }
                    break;
                case 'n' ... 'n':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='i'&&ame_curstr2(ptr)[1]=='l')  ptr->pos+=2;
                    else if (1) {
                        it=failobj;
                        goto alt8_4;
                    }
                    break;
                case 't' ... 't':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='r'&&ame_curstr2(ptr)[1]=='u'&&ame_curstr2(ptr)[2]=='e')  ptr->pos+=3;
                    else if (1) {
                        it=failobj;
                        goto alt8_4;
                    }
                    break;
                }
                ;
                goto accept8;
alt8_4:
                ptr->pos=oldpos8;
                it=rb_obj_clone(s__bs__dq__3bd8);
                _s=it;;
                it=_s;
                arg0=it;
                it=AmethystCore__seq(self ,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt8_5;
                }
                int stop6=0;
                while(!stop6) {
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '!':
                        ;
                    case '#' ... '[':
                        ;
                    case ']' ... UC(255):
                        ;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt8_5;
                        }
                        break;
                    case UC(34) ... UC(34):
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        cut8=1;
                        stop6=1;
                        break;
                    case UC(92) ... UC(92):
                        ;
                        int oldpos10=ptr->pos;
                        int cut10=0;
alt10_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt10_2;
                        }
                        it=rb_obj_clone(s__bs__bs__7f81);
                        _s=it;;

                        ;
                        goto accept10;
alt10_2:
                        ptr->pos=oldpos10;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt10_3;
                        }
                        ;
                        goto accept10;
alt10_3:
                        ptr->pos=oldpos10;
                        if (1) {
                            it=failobj;
                            goto alt8_5;
                        };
accept10:
                        ;
                        break;
                    }
                }
                ;
                goto accept8;
alt8_5:
                ptr->pos=oldpos8;
                if (cut8) {
                    it=failobj;
                    goto pass3;
                }
                it=rb_obj_clone(s__qu__3590);
                _s=it;;
                it=_s;
                arg0=it;
                it=AmethystCore__seq(self ,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt8_6;
                }
                int stop7=0;
                while(!stop7) {
                    switch((unsigned char)*ame_curstr2(ptr)) {
                    case UC(0) ... '&':
                        ;
                    case '(' ... '[':
                        ;
                    case ']' ... UC(255):
                        ;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt8_6;
                        }
                        break;
                    case UC(39) ... UC(39):
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        cut8=1;
                        stop7=1;
                        break;
                    case UC(92) ... UC(92):
                        ;
                        int oldpos11=ptr->pos;
                        int cut11=0;
alt11_1:
                        ;
                        it=rb_str_new(ptr->str+ptr->pos,1);
                        ptr->pos++;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt11_2;
                        }
                        it=rb_obj_clone(s__bs__bs__7f81);
                        _s=it;;

                        ;
                        goto accept11;
alt11_2:
                        ptr->pos=oldpos11;
                        it=AmethystCore_anything(self );
                        if (it==failobj) {
                            it=failobj;
                            goto alt11_3;
                        }
                        ;
                        goto accept11;
alt11_3:
                        ptr->pos=oldpos11;
                        if (1) {
                            it=failobj;
                            goto alt8_6;
                        };
accept11:
                        ;
                        break;
                    }
                }
                ;
                goto accept8;
alt8_6:
                ptr->pos=oldpos8;
                if (cut8) {
                    it=failobj;
                    goto pass3;
                }
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept8:
                ;
                it=rb_funcall(self,sy_spaces,0);
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass3;
                }
                break;
            }
            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto pass1;
            }
success3:
            *ptr=oldpass3;
            it=rb_funcall(self,sy__CAct_lb_eva_559c,1,bind2);
            _autovar_2=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            break;
        case 5/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass1;
            }
            break;
        }
        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_2;
        __result=it;;
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
VALUE Normalize_apply2(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_x,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_name,_autovar_13,_autovar_14,_args,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_10,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _autovar_2=it;;
        it=_autovar_2;
        _autovar_3=it;;
        switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_11,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
            ;
            it=_autovar_3;
            _autovar_4=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_autovar_4;
            _autovar_5=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass2;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass2;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass2;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            goto success2;
pass2:
            *ptr=oldpass2;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
success2:
            *ptr=oldpass2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_6);
            switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_12,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Lambda*/:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_7=it;;
                cstruct oldpass4=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_7);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass4;
                }
                _x=it;;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass4;
                }
                goto success4;
pass4:
                *ptr=oldpass4;
                if (1) {
                    it=failobj;
                    goto pass3;
                }
success4:
                *ptr=oldpass4;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass3;
                }
                break;
            case 1/*Object*/:
                ;
                if (1) {
                    it=failobj;
                    goto pass3;
                }
                break;
            }
            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
success3:
            *ptr=oldpass3;
            bind_aset(bind2,1,_x);
            it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
            _x=bind_aget(bind2,1);;
            _autovar_8=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=_autovar_4;
            _autovar_9=it;;
            cstruct oldpass5=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass5;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass5;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass5;
            }
            goto success5;
pass5:
            *ptr=oldpass5;
            if (1) {
                it=failobj;
                goto alt2_3;
            }
success5:
            *ptr=oldpass5;
            if (1) {
                it=failobj;
                goto alt2_3;
            }
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            it=_autovar_4;
            _autovar_10=it;;
            cstruct oldpass6=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_10);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass6;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass6;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass6;
            }
            goto success6;
pass6:
            *ptr=oldpass6;
            if (1) {
                it=failobj;
                goto alt2_4;
            }
success6:
            *ptr=oldpass6;
            if (1) {
                it=failobj;
                goto alt2_4;
            }
            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept2:
            ;
            break;
        case 1/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_11=it;;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=_autovar_11;
            _autovar_5=it;;
            cstruct oldpass7=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass7;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass7;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass7;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass7;
            }
            goto success7;
pass7:
            *ptr=oldpass7;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
success7:
            *ptr=oldpass7;
            if (1) {
                it=failobj;
                goto alt3_2;
            }
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            it=_autovar_11;
            _autovar_9=it;;
            cstruct oldpass8=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass8;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass8;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass8;
            }
            goto success8;
pass8:
            *ptr=oldpass8;
            if (1) {
                it=failobj;
                goto alt3_3;
            }
success8:
            *ptr=oldpass8;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_12=it;;
            cstruct oldpass9=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_12);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass9;
            }
            _name=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass9;
            }
            goto success9;
pass9:
            *ptr=oldpass9;
            if (1) {
                it=failobj;
                goto alt3_3;
            }
success9:
            *ptr=oldpass9;
            it=rb_ary_new3(0);
            _autovar_13=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _autovar_14=it;;
                it=AmethystCore_append(self,_autovar_13,_autovar_14);
                ;
                goto accept4;
alt4_2:
                ptr->pos=oldpos4;
                stop1=1;
                ;
                goto accept4;
alt4_3:
                ptr->pos=oldpos4;
                if (1) {
                    it=failobj;
                    goto alt3_3;
                };
accept4:
                ;
            }
            it=_autovar_13;
            _args=it;;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_args);
            it=rb_funcall(self,sy__Apply_lb_bi_3b85,1,bind2);
            _name=bind_aget(bind2,1);;
            _args=bind_aget(bind2,2);;
            _autovar_8=it;;

            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            it=_autovar_11;
            _autovar_10=it;;
            cstruct oldpass10=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_10);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass10;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass10;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass10;
            }
            goto success10;
pass10:
            *ptr=oldpass10;
            if (1) {
                it=failobj;
                goto alt3_4;
            }
success10:
            *ptr=oldpass10;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_15=it;;
            cstruct oldpass11=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_15);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass11;
            }
            _autovar_16=it;;
            cstruct oldpass12=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_16);
            it=Qnil;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass12;
            }
            goto success12;
pass12:
            *ptr=oldpass12;
            if (1) {
                it=failobj;
                goto pass11;
            }
success12:
            *ptr=oldpass12;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass11;
            }
            goto success11;
pass11:
            *ptr=oldpass11;
            if (1) {
                it=failobj;
                goto alt3_4;
            }
success11:
            *ptr=oldpass11;
            it=rb_funcall(self,sy__Placehol_a03d,1,bind2);
            _autovar_8=it;;

            ;
            goto accept3;
alt3_4:
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept3:
            ;
            break;
        case 2/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_17=it;;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=_autovar_17;
            _autovar_5=it;;
            cstruct oldpass13=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass13;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass13;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass13;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass13;
            }
            goto success13;
pass13:
            *ptr=oldpass13;
            if (1) {
                it=failobj;
                goto alt5_2;
            }
success13:
            *ptr=oldpass13;
            if (1) {
                it=failobj;
                goto alt5_2;
            }
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=_autovar_17;
            _autovar_9=it;;
            cstruct oldpass14=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass14;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass14;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass14;
            }
            goto success14;
pass14:
            *ptr=oldpass14;
            if (1) {
                it=failobj;
                goto alt5_3;
            }
success14:
            *ptr=oldpass14;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_12=it;;
            cstruct oldpass15=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_12);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass15;
            }
            _name=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass15;
            }
            goto success15;
pass15:
            *ptr=oldpass15;
            if (1) {
                it=failobj;
                goto alt5_3;
            }
success15:
            *ptr=oldpass15;
            it=rb_ary_new3(0);
            _autovar_13=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _autovar_14=it;;
                it=AmethystCore_append(self,_autovar_13,_autovar_14);
                ;
                goto accept6;
alt6_2:
                ptr->pos=oldpos6;
                stop2=1;
                ;
                goto accept6;
alt6_3:
                ptr->pos=oldpos6;
                if (1) {
                    it=failobj;
                    goto alt5_3;
                };
accept6:
                ;
            }
            it=_autovar_13;
            _args=it;;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_args);
            it=rb_funcall(self,sy__Apply_lb_bi_3b85,1,bind2);
            _name=bind_aget(bind2,1);;
            _args=bind_aget(bind2,2);;
            _autovar_8=it;;

            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            it=_autovar_17;
            _autovar_10=it;;
            cstruct oldpass16=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_10);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass16;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass16;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass16;
            }
            goto success16;
pass16:
            *ptr=oldpass16;
            if (1) {
                it=failobj;
                goto alt5_4;
            }
success16:
            *ptr=oldpass16;
            if (1) {
                it=failobj;
                goto alt5_4;
            }
            ;
            goto accept5;
alt5_4:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept5:
            ;
            break;
        case 3/*CAct*/:
            ;
            it=_autovar_3;
            _autovar_18=it;;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=_autovar_18;
            _autovar_5=it;;
            cstruct oldpass17=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass17;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass17;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass17;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass17;
            }
            goto success17;
pass17:
            *ptr=oldpass17;
            if (1) {
                it=failobj;
                goto alt7_2;
            }
success17:
            *ptr=oldpass17;
            if (1) {
                it=failobj;
                goto alt7_2;
            }
            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            it=_autovar_18;
            _autovar_9=it;;
            cstruct oldpass18=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass18;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass18;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass18;
            }
            goto success18;
pass18:
            *ptr=oldpass18;
            if (1) {
                it=failobj;
                goto alt7_3;
            }
success18:
            *ptr=oldpass18;
            if (1) {
                it=failobj;
                goto alt7_3;
            }
            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            it=_autovar_18;
            _autovar_10=it;;
            cstruct oldpass19=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_10);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass19;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass19;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass19;
            }
            goto success19;
pass19:
            *ptr=oldpass19;
            if (1) {
                it=failobj;
                goto alt7_4;
            }
success19:
            *ptr=oldpass19;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_15=it;;
            cstruct oldpass20=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_15);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass20;
            }
            _autovar_16=it;;
            cstruct oldpass21=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_16);
            it=Qnil;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass21;
            }
            goto success21;
pass21:
            *ptr=oldpass21;
            if (1) {
                it=failobj;
                goto pass20;
            }
success21:
            *ptr=oldpass21;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass20;
            }
            goto success20;
pass20:
            *ptr=oldpass20;
            if (1) {
                it=failobj;
                goto alt7_4;
            }
success20:
            *ptr=oldpass20;
            it=rb_funcall(self,sy__Placehol_a03d,1,bind2);
            _autovar_8=it;;

            ;
            goto accept7;
alt7_4:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept7:
            ;
            break;
        case 4/*Object*/:
            ;
            it=_autovar_3;
            _autovar_19=it;;
            int oldpos8=ptr->pos;
            int cut8=0;
alt8_1:
            ;
            it=_autovar_19;
            _autovar_5=it;;
            cstruct oldpass22=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_5);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass22;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass22;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass22;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass22;
            }
            goto success22;
pass22:
            *ptr=oldpass22;
            if (1) {
                it=failobj;
                goto alt8_2;
            }
success22:
            *ptr=oldpass22;
            if (1) {
                it=failobj;
                goto alt8_2;
            }
            ;
            goto accept8;
alt8_2:
            ptr->pos=oldpos8;
            it=_autovar_19;
            _autovar_9=it;;
            cstruct oldpass23=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '`':
                ;
            case 'b' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass23;
                }
                break;
            case 'a' ... 'a':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='p'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='y')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass23;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass23;
            }
            goto success23;
pass23:
            *ptr=oldpass23;
            if (1) {
                it=failobj;
                goto alt8_3;
            }
success23:
            *ptr=oldpass23;
            if (1) {
                it=failobj;
                goto alt8_3;
            }
            ;
            goto accept8;
alt8_3:
            ptr->pos=oldpos8;
            it=_autovar_19;
            _autovar_10=it;;
            cstruct oldpass24=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_10);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '^':
                ;
            case '`' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass24;
                }
                break;
            case '_' ... '_':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='s'&&ame_curstr2(ptr)[1]=='e'&&ame_curstr2(ptr)[2]=='q')  ptr->pos+=3;
                else if (1) {
                    it=failobj;
                    goto pass24;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass24;
            }
            goto success24;
pass24:
            *ptr=oldpass24;
            if (1) {
                it=failobj;
                goto alt8_4;
            }
success24:
            *ptr=oldpass24;
            if (1) {
                it=failobj;
                goto alt8_4;
            }
            ;
            goto accept8;
alt8_4:
            ptr->pos=oldpos8;
            if (1) {
                it=failobj;
                goto alt1_2;
            };
accept8:
            ;
            break;
        }
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy__src_dot_free_3d49,1,bind2);
        _autovar_8=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept1:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_8;
        __result=it;;
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
VALUE Normalize_bind(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_name,_autovar_6,_ary,_autovar_7,_p,_a,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_first,_last,_autovar_13,_autovar_14,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_6,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Bind*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            it=rb_funcall(self,sy__src_dot_name_80f3,1,bind2);
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_2=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_2);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_funcall(self,sy_spaces,0);
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... 'e':
                ;
            case 'g' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto pass3;
                }
                break;
            case 'f' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                else if (1) {
                    it=failobj;
                    goto pass3;
                }
                break;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto pass2;
            }
success3:
            *ptr=oldpass3;
            it=rb_funcall(self,sy__src_25d9,1,bind2);
            _autovar_4=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            goto success2;
pass2:
            *ptr=oldpass2;
            if (1) {
                it=failobj;
                goto alt1_2;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_4;
            _autovar_5=it;;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_3;
            }
            it=rb_funcall(self,sy__src,1,bind2);
            _autovar_5=it;;

            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept1:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            break;
        case 1/*Or*/:
        case 2/*Switch_Char*/:
        case 3/*Switch_Clas*/:
            ;
            it=rb_funcall(self,sy__src_dot_name_80f3,1,bind2);
            _name=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_funcall(self,sy_switch,0);
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _autovar_6=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_6);
            it=rb_ary_new3(0);
            _ary=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                _autovar_7=it;;
                cstruct oldpass5=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_7);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass5;
                }
                _p=it;;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass5;
                }
                _a=it;;
                bind_aset(bind2,1,_ary);
                bind_aset(bind2,2,_p);
                bind_aset(bind2,3,_name);
                bind_aset(bind2,4,_a);
                it=rb_funcall(self,sy__bind_lb_1_rb__lt__f738,1,bind2);
                _ary=bind_aget(bind2,1);;
                _p=bind_aget(bind2,2);;
                _name=bind_aget(bind2,3);;
                _a=bind_aget(bind2,4);;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass5;
                }
                goto success5;
pass5:
                *ptr=oldpass5;
                if (1) {
                    it=failobj;
                    goto alt3_2;
                }
success5:
                *ptr=oldpass5;

                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                stop1=1;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept3:
                ;
            }
            bind_aset(bind2,1,_ary);
            it=rb_funcall(self,sy__src_dot_clas_68f9,1,bind2);
            _ary=bind_aget(bind2,1);;
            _autovar_8=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            goto success4;
pass4:
            *ptr=oldpass4;
            if (1) {
                it=failobj;
                goto alt2_2;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_8;
            _autovar_5=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            it=rb_funcall(self,sy__src,1,bind2);
            _autovar_5=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept2:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            break;
        case 4/*Seq*/:
            ;
            it=rb_funcall(self,sy__src_dot_name_80f3,1,bind2);
            _name=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_9=it;;
            cstruct oldpass6=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_9);
            it=rb_ary_new3(0);
            _autovar_10=it;;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass6;
            }
            _autovar_11=it;;
            it=AmethystCore_append(self,_autovar_10,_autovar_11);
            int stop2=0;
            while(!stop2) {
                int oldpos5=ptr->pos;
                int cut5=0;
alt5_1:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt5_2;
                }
                _autovar_12=it;;
                it=AmethystCore_append(self,_autovar_10,_autovar_12);
                ;
                goto accept5;
alt5_2:
                ptr->pos=oldpos5;
                stop2=1;
                ;
                goto accept5;
alt5_3:
                ptr->pos=oldpos5;
                if (1) {
                    it=failobj;
                    goto pass6;
                };
accept5:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass6;
            }
            it=_autovar_10;
            _ary=it;;

            goto success6;
pass6:
            *ptr=oldpass6;
            if (1) {
                it=failobj;
                goto alt4_2;
            }
success6:
            *ptr=oldpass6;
            bind_aset(bind2,1,_ary);
            it=rb_funcall(self,sy__Seq_lb_bind_c98f,1,bind2);
            _ary=bind_aget(bind2,1);;
            _first=it;;
            bind_aset(bind2,1,_ary);
            it=rb_funcall(self,sy__bind_lb_1_rb__lb__64e3,1,bind2);
            _ary=bind_aget(bind2,1);;
            _last=it;;
            it=_last;
            _autovar_13=it;;
            cstruct oldpass7=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_13;
            ptr->len=1;
            switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_8,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Comment*/:
            case 1/*Cut*/:
            case 2/*Stop*/:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                bind_aset(bind2,1,_name);
                bind_aset(bind2,2,_first);
                bind_aset(bind2,3,_last);
                it=rb_funcall(self,sy__Seq_lb_Bind_1036,1,bind2);
                _name=bind_aget(bind2,1);;
                _first=bind_aget(bind2,2);;
                _last=bind_aget(bind2,3);;
                _autovar_14=it;;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass7;
                }
                break;
            case 3/*Object*/:
                ;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass7;
                }
                bind_aset(bind2,1,_first);
                bind_aset(bind2,2,_name);
                bind_aset(bind2,3,_last);
                it=rb_funcall(self,sy__Seq_lb_bind_b819,1,bind2);
                _first=bind_aget(bind2,1);;
                _name=bind_aget(bind2,2);;
                _last=bind_aget(bind2,3);;
                _autovar_14=it;;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass7;
                }
                break;
            }
            goto success7;
pass7:
            *ptr=oldpass7;
            if (1) {
                it=failobj;
                goto alt4_2;
            }
success7:
            *ptr=oldpass7;
            it=_autovar_14;
            _autovar_5=it;;

            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_3;
            }
            it=rb_funcall(self,sy__src,1,bind2);
            _autovar_5=it;;

            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept4:
            ;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            break;
        case 5/*Object*/:
            ;
            it=rb_funcall(self,sy__src_dot_name_80f3,1,bind2);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass1;
            }
            it=rb_funcall(self,sy__src,1,bind2);
            _autovar_5=it;;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass1;
            }
            break;
        }
        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_5;
        __result=it;;
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
VALUE Normalize_cant_fail(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_e,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _e=it;;
    bind_aset(bind2,1,_e);
    it=rb_funcall(self,sy___lp_cant_fa_17ef,1,bind2);
    _e=bind_aget(bind2,1);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_e;
    __result=it;;

fail:
    return it;
}
VALUE Normalize_defer_acts(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_ary,__result;
    VALUE bind2=bind_new2(16);
    _ary=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy__nary_eq__lb__rb_,1,bind2);
    _ary=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Normalize_must_empty(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_e,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _e=it;;
    bind_aset(bind2,1,_e);
    it=rb_funcall(self,sy___lp_must_em_43e9,1,bind2);
    _e=bind_aget(bind2,1);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_e;
    __result=it;;

fail:
    return it;
}
VALUE Normalize_or(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_ary,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_a,_x,_autovar_13,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Or*/:
        ;
        it=rb_ary_new3(0);
        _ary=it;;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        int stop1=0;
        while(!stop1) {
            switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_2,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Apply*/:
                ;
                int oldpos1=ptr->pos;
                int cut1=0;
alt1_1:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_2=it;;
                cstruct oldpass2=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_2);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass2;
                }
                _autovar_3=it;;
                cstruct oldpass3=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_3);
                it=rb_funcall(self,sy_spaces,0);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'e':
                    ;
                case 'g' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto pass3;
                    }
                    break;
                case 'f' ... 'f':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                    else if (1) {
                        it=failobj;
                        goto pass3;
                    }
                    break;
                }
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass3;
                }
                goto success3;
pass3:
                *ptr=oldpass3;
                if (1) {
                    it=failobj;
                    goto pass2;
                }
success3:
                *ptr=oldpass3;
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass2;
                }
                goto success2;
pass2:
                *ptr=oldpass2;
                if (1) {
                    it=failobj;
                    goto alt1_2;
                }
success2:
                *ptr=oldpass2;

                ;
                goto accept1;
alt1_2:
                ptr->pos=oldpos1;
                it=rb_funcall(self,sy__Placehol_6875,1,bind2);
                arg0=it;
                it=rb_funcall(self,sy_clas,1,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt1_3;
                }
                ptr->pos=ptr->len;
                it=rb_funcall(self,sy__Apply_lb__dq_e_619e,1,bind2);
                _autovar_4=it;;
                it=AmethystCore_append(self,_ary,_autovar_4);
                ;
                goto accept1;
alt1_3:
                ptr->pos=oldpos1;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt1_4;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_ary,_autovar_5);
                ;
                goto accept1;
alt1_4:
                ptr->pos=oldpos1;
                stop1=1;
                ;
                goto accept1;
alt1_5:
                ptr->pos=oldpos1;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept1:
                ;
                break;
            case 1/*Or*/:
                ;
                int oldpos2=ptr->pos;
                int cut2=0;
alt2_1:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_6=it;;
                cstruct oldpass4=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_6);
                ptr->pos=ptr->len;
                it=rb_funcall(self,sy__src_dot_ary_d5cf,1,bind2);
                _autovar_7=it;;
                it=AmethystCore_append(self,_ary,_autovar_7);
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass4;
                }
                goto success4;
pass4:
                *ptr=oldpass4;
                if (1) {
                    it=failobj;
                    goto alt2_2;
                }
success4:
                *ptr=oldpass4;

                ;
                goto accept2;
alt2_2:
                ptr->pos=oldpos2;
                it=rb_funcall(self,sy__Placehol_6875,1,bind2);
                arg0=it;
                it=rb_funcall(self,sy_clas,1,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt2_3;
                }
                ptr->pos=ptr->len;
                it=rb_funcall(self,sy__Apply_lb__dq_e_619e,1,bind2);
                _autovar_4=it;;
                it=AmethystCore_append(self,_ary,_autovar_4);
                ;
                goto accept2;
alt2_3:
                ptr->pos=oldpos2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt2_4;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_ary,_autovar_5);
                ;
                goto accept2;
alt2_4:
                ptr->pos=oldpos2;
                stop1=1;
                ;
                goto accept2;
alt2_5:
                ptr->pos=oldpos2;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept2:
                ;
                break;
            case 2/*Seq*/:
                ;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                it=rb_funcall(self,sy__Placehol_6875,1,bind2);
                arg0=it;
                it=rb_funcall(self,sy_clas,1,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                ptr->pos=ptr->len;
                it=rb_funcall(self,sy__Apply_lb__dq_e_619e,1,bind2);
                _autovar_4=it;;
                it=AmethystCore_append(self,_ary,_autovar_4);
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_8=it;;
                cstruct oldpass5=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_8);
                int stop2=0;
                while(!stop2) {
                    switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_3,rb_obj_class(ame_curobj2(ptr))))) {
                    case 0/*Cut*/:
                        ;
                        it=ptr->ary[ptr->pos];            ;
                        ptr->pos++;
                        ptr->pos=ptr->len;
                        break;
                    case 1/*Object*/:
                        ;
                        int oldpos4=ptr->pos;
                        int cut4=0;
alt4_1:
                        ;
                        it=rb_funcall(self,sy_cant_fail,0);
                        if (it==failobj) {
                            it=failobj;
                            goto alt4_2;
                        }
                        ;
                        goto accept4;
alt4_2:
                        ptr->pos=oldpos4;
                        stop2=1;
                        ;
                        goto accept4;
alt4_3:
                        ptr->pos=oldpos4;
                        if (1) {
                            it=failobj;
                            goto pass5;
                        };
accept4:
                        ;
                        break;
                    }
                }
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass5;
                }
                it=rb_funcall(self,sy__src_25d9,1,bind2);
                _autovar_9=it;;
                it=AmethystCore_append(self,_ary,_autovar_9);
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass5;
                }
                goto success5;
pass5:
                *ptr=oldpass5;
                if (1) {
                    it=failobj;
                    goto alt3_3;
                }
success5:
                *ptr=oldpass5;
                ptr->pos=ptr->len;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_4;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_ary,_autovar_5);
                ;
                goto accept3;
alt3_4:
                ptr->pos=oldpos3;
                stop1=1;
                ;
                goto accept3;
alt3_5:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept3:
                ;
                break;
            case 3/*Object*/:
                ;
                int oldpos5=ptr->pos;
                int cut5=0;
alt5_1:
                ;
                it=rb_funcall(self,sy__Placehol_6875,1,bind2);
                arg0=it;
                it=rb_funcall(self,sy_clas,1,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt5_2;
                }
                ptr->pos=ptr->len;
                it=rb_funcall(self,sy__Apply_lb__dq_e_619e,1,bind2);
                _autovar_4=it;;
                it=AmethystCore_append(self,_ary,_autovar_4);
                ;
                goto accept5;
alt5_2:
                ptr->pos=oldpos5;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt5_3;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_ary,_autovar_5);
                ;
                goto accept5;
alt5_3:
                ptr->pos=oldpos5;
                stop1=1;
                ;
                goto accept5;
alt5_4:
                ptr->pos=oldpos5;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept5:
                ;
                break;
            }
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__30f4,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_10=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_10;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass6;
        }
        _autovar_11=it;;
        int oldpos6=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=_autovar_11;
        _autovar_12=it;;
        int oldpos7=ptr->pos;
        int cut7=0;
alt7_1:
        ;
        it=_autovar_12;
        _a=it;;
        it=i_0;
        _x=it;;
        bind_aset(bind2,1,_x);
        bind_aset(bind2,2,_a);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
        _x=bind_aget(bind2,1);;
        _a=bind_aget(bind2,2);;
        if (it==failobj) {
            it=failobj;
            goto alt7_2;
        };
        it=rb_funcall(self,sy__Apply_lb__dq_f_3881,1,bind2);
        _autovar_13=it;;

        ;
        goto accept7;
alt7_2:
        ptr->pos=oldpos7;
        it=_autovar_12;
        _a=it;;
        it=i_1;
        _x=it;;
        bind_aset(bind2,1,_x);
        bind_aset(bind2,2,_a);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
        _x=bind_aget(bind2,1);;
        _a=bind_aget(bind2,2);;
        if (it==failobj) {
            it=failobj;
            goto alt7_3;
        };
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__bind_lb_1_rb__lb__79d7,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_13=it;;

        ;
        goto accept7;
alt7_3:
        ptr->pos=oldpos7;
        if (1) {
            it=failobj;
            goto alt6_2;
        };
accept7:
        ;

        ;
        goto accept6;
alt6_2:
        ptr->pos=oldpos6;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__Or_dot_creat_a50c,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_13=it;;

        ;
        goto accept6;
alt6_3:
        ptr->pos=oldpos6;
        if (1) {
            it=failobj;
            goto pass6;
        };
accept6:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass6;
        }
        goto success6;
pass6:
        *ptr=oldpass6;
        if (1) {
            it=failobj;
            goto fail;
        }
success6:
        *ptr=oldpass6;
        it=_autovar_13;
        __result=it;;
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
VALUE Normalize_seq2(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_ary,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_a,_x,_autovar_11,_ary_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Seq*/:
        ;
        it=rb_ary_new3(0);
        _ary=it;;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        int stop1=0;
        while(!stop1) {
            switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_5,rb_obj_class(ame_curobj2(ptr))))) {
            case 0/*Apply*/:
                ;
                int oldpos1=ptr->pos;
                int cut1=0;
alt1_1:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_2=it;;
                cstruct oldpass2=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_2);
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto pass2;
                }
                _autovar_3=it;;
                cstruct oldpass3=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_3);
                it=rb_funcall(self,sy_spaces,0);
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... 'e':
                    ;
                case 'g' ... UC(255):
                    ;
                    if (1) {
                        it=failobj;
                        goto pass3;
                    }
                    break;
                case 'f' ... 'f':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    if (ame_curstr2(ptr)[0]=='a'&&ame_curstr2(ptr)[1]=='i'&&ame_curstr2(ptr)[2]=='l'&&ame_curstr2(ptr)[3]=='s')  ptr->pos+=4;
                    else if (1) {
                        it=failobj;
                        goto pass3;
                    }
                    break;
                }
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass3;
                }
                goto success3;
pass3:
                *ptr=oldpass3;
                if (1) {
                    it=failobj;
                    goto pass2;
                }
success3:
                *ptr=oldpass3;
                it=rb_funcall(self,sy__src_25d9,1,bind2);
                _autovar_4=it;;
                it=AmethystCore_append(self,_ary,_autovar_4);
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass2;
                }
                goto success2;
pass2:
                *ptr=oldpass2;
                if (1) {
                    it=failobj;
                    goto alt1_2;
                }
success2:
                *ptr=oldpass2;
                ptr->pos=ptr->len;
                ;
                goto accept1;
alt1_2:
                ptr->pos=oldpos1;
                it=rb_funcall(self,sy__Placehol_6875,1,bind2);
                arg0=it;
                it=rb_funcall(self,sy_clas,1,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt1_3;
                }
                ;
                goto accept1;
alt1_3:
                ptr->pos=oldpos1;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt1_4;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_ary,_autovar_5);
                ;
                goto accept1;
alt1_4:
                ptr->pos=oldpos1;
                stop1=1;
                ;
                goto accept1;
alt1_5:
                ptr->pos=oldpos1;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept1:
                ;
                break;
            case 1/*Seq*/:
                ;
                int oldpos2=ptr->pos;
                int cut2=0;
alt2_1:
                ;
                it=ptr->ary[ptr->pos];            ;
                ptr->pos++;
                _autovar_6=it;;
                cstruct oldpass4=*ptr;
                ptr->pos=ptr->len=0;
                ptr->ary=NULL;
                ame_setsrc2(self,_autovar_6);
                ptr->pos=ptr->len;
                it=rb_funcall(self,sy__src_dot_ary_d5cf,1,bind2);
                _autovar_7=it;;
                it=AmethystCore_append(self,_ary,_autovar_7);
                it=Qnil;
                if (ptr->pos<ptr->len) {
                    it=failobj;
                    goto pass4;
                }
                goto success4;
pass4:
                *ptr=oldpass4;
                if (1) {
                    it=failobj;
                    goto alt2_2;
                }
success4:
                *ptr=oldpass4;

                ;
                goto accept2;
alt2_2:
                ptr->pos=oldpos2;
                it=rb_funcall(self,sy__Placehol_6875,1,bind2);
                arg0=it;
                it=rb_funcall(self,sy_clas,1,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt2_3;
                }
                ;
                goto accept2;
alt2_3:
                ptr->pos=oldpos2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt2_4;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_ary,_autovar_5);
                ;
                goto accept2;
alt2_4:
                ptr->pos=oldpos2;
                stop1=1;
                ;
                goto accept2;
alt2_5:
                ptr->pos=oldpos2;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept2:
                ;
                break;
            case 2/*Object*/:
                ;
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                it=rb_funcall(self,sy__Placehol_6875,1,bind2);
                arg0=it;
                it=rb_funcall(self,sy_clas,1,arg0);
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_3;
                }
                _autovar_5=it;;
                it=AmethystCore_append(self,_ary,_autovar_5);
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                stop1=1;
                ;
                goto accept3;
alt3_4:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept3:
                ;
                break;
            }
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__bind_lb_1_rb__dot__30f4,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_8=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_8;
        ptr->len=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _autovar_9=it;;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=_autovar_9;
        _autovar_10=it;;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        it=_autovar_10;
        _a=it;;
        it=i_0;
        _x=it;;
        bind_aset(bind2,1,_x);
        bind_aset(bind2,2,_a);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
        _x=bind_aget(bind2,1);;
        _a=bind_aget(bind2,2);;
        if (it==failobj) {
            it=failobj;
            goto alt5_2;
        };
        it=rb_funcall(self,sy__Placehol_a03d,1,bind2);
        _autovar_11=it;;

        ;
        goto accept5;
alt5_2:
        ptr->pos=oldpos5;
        it=_autovar_10;
        _a=it;;
        it=i_1;
        _x=it;;
        bind_aset(bind2,1,_x);
        bind_aset(bind2,2,_a);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
        _x=bind_aget(bind2,1);;
        _a=bind_aget(bind2,2);;
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        };
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__bind_lb_1_rb__lb__79d7,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_11=it;;

        ;
        goto accept5;
alt5_3:
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto alt4_2;
        };
accept5:
        ;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=_ary;
        _ary_2=it;;
        bind_aset(bind2,1,_ary_2);
        it=rb_funcall(self,sy__nary_eq__lb__rb_,1,bind2);
        _ary_2=bind_aget(bind2,1);;
        __result=it;;
        it=__result;
        _ary=it;;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__Seq_dot_crea_0a81,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_11=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto pass5;
        };
accept4:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass5;
        }
        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto fail;
        }
success5:
        *ptr=oldpass5;
        it=_autovar_11;
        __result_2=it;;
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
VALUE Normalize_switch(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_ary,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Normalize_9,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Or*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        it=rb_ary_new3(0);
        _autovar_2=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto pass1;
            };
accept1:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=_autovar_2;
        _ary=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto fail;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy__Switch_O_5445,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 1/*Switch_Char*/:
    case 2/*Switch_Clas*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        __result=it;;
        break;
    case 3/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
void Init_Normalize_c() {
    cls_Normalize=rb_define_class("Normalize",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    i_0=rb_funcall(rb_str_new2("0"),rb_intern("to_i"),0);
    rb_global_variable(&i_0);
    i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);
    rb_global_variable(&i_1);
    rb_define_method(cls_Normalize,"profile_report",profile_report_Normalize,0);
    s__bs__bs__7f81=rb_str_new2("\\");
    rb_global_variable(&s__bs__bs__7f81);
    s__bs__dq__3bd8=rb_str_new2("\"");
    rb_global_variable(&s__bs__dq__3bd8);
    s__qu__3590=rb_str_new2("'");
    rb_global_variable(&s__qu__3590);
    switchhash_Normalize_10=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_10);;
    switchhash_Normalize_11=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=CAct\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_11);;
    switchhash_Normalize_12=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_12);;
    switchhash_Normalize_13=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_13);;
    switchhash_Normalize_14=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=CAct\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Lambda\nnext h[k]=4 if k<=String\nnext h[k]=5 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_14);;
    switchhash_Normalize_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_1);;
    switchhash_Normalize_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_2);;
    switchhash_Normalize_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Cut\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_3);;
    switchhash_Normalize_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Seq\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_4);;
    switchhash_Normalize_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Seq\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_5);;
    switchhash_Normalize_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Bind\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_6);;
    switchhash_Normalize_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Switch_Char\nnext h[k]=3 if k<=Switch_Clas\nnext h[k]=4 if k<=Seq\nnext h[k]=5 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_7);;
    switchhash_Normalize_8=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Comment\nnext h[k]=1 if k<=Cut\nnext h[k]=2 if k<=Stop\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_8);;
    switchhash_Normalize_9=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Or\nnext h[k]=1 if k<=Switch_Char\nnext h[k]=2 if k<=Switch_Clas\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Normalize_9);;
    sy__Act_dot_crea_e434=rb_intern("_Act_dot_crea_e434");
    sy__Apply_lb__dq_e_619e=rb_intern("_Apply_lb__dq_e_619e");
    sy__Apply_lb__dq_f_3881=rb_intern("_Apply_lb__dq_f_3881");
    sy__Apply_lb_bi_3b85=rb_intern("_Apply_lb_bi_3b85");
    sy__CAct_lb_eva_559c=rb_intern("_CAct_lb_eva_559c");
    sy__Or_dot_creat_a50c=rb_intern("_Or_dot_creat_a50c");
    sy__Placehol_6875=rb_intern("_Placehol_6875");
    sy__Placehol_a03d=rb_intern("_Placehol_a03d");
    sy__Seq_dot_crea_0a81=rb_intern("_Seq_dot_crea_0a81");
    sy__Seq_lb_Bind_1036=rb_intern("_Seq_lb_Bind_1036");
    sy__Seq_lb_bind_b819=rb_intern("_Seq_lb_bind_b819");
    sy__Seq_lb_bind_c98f=rb_intern("_Seq_lb_bind_c98f");
    sy__Switch_O_5445=rb_intern("_Switch_O_5445");
    sy___lp_bind_lb_1_rb__abc3=rb_intern("__lp_bind_lb_1_rb__abc3");
    sy___lp_cant_fa_17ef=rb_intern("__lp_cant_fa_17ef");
    sy___lp_eval_lp_sr_3f78=rb_intern("__lp_eval_lp_sr_3f78");
    sy___lp_must_em_43e9=rb_intern("__lp_must_em_43e9");
    sy__bind_lb_1_rb_=rb_intern("_bind_lb_1_rb_");
    sy__bind_lb_1_rb__dot__30f4=rb_intern("_bind_lb_1_rb__dot__30f4");
    sy__bind_lb_1_rb__lb__64e3=rb_intern("_bind_lb_1_rb__lb__64e3");
    sy__bind_lb_1_rb__lb__79d7=rb_intern("_bind_lb_1_rb__lb__79d7");
    sy__bind_lb_1_rb__lt__f738=rb_intern("_bind_lb_1_rb__lt__f738");
    sy__nary_eq__lb__rb_=rb_intern("_nary_eq__lb__rb_");
    sy__src=rb_intern("_src");
    sy__src_25d9=rb_intern("_src_25d9");
    sy__src_dot_ary_d5cf=rb_intern("_src_dot_ary_d5cf");
    sy__src_dot_clas_68f9=rb_intern("_src_dot_clas_68f9");
    sy__src_dot_free_3d49=rb_intern("_src_dot_free_3d49");
    sy__src_dot_name_80f3=rb_intern("_src_dot_name_80f3");
    sy_cant_fail=rb_intern("cant_fail");
    sy_clas=rb_intern("clas");
    sy_number=rb_intern("number");
    sy_spaces=rb_intern("spaces");
    sy_switch=rb_intern("switch");
    rb_define_method(cls_Normalize,"act",Normalize_act,0);
    rb_define_method(cls_Normalize,"apply2",Normalize_apply2,0);
    rb_define_method(cls_Normalize,"bind",Normalize_bind,0);
    rb_define_method(cls_Normalize,"cant_fail",Normalize_cant_fail,0);
    rb_define_method(cls_Normalize,"defer_acts",Normalize_defer_acts,1);
    rb_define_method(cls_Normalize,"must_empty",Normalize_must_empty,0);
    rb_define_method(cls_Normalize,"or",Normalize_or,0);
    rb_define_method(cls_Normalize,"seq2",Normalize_seq2,0);
    rb_define_method(cls_Normalize,"switch",Normalize_switch,0);
}
