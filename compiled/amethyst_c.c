#include "cthyst.h"
#include "memo.c"
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
VALUE Amethyst_reverse(VALUE self ,VALUE a0);
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
static VALUE sy___at_rev;
static VALUE sy___at_rev_lb_src_704d;
static VALUE sy___lp_bind_lb_1_rb__a948;
static VALUE sy___lp_bind_lb_1_rb__abc3;
static VALUE sy___lp_bind_lb_1_rb__afaa;
static VALUE sy___lp_false_rp__sp__c3c5;
static VALUE sy__bind_lb_1_rb_;
static VALUE sy__bind_lb_1_rb__dot__03c2;
static VALUE sy__bind_lb_1_rb__dot__c3ef;
static VALUE sy__bind_lb_1_rb__dot__e879;
static VALUE sy__bind_lb_1_rb__ti__cfcb;
static VALUE sy__reverse;
static VALUE sy__self_dot_pro_8089;
static VALUE sy_alpha;
static VALUE sy_apply;
static VALUE sy_digit;
static VALUE sy_int;
static VALUE sy_lower;
static VALUE sy_newline;
static VALUE sy_spaces;
static VALUE sy_upper;
VALUE profile_report_Amethyst(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Amethyst__(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... UC(8):
        ;
    case UC(11) ... UC(11):
        ;
    case UC(14) ... UC(31):
        ;
    case '!' ... UC(255):
        ;
        goto fail;
        break;
    case UC(9) ... UC(10):
        ;
    case UC(12) ... UC(13):
        ;
    case ' ' ... ' ':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        it=__result;
        __result_2=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_alnum(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '/':
        ;
    case ':' ... '@':
        ;
    case '[' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case '0' ... '9':
        ;
        it=rb_funcall(self,sy_digit,0);
        FAILTEST(fail);
        __result=it;;
        break;
    case 'A' ... 'Z':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_alpha,0);
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_alpha(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
        it=rb_funcall(self,sy_upper,0);
        FAILTEST(fail);
        __result=it;;
        break;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_lower,0);
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_char(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_c,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _c=it;;
    bind_aset(bind2,1,_c);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__a948,1,bind2);
    _c=bind_aget(bind2,1);;
    FAILTEST(fail);
    bind_aset(bind2,1,_c);
    it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
    _c=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_clas(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_cls,_x,_a,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _cls=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_cls;
    _x=it;;
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_digit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '/':
        ;
    case ':' ... UC(255):
        ;
        goto fail;
        break;
    case '0' ... '9':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_empty(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Qnil;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_eof(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=AmethystCore_anything(self );
    FAILTEST(alt1_2);
    cut1=1;
    goto alt1_2;
    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    if (cut1) goto fail;
    it=Qnil;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    goto fail;
accept1:
    ;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_fails(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy___lp_false_rp__sp__c3c5,1,bind2);
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_false(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_x,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a=it;;
    it=Qfalse;
    it=Qfalse;
    _x=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_int(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_autovar_21,_autovar_22,_autovar_23,_n,_m,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... ',':
        ;
    case '.' ... UC(255):
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '/':
            ;
        case ':' ... UC(255):
            ;
            it=rb_ary_new3(0);
            _autovar=it;;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=_autovar;
            _autovar_2=it;;
            it=rb_obj_clone(s_0x_f6f8);
            goto alt1_2;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=_autovar;
            _autovar_2=it;;
            it=rb_obj_clone(s_0b_3470);
            goto alt1_3;
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            it=_autovar;
            _autovar_2=it;;
            it=rb_obj_clone(s_0o_6f57);
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else goto alt1_4;
            it=rb_obj_clone(s_0o_6f57);
            it=rb_obj_clone(s_0o_6f57);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                goto alt1_4;
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_5=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_4,_autovar_5);
            int stop1=0;
            while(!stop1) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '8' ... UC(255):
                    ;
                    stop1=1;
                    break;
                case '0' ... '7':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_6=it;;
                    it=AmethystCore_append(self,_autovar_4,_autovar_6);
                    break;
                }
            }
            it=_autovar_4;
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_7);
            ;
            goto accept1;
alt1_4:
            ptr->pos=oldpos1;
            it=_autovar;
            _autovar_2=it;;
            it=rb_ary_new3(0);
            goto alt1_5;
            ;
            goto accept1;
alt1_5:
            ptr->pos=oldpos1;
            goto fail;
accept1:
            ;
            break;
        case '0' ... '0':
            ;
            it=rb_ary_new3(0);
            _autovar_8=it;;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_obj_clone(s_0x_f6f8);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1;
            else goto alt2_2;
            it=rb_obj_clone(s_0x_f6f8);
            it=rb_obj_clone(s_0x_f6f8);
            it=rb_obj_clone(s_0x_f6f8);
            _autovar_9=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_9);
            it=rb_ary_new3(0);
            _autovar_10=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case ':' ... '@':
                ;
            case 'G' ... '`':
                ;
            case 'g' ... UC(255):
                ;
                goto alt2_2;
                break;
            case '0' ... '9':
                ;
            case 'A' ... 'F':
                ;
            case 'a' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_11=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_10,_autovar_11);
            int stop2=0;
            while(!stop2) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case ':' ... '@':
                    ;
                case 'G' ... '`':
                    ;
                case 'g' ... UC(255):
                    ;
                    stop2=1;
                    break;
                case '0' ... '9':
                    ;
                case 'A' ... 'F':
                    ;
                case 'a' ... 'f':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_12=it;;
                    it=AmethystCore_append(self,_autovar_10,_autovar_12);
                    break;
                }
            }
            it=_autovar_10;
            _autovar_13=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_13);
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_obj_clone(s_0b_3470);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1;
            else goto alt2_3;
            it=rb_obj_clone(s_0b_3470);
            it=rb_obj_clone(s_0b_3470);
            it=rb_obj_clone(s_0b_3470);
            _autovar_14=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_14);
            it=rb_ary_new3(0);
            _autovar_15=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '2' ... UC(255):
                ;
                goto alt2_3;
                break;
            case '0' ... '1':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_16=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_15,_autovar_16);
            int stop3=0;
            while(!stop3) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '2' ... UC(255):
                    ;
                    stop3=1;
                    break;
                case '0' ... '1':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_17=it;;
                    it=AmethystCore_append(self,_autovar_15,_autovar_17);
                    break;
                }
            }
            it=_autovar_15;
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_18);
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_obj_clone(s_0o_6f57);
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else goto alt2_4;
            it=rb_obj_clone(s_0o_6f57);
            it=rb_obj_clone(s_0o_6f57);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                goto alt2_4;
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_5=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_4,_autovar_5);
            int stop4=0;
            while(!stop4) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '8' ... UC(255):
                    ;
                    stop4=1;
                    break;
                case '0' ... '7':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_6=it;;
                    it=AmethystCore_append(self,_autovar_4,_autovar_6);
                    break;
                }
            }
            it=_autovar_4;
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_7);
            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_ary_new3(0);
            _autovar_19=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar_19,_autovar_20);
            int stop5=0;
            while(!stop5) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case ':' ... UC(255):
                    ;
                    stop5=1;
                    break;
                case '0' ... '9':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_21=it;;
                    it=AmethystCore_append(self,_autovar_19,_autovar_21);
                    break;
                }
            }
            it=_autovar_19;
            _autovar_22=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_22);
            ;
            goto accept2;
alt2_5:
            ptr->pos=oldpos2;
            goto fail;
accept2:
            ;
            break;
        case '1' ... '9':
            ;
            it=rb_ary_new3(0);
            _autovar_23=it;;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_obj_clone(s_0x_f6f8);
            goto alt3_2;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_obj_clone(s_0b_3470);
            goto alt3_3;
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_obj_clone(s_0o_6f57);
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else goto alt3_4;
            it=rb_obj_clone(s_0o_6f57);
            it=rb_obj_clone(s_0o_6f57);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                goto alt3_4;
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_5=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_4,_autovar_5);
            int stop6=0;
            while(!stop6) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '8' ... UC(255):
                    ;
                    stop6=1;
                    break;
                case '0' ... '7':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_6=it;;
                    it=AmethystCore_append(self,_autovar_4,_autovar_6);
                    break;
                }
            }
            it=_autovar_4;
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_7);
            ;
            goto accept3;
alt3_4:
            ptr->pos=oldpos3;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_ary_new3(0);
            _autovar_19=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar_19,_autovar_20);
            int stop7=0;
            while(!stop7) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case ':' ... UC(255):
                    ;
                    stop7=1;
                    break;
                case '0' ... '9':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_21=it;;
                    it=AmethystCore_append(self,_autovar_19,_autovar_21);
                    break;
                }
            }
            it=_autovar_19;
            _autovar_22=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_22);
            ;
            goto accept3;
alt3_5:
            ptr->pos=oldpos3;
            goto fail;
accept3:
            ;
            break;
        }
        it=_autovar_2;
        _n=it;;
        it=rb_obj_clone(s__d41d);
        _m=it;;
        bind_aset(bind2,1,_m);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__afaa,1,bind2);
        _m=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        __result=it;;
        break;
    case '-' ... '-':
        ;
        it=rb_obj_clone(s__mi__336d);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s__mi__336d);
        it=rb_ary_new3(0);
        it=rb_ary_new3(0);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '/':
            ;
        case ':' ... UC(255):
            ;
            it=rb_ary_new3(0);
            _autovar=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=_autovar;
            _autovar_2=it;;
            it=rb_obj_clone(s_0x_f6f8);
            goto alt4_2;
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=_autovar;
            _autovar_2=it;;
            it=rb_obj_clone(s_0b_3470);
            goto alt4_3;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            it=_autovar;
            _autovar_2=it;;
            it=rb_obj_clone(s_0o_6f57);
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else goto alt4_4;
            it=rb_obj_clone(s_0o_6f57);
            it=rb_obj_clone(s_0o_6f57);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                goto alt4_4;
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_5=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_4,_autovar_5);
            int stop8=0;
            while(!stop8) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '8' ... UC(255):
                    ;
                    stop8=1;
                    break;
                case '0' ... '7':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_6=it;;
                    it=AmethystCore_append(self,_autovar_4,_autovar_6);
                    break;
                }
            }
            it=_autovar_4;
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_7);
            ;
            goto accept4;
alt4_4:
            ptr->pos=oldpos4;
            it=_autovar;
            _autovar_2=it;;
            it=rb_ary_new3(0);
            goto alt4_5;
            ;
            goto accept4;
alt4_5:
            ptr->pos=oldpos4;
            goto fail;
accept4:
            ;
            break;
        case '0' ... '0':
            ;
            it=rb_ary_new3(0);
            _autovar_8=it;;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_obj_clone(s_0x_f6f8);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1;
            else goto alt5_2;
            it=rb_obj_clone(s_0x_f6f8);
            it=rb_obj_clone(s_0x_f6f8);
            it=rb_obj_clone(s_0x_f6f8);
            _autovar_9=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_9);
            it=rb_ary_new3(0);
            _autovar_10=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case ':' ... '@':
                ;
            case 'G' ... '`':
                ;
            case 'g' ... UC(255):
                ;
                goto alt5_2;
                break;
            case '0' ... '9':
                ;
            case 'A' ... 'F':
                ;
            case 'a' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_11=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_10,_autovar_11);
            int stop9=0;
            while(!stop9) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case ':' ... '@':
                    ;
                case 'G' ... '`':
                    ;
                case 'g' ... UC(255):
                    ;
                    stop9=1;
                    break;
                case '0' ... '9':
                    ;
                case 'A' ... 'F':
                    ;
                case 'a' ... 'f':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_12=it;;
                    it=AmethystCore_append(self,_autovar_10,_autovar_12);
                    break;
                }
            }
            it=_autovar_10;
            _autovar_13=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_13);
            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_obj_clone(s_0b_3470);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1;
            else goto alt5_3;
            it=rb_obj_clone(s_0b_3470);
            it=rb_obj_clone(s_0b_3470);
            it=rb_obj_clone(s_0b_3470);
            _autovar_14=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_14);
            it=rb_ary_new3(0);
            _autovar_15=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '2' ... UC(255):
                ;
                goto alt5_3;
                break;
            case '0' ... '1':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_16=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_15,_autovar_16);
            int stop10=0;
            while(!stop10) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '2' ... UC(255):
                    ;
                    stop10=1;
                    break;
                case '0' ... '1':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_17=it;;
                    it=AmethystCore_append(self,_autovar_15,_autovar_17);
                    break;
                }
            }
            it=_autovar_15;
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_18);
            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_obj_clone(s_0o_6f57);
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else goto alt5_4;
            it=rb_obj_clone(s_0o_6f57);
            it=rb_obj_clone(s_0o_6f57);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                goto alt5_4;
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_5=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_4,_autovar_5);
            int stop11=0;
            while(!stop11) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '8' ... UC(255):
                    ;
                    stop11=1;
                    break;
                case '0' ... '7':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_6=it;;
                    it=AmethystCore_append(self,_autovar_4,_autovar_6);
                    break;
                }
            }
            it=_autovar_4;
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_7);
            ;
            goto accept5;
alt5_4:
            ptr->pos=oldpos5;
            it=_autovar_8;
            _autovar_2=it;;
            it=rb_ary_new3(0);
            _autovar_19=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar_19,_autovar_20);
            int stop12=0;
            while(!stop12) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case ':' ... UC(255):
                    ;
                    stop12=1;
                    break;
                case '0' ... '9':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_21=it;;
                    it=AmethystCore_append(self,_autovar_19,_autovar_21);
                    break;
                }
            }
            it=_autovar_19;
            _autovar_22=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_22);
            ;
            goto accept5;
alt5_5:
            ptr->pos=oldpos5;
            goto fail;
accept5:
            ;
            break;
        case '1' ... '9':
            ;
            it=rb_ary_new3(0);
            _autovar_23=it;;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_obj_clone(s_0x_f6f8);
            goto alt6_2;
            ;
            goto accept6;
alt6_2:
            ptr->pos=oldpos6;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_obj_clone(s_0b_3470);
            goto alt6_3;
            ;
            goto accept6;
alt6_3:
            ptr->pos=oldpos6;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_obj_clone(s_0o_6f57);
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else goto alt6_4;
            it=rb_obj_clone(s_0o_6f57);
            it=rb_obj_clone(s_0o_6f57);
            _autovar_3=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_3);
            it=rb_ary_new3(0);
            _autovar_4=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                goto alt6_4;
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_5=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_4,_autovar_5);
            int stop13=0;
            while(!stop13) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case '8' ... UC(255):
                    ;
                    stop13=1;
                    break;
                case '0' ... '7':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_6=it;;
                    it=AmethystCore_append(self,_autovar_4,_autovar_6);
                    break;
                }
            }
            it=_autovar_4;
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_7);
            ;
            goto accept6;
alt6_4:
            ptr->pos=oldpos6;
            it=_autovar_23;
            _autovar_2=it;;
            it=rb_ary_new3(0);
            _autovar_19=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar_19,_autovar_20);
            int stop14=0;
            while(!stop14) {
                switch((unsigned char)*ame_curstr2(ptr)) {
                case UC(0) ... '/':
                    ;
                case ':' ... UC(255):
                    ;
                    stop14=1;
                    break;
                case '0' ... '9':
                    ;
                    it=rb_str_new(ptr->str+ptr->pos,1);
                    ptr->pos++;
                    _autovar_21=it;;
                    it=AmethystCore_append(self,_autovar_19,_autovar_21);
                    break;
                }
            }
            it=_autovar_19;
            _autovar_22=it;;
            it=AmethystCore_append(self,_autovar_2,_autovar_22);
            ;
            goto accept6;
alt6_5:
            ptr->pos=oldpos6;
            goto fail;
accept6:
            ;
            break;
        }
        it=_autovar_2;
        _n=it;;
        it=rb_obj_clone(s__mi__336d);
        _m=it;;
        bind_aset(bind2,1,_m);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy___lp_bind_lb_1_rb__afaa,1,bind2);
        _m=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_line(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(9):
            ;
        case UC(11) ... UC(12):
            ;
        case UC(14) ... UC(255):
            ;
            it=AmethystCore_anything(self );
            FAILTEST(fail);
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            break;
        case UC(10) ... UC(10):
            ;
        case UC(13) ... UC(13):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=rb_funcall(self,sy_newline,0);
            FAILTEST(alt1_2);
            _autovar_2=it;;
            cut1=1;
            stop1=1;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            if (cut1) goto fail;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_3);
            _autovar_2=it;;

            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            goto fail;
accept1:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            break;
        }
    }
    it=_autovar;
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy__bind_lb_1_rb__ti__cfcb,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_f,_rule,_autovar,_autovar_2,_delim,_s,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    _rule=a0;;
    _delim=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _f=it;;
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=_rule;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    FAILTEST(alt1_2);
    _autovar=it;;
    it=AmethystCore_append(self,_f,_autovar);
    it=rb_ary_new3(0);
    _autovar_2=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=_delim;
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        FAILTEST(alt2_2);
        it=_s;
        it=_rule;
        arg0=it;
        it=rb_funcall(self,sy_apply,1,arg0);
        FAILTEST(alt2_2);
        _autovar_3=it;;
        it=AmethystCore_append(self,_autovar_2,_autovar_3);
        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        stop1=1;
        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto alt1_2;
accept2:
        ;
    }
    it=_autovar_2;
    _autovar_4=it;;
    it=AmethystCore_append(self,_f,_autovar_4);
    bind_aset(bind2,1,_f);
    it=rb_funcall(self,sy__bind_lb_1_rb_,1,bind2);
    _f=bind_aget(bind2,1);;
    __result=it;;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=Qnil;
    it=rb_ary_new3(0);
    __result=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    goto fail;
accept1:
    ;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_lower(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'a' ... 'z':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_member(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_a,_x,__result;
    VALUE bind2=bind_new2(16);
    _x=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_newline(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... UC(9):
        ;
    case UC(11) ... UC(12):
        ;
    case UC(14) ... UC(255):
        ;
        goto fail;
        break;
    case UC(10) ... UC(10):
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s__bs_n_1d78);
        __result=it;;
        it=__result;
        __result_2=it;;
        break;
    case UC(13) ... UC(13):
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        if (ame_curstr2(ptr)[0]==UC(10))  ptr->pos+=1;
        else goto alt1_2;
        it=rb_obj_clone(s__bs_r_bs_n_bdb2);
        __result=it;;
        it=__result;
        __result_2=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s__bs_r_8ce5);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s__bs_r_8ce5);
        __result=it;;
        it=__result;
        __result_2=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_nil(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_x,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a=it;;
    it=Qnil;
    it=Qnil;
    _x=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_number(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... ',':
        ;
    case '.' ... '/':
        ;
    case ':' ... UC(255):
        ;
        goto fail;
        break;
    case '-' ... '-':
        ;
    case '0' ... '9':
        ;
        it=rb_funcall(self,sy_int,0);
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_obj,_autovar,_rule,_r,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _rule=a0;;
    _obj=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_obj;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=_autovar;
    if(TYPE(ptr->src)==T_STRING) {
        ptr->str=RSTRING_PTR(ptr->src);
        ptr->len=RSTRING_LEN(ptr->src);
    }
    else {
        VALUE ary;
        if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
        else  ary=rb_funcall(ptr->src,s_to_a,0);
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    it=_rule;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    FAILTEST(pass1);
    _r=it;;
    bind_aset(bind2,1,_r);
    it=rb_funcall(self,sy__self_dot_pro_8089,1,bind2);
    _r=bind_aget(bind2,1);;
    _autovar_2=it;;
    it=Qnil;
    if (ptr->pos<ptr->len) goto pass1;
    goto success1;
pass1:
    *ptr=oldpass1;
    goto fail;
success1:
    *ptr=oldpass1;
    it=_autovar_2;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_a,_b,_x,_a_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _a=a0;;
    _b=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_a);
    bind_aset(bind2,2,_b);
    it=rb_funcall(self,sy__bind_lb_1_rb__dot__c3ef,1,bind2);
    _a=bind_aget(bind2,1);;
    _b=bind_aget(bind2,2);;
    _x=it;;
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a_2=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a_2);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a_2=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a_2;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_a,_b,_x,_a_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _a=a0;;
    _b=a1;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_a);
    bind_aset(bind2,2,_b);
    it=rb_funcall(self,sy__bind_lb_1_rb__dot__03c2,1,bind2);
    _a=bind_aget(bind2,1);;
    _b=bind_aget(bind2,2);;
    _x=it;;
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a_2=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a_2);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a_2=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a_2;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_regch(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_regex,_x,_a,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _regex=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_regex;
    _x=it;;
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_replace(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_exp,_it,__result;
    VALUE bind2=bind_new2(16);
    _exp=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=_exp;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    FAILTEST(alt1_2);
    _it=it;;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=AmethystCore_anything(self );
    FAILTEST(alt1_3);
    _it=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    goto fail;
accept1:
    ;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy__bind_lb_1_rb__ti__cfcb,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_reverse(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_l,_rev,__result;
    VALUE bind2=bind_new2(16);
    _l=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy___at_rev,1,bind2);
    it=rb_funcall(self,sy___at_rev_lb_src_704d,1,bind2);
    arg0=it;
    it=rb_funcall(self,sy__reverse,1,arg0);
    FAILTEST(fail);
    it=_l;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    FAILTEST(fail);
    _rev=it;;
    it=rb_funcall(self,sy___at_rev_lb_src_704d,1,bind2);
    arg0=it;
    it=rb_funcall(self,sy__reverse,1,arg0);
    FAILTEST(fail);
    it=_rev;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_seq(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    FAILTEST(fail);
    it=_s;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_space(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... UC(8):
        ;
    case UC(11) ... UC(11):
        ;
    case UC(14) ... UC(31):
        ;
    case '!' ... UC(255):
        ;
        goto fail;
        break;
    case UC(9) ... UC(10):
        ;
    case UC(12) ... UC(13):
        ;
    case ' ' ... ' ':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_spaces(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,__result,_autovar_2,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(11):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(255):
            ;
            stop1=1;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(12) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            __result=it;;
            it=__result;
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            break;
        }
    }
    it=_autovar;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_token(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,_s_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_spaces,0);
    it=_s;
    _s_2=it;;
    it=_s_2;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    FAILTEST(fail);
    it=_s_2;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_true(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_x,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    FAILTEST(fail);
    _a=it;;
    it=Qtrue;
    it=Qtrue;
    _x=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy___lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    FAILTEST(fail);
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_until(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_x,_e,_s,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _e=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _x=it;;
    it=rb_ary_new3(0);
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '[':
            ;
        case ']' ... UC(255):
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            FAILTEST(alt1_2);
            it=_s;
            cut1=1;
            stop1=1;
            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            if (cut1) goto fail;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_obj_clone(s__bs__bs__7f81);
            goto alt2_2;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=Qnil;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            goto alt1_3;
accept2:
            ;
            it=AmethystCore_anything(self );
            FAILTEST(alt1_3);
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            goto fail;
accept1:
            ;
            break;
        case UC(92) ... UC(92):
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            FAILTEST(alt3_2);
            it=_s;
            cut3=1;
            stop1=1;
            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            if (cut3) goto fail;
            it=rb_obj_clone(s__bs__bs__7f81);
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__bs__bs__7f81);
            it=rb_obj_clone(s__bs__bs__7f81);
            it=rb_obj_clone(s__bs__bs__7f81);
            _autovar_2=it;;
            it=AmethystCore_append(self,_x,_autovar_2);
            it=AmethystCore_anything(self );
            FAILTEST(alt3_3);
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto fail;
accept3:
            ;
            break;
        }
    }
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy__bind_lb_1_rb__dot__e879,1,bind2);
    _x=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Amethyst_upper(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_word(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,__result_2;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
    case 'a' ... 'z':
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_funcall(self,sy_alpha,0);
        FAILTEST(alt1_2);
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s___b14a);
        goto alt1_3;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case '_' ... '_':
        ;
        it=rb_obj_clone(s___b14a);
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s___b14a);
        __result_2=it;;
        it=__result_2;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Amethyst_xdigit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '/':
        ;
    case ':' ... '@':
        ;
    case 'G' ... '`':
        ;
    case 'g' ... UC(255):
        ;
        goto fail;
        break;
    case '0' ... '9':
        ;
    case 'A' ... 'F':
        ;
    case 'a' ... 'f':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
void Init_amethyst_c() {
    cls_Amethyst=rb_define_class("Amethyst",rb_const_get(rb_cObject,rb_intern("AmethystCore")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Amethyst,"profile_report",profile_report_Amethyst,0);
    s_0b_3470=rb_str_new2("0b");
    rb_global_variable(&s_0b_3470);
    s_0o_6f57=rb_str_new2("0o");
    rb_global_variable(&s_0o_6f57);
    s_0x_f6f8=rb_str_new2("0x");
    rb_global_variable(&s_0x_f6f8);
    s___b14a=rb_str_new2("_");
    rb_global_variable(&s___b14a);
    s__bs__bs__7f81=rb_str_new2("\\");
    rb_global_variable(&s__bs__bs__7f81);
    s__bs_n_1d78=rb_str_new2("\n");
    rb_global_variable(&s__bs_n_1d78);
    s__bs_r_8ce5=rb_str_new2("\r");
    rb_global_variable(&s__bs_r_8ce5);
    s__bs_r_bs_n_bdb2=rb_str_new2("\r\n");
    rb_global_variable(&s__bs_r_bs_n_bdb2);
    s__d41d=rb_str_new2("");
    rb_global_variable(&s__d41d);
    s__mi__336d=rb_str_new2("-");
    rb_global_variable(&s__mi__336d);
    sy___at_rev=rb_intern("__at_rev");
    sy___at_rev_lb_src_704d=rb_intern("__at_rev_lb_src_704d");
    sy___lp_bind_lb_1_rb__a948=rb_intern("__lp_bind_lb_1_rb__a948");
    sy___lp_bind_lb_1_rb__abc3=rb_intern("__lp_bind_lb_1_rb__abc3");
    sy___lp_bind_lb_1_rb__afaa=rb_intern("__lp_bind_lb_1_rb__afaa");
    sy___lp_false_rp__sp__c3c5=rb_intern("__lp_false_rp__sp__c3c5");
    sy__bind_lb_1_rb_=rb_intern("_bind_lb_1_rb_");
    sy__bind_lb_1_rb__dot__03c2=rb_intern("_bind_lb_1_rb__dot__03c2");
    sy__bind_lb_1_rb__dot__c3ef=rb_intern("_bind_lb_1_rb__dot__c3ef");
    sy__bind_lb_1_rb__dot__e879=rb_intern("_bind_lb_1_rb__dot__e879");
    sy__bind_lb_1_rb__ti__cfcb=rb_intern("_bind_lb_1_rb__ti__cfcb");
    sy__reverse=rb_intern("_reverse");
    sy__self_dot_pro_8089=rb_intern("_self_dot_pro_8089");
    sy_alpha=rb_intern("alpha");
    sy_apply=rb_intern("apply");
    sy_digit=rb_intern("digit");
    sy_int=rb_intern("int");
    sy_lower=rb_intern("lower");
    sy_newline=rb_intern("newline");
    sy_spaces=rb_intern("spaces");
    sy_upper=rb_intern("upper");
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
    rb_define_method(cls_Amethyst,"reverse",Amethyst_reverse,1);
    rb_define_method(cls_Amethyst,"seq",Amethyst_seq,1);
    rb_define_method(cls_Amethyst,"space",Amethyst_space,0);
    rb_define_method(cls_Amethyst,"spaces",Amethyst_spaces,0);
    rb_define_method(cls_Amethyst,"token",Amethyst_token,1);
    rb_define_method(cls_Amethyst,"true",Amethyst_true,0);
    rb_define_method(cls_Amethyst,"until",Amethyst_until,1);
    rb_define_method(cls_Amethyst,"upper",Amethyst_upper,0);
    rb_define_method(cls_Amethyst,"word",Amethyst_word,0);
    rb_define_method(cls_Amethyst,"xdigit",Amethyst_xdigit,0);
    rb_eval_string("testversionamethyst('1b18503256de2aeb1ea36a489f99e2be')");
}
