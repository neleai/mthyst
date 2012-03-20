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
VALUE Amethyst_find(VALUE self ,VALUE a0);
VALUE Amethyst_int(VALUE self );
VALUE Amethyst_line(VALUE self );
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1);
VALUE Amethyst_lower(VALUE self );
VALUE Amethyst_member(VALUE self ,VALUE a0);
VALUE Amethyst_nested(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
VALUE Amethyst_newline(VALUE self );
VALUE Amethyst_nil(VALUE self );
VALUE Amethyst_number(VALUE self );
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1,VALUE a2);
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
static VALUE sy_Amethyst__at_rev;
static VALUE sy_Amethyst__at_rev_lb_src_704d;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__a948;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__abc3;
static VALUE sy_Amethyst__lp_bind_lb_1_rb__afaa;
static VALUE sy_Amethyst__lp_false_rp__sp__c3c5;
static VALUE sy_Amethyst_apply_lp_bi_f480;
static VALUE sy_Amethyst_bind_lb_1_rb_;
static VALUE sy_Amethyst_bind_lb_1_rb__dot__03c2;
static VALUE sy_Amethyst_bind_lb_1_rb__dot__1371;
static VALUE sy_Amethyst_bind_lb_1_rb__dot__c3ef;
static VALUE sy_Amethyst_bind_lb_1_rb__dot__e879;
static VALUE sy_Amethyst_bind_lb_1_rb__ti__cfcb;
static VALUE sy_Amethyst_self_dot_pro_8089;
static VALUE sy__reverse;
static VALUE sy_apply;
VALUE profile_report_Amethyst(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Amethyst__(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,__result_2;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
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
fail:
    return it;
}
VALUE Amethyst_alnum(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case '0' ... '9':
        ;
        it=Amethyst_digit(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    case 'A' ... 'Z':
        ;
    case 'a' ... 'z':
        ;
        it=Amethyst_alpha(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_alpha(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'A' ... 'Z':
        ;
        it=Amethyst_upper(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    case 'a' ... 'z':
        ;
        it=Amethyst_lower(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_char(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_c,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _c=it;;
    bind_aset(bind2,1,_c);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__a948,1,bind2);
    _c=bind_aget(bind2,1);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    bind_aset(bind2,1,_c);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb_,1,bind2);
    _c=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_clas(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_cls,_x,_a,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _cls=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_cls;
    _x=it;;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_digit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '/':
        ;
    case ':' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case '0' ... '9':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_empty(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Qnil;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_eof(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
    cut1=1;
    if (1) {
        it=failobj;
        goto alt1_2;
    }
    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    if (cut1) {
        it=failobj;
        goto fail;
    }
    VALUE lalt13_result=__result;
    it=Qnil;
    __result=it;;

    ;
    goto accept1;
alt1_3:
    __result=lalt13_result;
    ptr->pos=oldpos1;
    if (1) {
        it=failobj;
        goto fail;
    };
accept1:
    ;

fail:
    return it;
}
VALUE Amethyst_fails(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Amethyst__lp_false_rp__sp__c3c5,1,bind2);
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_false(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_x,__result,__result_2;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    it=Qfalse;
    _x=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_find(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_exp,_e,__result;
    VALUE bind2=bind_new2(16);
    _exp=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12e=_e;
        it=_exp;
        arg0=it;
        it=rb_funcall(self,sy_apply,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _e=it;;
        cut1=1;
        stop1=1;
        ;
        goto accept1;
alt1_2:
        _e=lalt12e;
        ptr->pos=oldpos1;
        if (cut1) {
            it=failobj;
            goto fail;
        }
        VALUE lalt13e=_e;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        ;
        goto accept1;
alt1_3:
        _e=lalt13e;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
    }
    ptr->pos=ptr->len;
    bind_aset(bind2,1,_e);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb_,1,bind2);
    _e=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_int(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10,_autovar_11,_autovar_12,_autovar_13,_autovar_14,_autovar_15,_autovar_16,_autovar_17,_autovar_18,_autovar_19,_autovar_20,_n,_m,__result;
    VALUE bind2=bind_new2(16);
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
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto fail;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0o_6f57);
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            it=rb_ary_new3(0);
            _autovar_3=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto fail;
                }
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
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
                    _autovar_5=it;;
                    it=AmethystCore_append(self,_autovar_3,_autovar_5);
                    break;
                }
            }
            it=_autovar_3;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar,_autovar_6);
            break;
        case '0' ... '0':
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12autovar=_autovar;
            VALUE lalt12autovar_7=_autovar_7;
            VALUE lalt12autovar_8=_autovar_8;
            VALUE lalt12autovar_9=_autovar_9;
            VALUE lalt12autovar_10=_autovar_10;
            VALUE lalt12autovar_11=_autovar_11;
            VALUE lalt12autovar_12=_autovar_12;
            VALUE lalt12autovar_13=_autovar_13;
            VALUE lalt12autovar_14=_autovar_14;
            VALUE lalt12autovar_15=_autovar_15;
            VALUE lalt12autovar_16=_autovar_16;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22autovar=_autovar;
            VALUE lalt22autovar_7=_autovar_7;
            VALUE lalt22autovar_8=_autovar_8;
            VALUE lalt22autovar_9=_autovar_9;
            VALUE lalt22autovar_10=_autovar_10;
            VALUE lalt22autovar_11=_autovar_11;
            if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt2_2;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0x_f6f8);
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar,_autovar_7);
            it=rb_ary_new3(0);
            _autovar_8=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case ':' ... '@':
                ;
            case 'G' ... '`':
                ;
            case 'g' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt2_2;
                }
                break;
            case '0' ... '9':
                ;
            case 'A' ... 'F':
                ;
            case 'a' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_9=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_8,_autovar_9);
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
                    _autovar_10=it;;
                    it=AmethystCore_append(self,_autovar_8,_autovar_10);
                    break;
                }
            }
            it=_autovar_8;
            _autovar_11=it;;
            it=AmethystCore_append(self,_autovar,_autovar_11);
            ;
            goto accept2;
alt2_2:
            _autovar=lalt22autovar;
            _autovar_7=lalt22autovar_7;
            _autovar_8=lalt22autovar_8;
            _autovar_9=lalt22autovar_9;
            _autovar_10=lalt22autovar_10;
            _autovar_11=lalt22autovar_11;
            ptr->pos=oldpos2;
            VALUE lalt23autovar=_autovar;
            VALUE lalt23autovar_7=_autovar_7;
            VALUE lalt23autovar_8=_autovar_8;
            VALUE lalt23autovar_9=_autovar_9;
            VALUE lalt23autovar_10=_autovar_10;
            VALUE lalt23autovar_11=_autovar_11;
            VALUE lalt23autovar_12=_autovar_12;
            VALUE lalt23autovar_13=_autovar_13;
            VALUE lalt23autovar_14=_autovar_14;
            VALUE lalt23autovar_15=_autovar_15;
            VALUE lalt23autovar_16=_autovar_16;
            if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt2_3;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0b_3470);
            _autovar_12=it;;
            it=AmethystCore_append(self,_autovar,_autovar_12);
            it=rb_ary_new3(0);
            _autovar_13=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '2' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt2_3;
                }
                break;
            case '0' ... '1':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_14=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_13,_autovar_14);
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
                    _autovar_15=it;;
                    it=AmethystCore_append(self,_autovar_13,_autovar_15);
                    break;
                }
            }
            it=_autovar_13;
            _autovar_16=it;;
            it=AmethystCore_append(self,_autovar,_autovar_16);
            ;
            goto accept2;
alt2_3:
            _autovar=lalt23autovar;
            _autovar_7=lalt23autovar_7;
            _autovar_8=lalt23autovar_8;
            _autovar_9=lalt23autovar_9;
            _autovar_10=lalt23autovar_10;
            _autovar_11=lalt23autovar_11;
            _autovar_12=lalt23autovar_12;
            _autovar_13=lalt23autovar_13;
            _autovar_14=lalt23autovar_14;
            _autovar_15=lalt23autovar_15;
            _autovar_16=lalt23autovar_16;
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
            _autovar=lalt12autovar;
            _autovar_7=lalt12autovar_7;
            _autovar_8=lalt12autovar_8;
            _autovar_9=lalt12autovar_9;
            _autovar_10=lalt12autovar_10;
            _autovar_11=lalt12autovar_11;
            _autovar_12=lalt12autovar_12;
            _autovar_13=lalt12autovar_13;
            _autovar_14=lalt12autovar_14;
            _autovar_15=lalt12autovar_15;
            _autovar_16=lalt12autovar_16;
            ptr->pos=oldpos1;
            VALUE lalt13autovar=_autovar;
            VALUE lalt13autovar_2=_autovar_2;
            VALUE lalt13autovar_3=_autovar_3;
            VALUE lalt13autovar_4=_autovar_4;
            VALUE lalt13autovar_5=_autovar_5;
            VALUE lalt13autovar_6=_autovar_6;
            VALUE lalt13autovar_7=_autovar_7;
            VALUE lalt13autovar_8=_autovar_8;
            VALUE lalt13autovar_9=_autovar_9;
            VALUE lalt13autovar_10=_autovar_10;
            VALUE lalt13autovar_11=_autovar_11;
            VALUE lalt13autovar_12=_autovar_12;
            VALUE lalt13autovar_13=_autovar_13;
            VALUE lalt13autovar_14=_autovar_14;
            VALUE lalt13autovar_15=_autovar_15;
            VALUE lalt13autovar_16=_autovar_16;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto alt1_3;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0o_6f57);
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            it=rb_ary_new3(0);
            _autovar_3=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt1_3;
                }
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
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
                    _autovar_5=it;;
                    it=AmethystCore_append(self,_autovar_3,_autovar_5);
                    break;
                }
            }
            it=_autovar_3;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar,_autovar_6);
            ;
            goto accept1;
alt1_3:
            _autovar=lalt13autovar;
            _autovar_2=lalt13autovar_2;
            _autovar_3=lalt13autovar_3;
            _autovar_4=lalt13autovar_4;
            _autovar_5=lalt13autovar_5;
            _autovar_6=lalt13autovar_6;
            _autovar_7=lalt13autovar_7;
            _autovar_8=lalt13autovar_8;
            _autovar_9=lalt13autovar_9;
            _autovar_10=lalt13autovar_10;
            _autovar_11=lalt13autovar_11;
            _autovar_12=lalt13autovar_12;
            _autovar_13=lalt13autovar_13;
            _autovar_14=lalt13autovar_14;
            _autovar_15=lalt13autovar_15;
            _autovar_16=lalt13autovar_16;
            ptr->pos=oldpos1;
            VALUE lalt14autovar=_autovar;
            VALUE lalt14autovar_2=_autovar_2;
            VALUE lalt14autovar_3=_autovar_3;
            VALUE lalt14autovar_4=_autovar_4;
            VALUE lalt14autovar_5=_autovar_5;
            VALUE lalt14autovar_6=_autovar_6;
            VALUE lalt14autovar_7=_autovar_7;
            VALUE lalt14autovar_8=_autovar_8;
            VALUE lalt14autovar_9=_autovar_9;
            VALUE lalt14autovar_10=_autovar_10;
            VALUE lalt14autovar_11=_autovar_11;
            VALUE lalt14autovar_12=_autovar_12;
            VALUE lalt14autovar_13=_autovar_13;
            VALUE lalt14autovar_14=_autovar_14;
            VALUE lalt14autovar_15=_autovar_15;
            VALUE lalt14autovar_16=_autovar_16;
            VALUE lalt14autovar_17=_autovar_17;
            VALUE lalt14autovar_18=_autovar_18;
            VALUE lalt14autovar_19=_autovar_19;
            VALUE lalt14autovar_20=_autovar_20;
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_ary_new3(0);
            _autovar_17=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
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
                    _autovar_19=it;;
                    it=AmethystCore_append(self,_autovar_17,_autovar_19);
                    break;
                }
            }
            it=_autovar_17;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar,_autovar_20);
            ;
            goto accept1;
alt1_4:
            _autovar=lalt14autovar;
            _autovar_2=lalt14autovar_2;
            _autovar_3=lalt14autovar_3;
            _autovar_4=lalt14autovar_4;
            _autovar_5=lalt14autovar_5;
            _autovar_6=lalt14autovar_6;
            _autovar_7=lalt14autovar_7;
            _autovar_8=lalt14autovar_8;
            _autovar_9=lalt14autovar_9;
            _autovar_10=lalt14autovar_10;
            _autovar_11=lalt14autovar_11;
            _autovar_12=lalt14autovar_12;
            _autovar_13=lalt14autovar_13;
            _autovar_14=lalt14autovar_14;
            _autovar_15=lalt14autovar_15;
            _autovar_16=lalt14autovar_16;
            _autovar_17=lalt14autovar_17;
            _autovar_18=lalt14autovar_18;
            _autovar_19=lalt14autovar_19;
            _autovar_20=lalt14autovar_20;
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case '1' ... '9':
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE lalt32autovar=_autovar;
            VALUE lalt32autovar_2=_autovar_2;
            VALUE lalt32autovar_3=_autovar_3;
            VALUE lalt32autovar_4=_autovar_4;
            VALUE lalt32autovar_5=_autovar_5;
            VALUE lalt32autovar_6=_autovar_6;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto alt3_2;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0o_6f57);
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            it=rb_ary_new3(0);
            _autovar_3=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt3_2;
                }
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
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
                    _autovar_5=it;;
                    it=AmethystCore_append(self,_autovar_3,_autovar_5);
                    break;
                }
            }
            it=_autovar_3;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar,_autovar_6);
            ;
            goto accept3;
alt3_2:
            _autovar=lalt32autovar;
            _autovar_2=lalt32autovar_2;
            _autovar_3=lalt32autovar_3;
            _autovar_4=lalt32autovar_4;
            _autovar_5=lalt32autovar_5;
            _autovar_6=lalt32autovar_6;
            ptr->pos=oldpos3;
            VALUE lalt33autovar=_autovar;
            VALUE lalt33autovar_2=_autovar_2;
            VALUE lalt33autovar_3=_autovar_3;
            VALUE lalt33autovar_4=_autovar_4;
            VALUE lalt33autovar_5=_autovar_5;
            VALUE lalt33autovar_6=_autovar_6;
            VALUE lalt33autovar_17=_autovar_17;
            VALUE lalt33autovar_18=_autovar_18;
            VALUE lalt33autovar_19=_autovar_19;
            VALUE lalt33autovar_20=_autovar_20;
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_ary_new3(0);
            _autovar_17=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
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
                    _autovar_19=it;;
                    it=AmethystCore_append(self,_autovar_17,_autovar_19);
                    break;
                }
            }
            it=_autovar_17;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar,_autovar_20);
            ;
            goto accept3;
alt3_3:
            _autovar=lalt33autovar;
            _autovar_2=lalt33autovar_2;
            _autovar_3=lalt33autovar_3;
            _autovar_4=lalt33autovar_4;
            _autovar_5=lalt33autovar_5;
            _autovar_6=lalt33autovar_6;
            _autovar_17=lalt33autovar_17;
            _autovar_18=lalt33autovar_18;
            _autovar_19=lalt33autovar_19;
            _autovar_20=lalt33autovar_20;
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        }
        it=_autovar;
        _n=it;;
        it=rb_obj_clone(s__d41d);
        _m=it;;
        bind_aset(bind2,1,_m);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__afaa,1,bind2);
        _m=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        __result=it;;
        break;
    case '-' ... '-':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '/':
            ;
        case ':' ... UC(255):
            ;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto fail;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0o_6f57);
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            it=rb_ary_new3(0);
            _autovar_3=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto fail;
                }
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
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
                    _autovar_5=it;;
                    it=AmethystCore_append(self,_autovar_3,_autovar_5);
                    break;
                }
            }
            it=_autovar_3;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar,_autovar_6);
            break;
        case '0' ... '0':
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar=_autovar;
            VALUE lalt42autovar_7=_autovar_7;
            VALUE lalt42autovar_8=_autovar_8;
            VALUE lalt42autovar_9=_autovar_9;
            VALUE lalt42autovar_10=_autovar_10;
            VALUE lalt42autovar_11=_autovar_11;
            VALUE lalt42autovar_12=_autovar_12;
            VALUE lalt42autovar_13=_autovar_13;
            VALUE lalt42autovar_14=_autovar_14;
            VALUE lalt42autovar_15=_autovar_15;
            VALUE lalt42autovar_16=_autovar_16;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE lalt52autovar=_autovar;
            VALUE lalt52autovar_7=_autovar_7;
            VALUE lalt52autovar_8=_autovar_8;
            VALUE lalt52autovar_9=_autovar_9;
            VALUE lalt52autovar_10=_autovar_10;
            VALUE lalt52autovar_11=_autovar_11;
            if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt5_2;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0x_f6f8);
            _autovar_7=it;;
            it=AmethystCore_append(self,_autovar,_autovar_7);
            it=rb_ary_new3(0);
            _autovar_8=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case ':' ... '@':
                ;
            case 'G' ... '`':
                ;
            case 'g' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt5_2;
                }
                break;
            case '0' ... '9':
                ;
            case 'A' ... 'F':
                ;
            case 'a' ... 'f':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_9=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_8,_autovar_9);
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
                    _autovar_10=it;;
                    it=AmethystCore_append(self,_autovar_8,_autovar_10);
                    break;
                }
            }
            it=_autovar_8;
            _autovar_11=it;;
            it=AmethystCore_append(self,_autovar,_autovar_11);
            ;
            goto accept5;
alt5_2:
            _autovar=lalt52autovar;
            _autovar_7=lalt52autovar_7;
            _autovar_8=lalt52autovar_8;
            _autovar_9=lalt52autovar_9;
            _autovar_10=lalt52autovar_10;
            _autovar_11=lalt52autovar_11;
            ptr->pos=oldpos5;
            VALUE lalt53autovar=_autovar;
            VALUE lalt53autovar_7=_autovar_7;
            VALUE lalt53autovar_8=_autovar_8;
            VALUE lalt53autovar_9=_autovar_9;
            VALUE lalt53autovar_10=_autovar_10;
            VALUE lalt53autovar_11=_autovar_11;
            VALUE lalt53autovar_12=_autovar_12;
            VALUE lalt53autovar_13=_autovar_13;
            VALUE lalt53autovar_14=_autovar_14;
            VALUE lalt53autovar_15=_autovar_15;
            VALUE lalt53autovar_16=_autovar_16;
            if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto alt5_3;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0b_3470);
            _autovar_12=it;;
            it=AmethystCore_append(self,_autovar,_autovar_12);
            it=rb_ary_new3(0);
            _autovar_13=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '2' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt5_3;
                }
                break;
            case '0' ... '1':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_14=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_13,_autovar_14);
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
                    _autovar_15=it;;
                    it=AmethystCore_append(self,_autovar_13,_autovar_15);
                    break;
                }
            }
            it=_autovar_13;
            _autovar_16=it;;
            it=AmethystCore_append(self,_autovar,_autovar_16);
            ;
            goto accept5;
alt5_3:
            _autovar=lalt53autovar;
            _autovar_7=lalt53autovar_7;
            _autovar_8=lalt53autovar_8;
            _autovar_9=lalt53autovar_9;
            _autovar_10=lalt53autovar_10;
            _autovar_11=lalt53autovar_11;
            _autovar_12=lalt53autovar_12;
            _autovar_13=lalt53autovar_13;
            _autovar_14=lalt53autovar_14;
            _autovar_15=lalt53autovar_15;
            _autovar_16=lalt53autovar_16;
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
            _autovar=lalt42autovar;
            _autovar_7=lalt42autovar_7;
            _autovar_8=lalt42autovar_8;
            _autovar_9=lalt42autovar_9;
            _autovar_10=lalt42autovar_10;
            _autovar_11=lalt42autovar_11;
            _autovar_12=lalt42autovar_12;
            _autovar_13=lalt42autovar_13;
            _autovar_14=lalt42autovar_14;
            _autovar_15=lalt42autovar_15;
            _autovar_16=lalt42autovar_16;
            ptr->pos=oldpos4;
            VALUE lalt43autovar=_autovar;
            VALUE lalt43autovar_2=_autovar_2;
            VALUE lalt43autovar_3=_autovar_3;
            VALUE lalt43autovar_4=_autovar_4;
            VALUE lalt43autovar_5=_autovar_5;
            VALUE lalt43autovar_6=_autovar_6;
            VALUE lalt43autovar_7=_autovar_7;
            VALUE lalt43autovar_8=_autovar_8;
            VALUE lalt43autovar_9=_autovar_9;
            VALUE lalt43autovar_10=_autovar_10;
            VALUE lalt43autovar_11=_autovar_11;
            VALUE lalt43autovar_12=_autovar_12;
            VALUE lalt43autovar_13=_autovar_13;
            VALUE lalt43autovar_14=_autovar_14;
            VALUE lalt43autovar_15=_autovar_15;
            VALUE lalt43autovar_16=_autovar_16;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto alt4_3;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0o_6f57);
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            it=rb_ary_new3(0);
            _autovar_3=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt4_3;
                }
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
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
                    _autovar_5=it;;
                    it=AmethystCore_append(self,_autovar_3,_autovar_5);
                    break;
                }
            }
            it=_autovar_3;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar,_autovar_6);
            ;
            goto accept4;
alt4_3:
            _autovar=lalt43autovar;
            _autovar_2=lalt43autovar_2;
            _autovar_3=lalt43autovar_3;
            _autovar_4=lalt43autovar_4;
            _autovar_5=lalt43autovar_5;
            _autovar_6=lalt43autovar_6;
            _autovar_7=lalt43autovar_7;
            _autovar_8=lalt43autovar_8;
            _autovar_9=lalt43autovar_9;
            _autovar_10=lalt43autovar_10;
            _autovar_11=lalt43autovar_11;
            _autovar_12=lalt43autovar_12;
            _autovar_13=lalt43autovar_13;
            _autovar_14=lalt43autovar_14;
            _autovar_15=lalt43autovar_15;
            _autovar_16=lalt43autovar_16;
            ptr->pos=oldpos4;
            VALUE lalt44autovar=_autovar;
            VALUE lalt44autovar_2=_autovar_2;
            VALUE lalt44autovar_3=_autovar_3;
            VALUE lalt44autovar_4=_autovar_4;
            VALUE lalt44autovar_5=_autovar_5;
            VALUE lalt44autovar_6=_autovar_6;
            VALUE lalt44autovar_7=_autovar_7;
            VALUE lalt44autovar_8=_autovar_8;
            VALUE lalt44autovar_9=_autovar_9;
            VALUE lalt44autovar_10=_autovar_10;
            VALUE lalt44autovar_11=_autovar_11;
            VALUE lalt44autovar_12=_autovar_12;
            VALUE lalt44autovar_13=_autovar_13;
            VALUE lalt44autovar_14=_autovar_14;
            VALUE lalt44autovar_15=_autovar_15;
            VALUE lalt44autovar_16=_autovar_16;
            VALUE lalt44autovar_17=_autovar_17;
            VALUE lalt44autovar_18=_autovar_18;
            VALUE lalt44autovar_19=_autovar_19;
            VALUE lalt44autovar_20=_autovar_20;
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_ary_new3(0);
            _autovar_17=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
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
                    _autovar_19=it;;
                    it=AmethystCore_append(self,_autovar_17,_autovar_19);
                    break;
                }
            }
            it=_autovar_17;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar,_autovar_20);
            ;
            goto accept4;
alt4_4:
            _autovar=lalt44autovar;
            _autovar_2=lalt44autovar_2;
            _autovar_3=lalt44autovar_3;
            _autovar_4=lalt44autovar_4;
            _autovar_5=lalt44autovar_5;
            _autovar_6=lalt44autovar_6;
            _autovar_7=lalt44autovar_7;
            _autovar_8=lalt44autovar_8;
            _autovar_9=lalt44autovar_9;
            _autovar_10=lalt44autovar_10;
            _autovar_11=lalt44autovar_11;
            _autovar_12=lalt44autovar_12;
            _autovar_13=lalt44autovar_13;
            _autovar_14=lalt44autovar_14;
            _autovar_15=lalt44autovar_15;
            _autovar_16=lalt44autovar_16;
            _autovar_17=lalt44autovar_17;
            _autovar_18=lalt44autovar_18;
            _autovar_19=lalt44autovar_19;
            _autovar_20=lalt44autovar_20;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto fail;
            };
accept4:
            ;
            break;
        case '1' ... '9':
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            VALUE lalt62autovar=_autovar;
            VALUE lalt62autovar_2=_autovar_2;
            VALUE lalt62autovar_3=_autovar_3;
            VALUE lalt62autovar_4=_autovar_4;
            VALUE lalt62autovar_5=_autovar_5;
            VALUE lalt62autovar_6=_autovar_6;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto alt6_2;
            }
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_obj_clone(s_0o_6f57);
            _autovar_2=it;;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            it=rb_ary_new3(0);
            _autovar_3=it;;
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case '8' ... UC(255):
                ;
                if (1) {
                    it=failobj;
                    goto alt6_2;
                }
                break;
            case '0' ... '7':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_4=it;;
                break;
            }
            it=AmethystCore_append(self,_autovar_3,_autovar_4);
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
                    _autovar_5=it;;
                    it=AmethystCore_append(self,_autovar_3,_autovar_5);
                    break;
                }
            }
            it=_autovar_3;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar,_autovar_6);
            ;
            goto accept6;
alt6_2:
            _autovar=lalt62autovar;
            _autovar_2=lalt62autovar_2;
            _autovar_3=lalt62autovar_3;
            _autovar_4=lalt62autovar_4;
            _autovar_5=lalt62autovar_5;
            _autovar_6=lalt62autovar_6;
            ptr->pos=oldpos6;
            VALUE lalt63autovar=_autovar;
            VALUE lalt63autovar_2=_autovar_2;
            VALUE lalt63autovar_3=_autovar_3;
            VALUE lalt63autovar_4=_autovar_4;
            VALUE lalt63autovar_5=_autovar_5;
            VALUE lalt63autovar_6=_autovar_6;
            VALUE lalt63autovar_17=_autovar_17;
            VALUE lalt63autovar_18=_autovar_18;
            VALUE lalt63autovar_19=_autovar_19;
            VALUE lalt63autovar_20=_autovar_20;
            it=rb_ary_new3(0);
            _autovar=it;;
            it=rb_ary_new3(0);
            _autovar_17=it;;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_18=it;;
            it=AmethystCore_append(self,_autovar_17,_autovar_18);
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
                    _autovar_19=it;;
                    it=AmethystCore_append(self,_autovar_17,_autovar_19);
                    break;
                }
            }
            it=_autovar_17;
            _autovar_20=it;;
            it=AmethystCore_append(self,_autovar,_autovar_20);
            ;
            goto accept6;
alt6_3:
            _autovar=lalt63autovar;
            _autovar_2=lalt63autovar_2;
            _autovar_3=lalt63autovar_3;
            _autovar_4=lalt63autovar_4;
            _autovar_5=lalt63autovar_5;
            _autovar_6=lalt63autovar_6;
            _autovar_17=lalt63autovar_17;
            _autovar_18=lalt63autovar_18;
            _autovar_19=lalt63autovar_19;
            _autovar_20=lalt63autovar_20;
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto fail;
            };
accept6:
            ;
            break;
        }
        it=_autovar;
        _n=it;;
        it=rb_obj_clone(s__mi__336d);
        _m=it;;
        bind_aset(bind2,1,_m);
        bind_aset(bind2,2,_n);
        it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__afaa,1,bind2);
        _m=bind_aget(bind2,1);;
        _n=bind_aget(bind2,2);;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_line(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
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
            if (it==failobj) {
                it=failobj;
                goto fail;
            }
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
            VALUE lalt12autovar_2=_autovar_2;
            it=Amethyst_newline(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _autovar_2=it;;
            cut1=1;
            stop1=1;
            ;
            goto accept1;
alt1_2:
            _autovar_2=lalt12autovar_2;
            ptr->pos=oldpos1;
            if (cut1) {
                it=failobj;
                goto fail;
            }
            VALUE lalt13autovar_2=_autovar_2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_3;
            }
            _autovar_2=it;;

            ;
            goto accept1;
alt1_3:
            _autovar_2=lalt13autovar_2;
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            it=AmethystCore_append(self,_autovar,_autovar_2);
            break;
        }
    }
    it=_autovar;
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__ti__cfcb,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_listOf(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_f,_rule,_autovar,_autovar_2,_delim,_s,_autovar_3,_autovar_4,__result;
    VALUE bind2=bind_new2(16);
    _rule=a0;;
    _delim=a1;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _f=it;;
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    VALUE lalt12s=_s;
    VALUE lalt12f=_f;
    VALUE lalt12autovar=_autovar;
    VALUE lalt12autovar_2=_autovar_2;
    VALUE lalt12autovar_3=_autovar_3;
    VALUE lalt12autovar_4=_autovar_4;
    VALUE lalt12_result=__result;
    it=_rule;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto alt1_2;
    }
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
        VALUE lalt22s=_s;
        VALUE lalt22autovar_3=_autovar_3;
        it=_delim;
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        it=_rule;
        arg0=it;
        it=rb_funcall(self,sy_apply,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        _autovar_3=it;;
        it=AmethystCore_append(self,_autovar_2,_autovar_3);
        ;
        goto accept2;
alt2_2:
        _s=lalt22s;
        _autovar_3=lalt22autovar_3;
        ptr->pos=oldpos2;
        VALUE lalt23s=_s;
        VALUE lalt23autovar_3=_autovar_3;
        stop1=1;
        ;
        goto accept2;
alt2_3:
        _s=lalt23s;
        _autovar_3=lalt23autovar_3;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
    }
    it=_autovar_2;
    _autovar_4=it;;
    bind_aset(bind2,1,_f);
    bind_aset(bind2,2,_autovar_4);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__dot__1371,1,bind2);
    _f=bind_aget(bind2,1);;
    _autovar_4=bind_aget(bind2,2);;
    bind_aset(bind2,1,_f);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb_,1,bind2);
    _f=bind_aget(bind2,1);;
    __result=it;;

    ;
    goto accept1;
alt1_2:
    _s=lalt12s;
    _f=lalt12f;
    _autovar=lalt12autovar;
    _autovar_2=lalt12autovar_2;
    _autovar_3=lalt12autovar_3;
    _autovar_4=lalt12autovar_4;
    __result=lalt12_result;
    ptr->pos=oldpos1;
    VALUE lalt13s=_s;
    VALUE lalt13f=_f;
    VALUE lalt13autovar=_autovar;
    VALUE lalt13autovar_2=_autovar_2;
    VALUE lalt13autovar_3=_autovar_3;
    VALUE lalt13autovar_4=_autovar_4;
    VALUE lalt13_result=__result;
    it=Qnil;
    it=rb_ary_new3(0);
    __result=it;;

    ;
    goto accept1;
alt1_3:
    _s=lalt13s;
    _f=lalt13f;
    _autovar=lalt13autovar;
    _autovar_2=lalt13autovar_2;
    _autovar_3=lalt13autovar_3;
    _autovar_4=lalt13autovar_4;
    __result=lalt13_result;
    ptr->pos=oldpos1;
    if (1) {
        it=failobj;
        goto fail;
    };
accept1:
    ;

fail:
    return it;
}
VALUE Amethyst_lower(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case '{' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'a' ... 'z':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_member(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_a,_x,__result;
    VALUE bind2=bind_new2(16);
    _x=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_nested(VALUE self ,VALUE a0,VALUE a1,VALUE a2) {
    VALUE vals[3];
    VALUE it ,_start,_s,_mid,_end,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _start=a0;;
    _mid=a1;;
    _end=a2;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_start;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_mid;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_end;
    _s=it;;
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_s;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_newline(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,__result_2;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
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
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12_result=__result;
        VALUE lalt12_result_2=__result_2;
        if (ame_curstr2(ptr)[0]==UC(10))  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto alt1_2;
        }
        it=rb_obj_clone(s__bs_r_bs_n_bdb2);
        __result=it;;
        it=__result;
        __result_2=it;;

        ;
        goto accept1;
alt1_2:
        __result=lalt12_result;
        __result_2=lalt12_result_2;
        ptr->pos=oldpos1;
        VALUE lalt13_result=__result;
        VALUE lalt13_result_2=__result_2;
        it=rb_obj_clone(s__bs_r_8ce5);
        __result=it;;
        it=__result;
        __result_2=it;;

        ;
        goto accept1;
alt1_3:
        __result=lalt13_result;
        __result_2=lalt13_result_2;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_nil(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_x,__result,__result_2;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    it=Qnil;
    _x=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_number(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case '-' ... '-':
        ;
    case '0' ... '9':
        ;
        it=Amethyst_int(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_parse(VALUE self ,VALUE a0,VALUE a1,VALUE a2) {
    VALUE vals[3];
    VALUE it ,_obj,_autovar,_rule,_args,_r,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _rule=a0;;
    _obj=a1;;
    _args=a2;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_obj;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar);
    bind_aset(bind2,1,_rule);
    bind_aset(bind2,2,_args);
    it=rb_funcall(self,sy_Amethyst_apply_lp_bi_f480,1,bind2);
    _rule=bind_aget(bind2,1);;
    _args=bind_aget(bind2,2);;
    _r=it;;
    bind_aset(bind2,1,_r);
    it=rb_funcall(self,sy_Amethyst_self_dot_pro_8089,1,bind2);
    _r=bind_aget(bind2,1);;
    _autovar_2=it;;
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
    it=_autovar_2;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_range_ex(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_a,_b,_x,_a_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _a=a0;;
    _b=a1;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_a);
    bind_aset(bind2,2,_b);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__dot__c3ef,1,bind2);
    _a=bind_aget(bind2,1);;
    _b=bind_aget(bind2,2);;
    _x=it;;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a_2=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a_2);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a_2=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a_2;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_range_in(VALUE self ,VALUE a0,VALUE a1) {
    VALUE vals[2];
    VALUE it ,_a,_b,_x,_a_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _a=a0;;
    _b=a1;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_a);
    bind_aset(bind2,2,_b);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__dot__03c2,1,bind2);
    _a=bind_aget(bind2,1);;
    _b=bind_aget(bind2,2);;
    _x=it;;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a_2=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a_2);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a_2=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a_2;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_regch(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_regex,_x,_a,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _regex=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_regex;
    _x=it;;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_replace(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,_exp,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    _exp=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar_2=_autovar_2;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22autovar_2=_autovar_2;
        it=_exp;
        arg0=it;
        it=rb_funcall(self,sy_apply,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        _autovar_2=it;;

        ;
        goto accept2;
alt2_2:
        _autovar_2=lalt22autovar_2;
        ptr->pos=oldpos2;
        VALUE lalt23autovar_2=_autovar_2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        _autovar_2=it;;

        ;
        goto accept2;
alt2_3:
        _autovar_2=lalt23autovar_2;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto alt1_2;
        };
accept2:
        ;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        ;
        goto accept1;
alt1_2:
        _autovar_2=lalt12autovar_2;
        ptr->pos=oldpos1;
        VALUE lalt13autovar_2=_autovar_2;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        _autovar_2=lalt13autovar_2;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
    }
    it=_autovar;
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__ti__cfcb,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_reverse(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_l,_rev,__result;
    VALUE bind2=bind_new2(16);
    _l=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_Amethyst__at_rev,1,bind2);
    it=rb_funcall(self,sy_Amethyst__at_rev_lb_src_704d,1,bind2);
    arg0=it;
    it=rb_funcall(self,sy__reverse,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_l;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _rev=it;;
    it=rb_funcall(self,sy_Amethyst__at_rev_lb_src_704d,1,bind2);
    arg0=it;
    it=rb_funcall(self,sy__reverse,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_rev;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_seq(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,__result;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_s;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_s;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_space(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
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
fail:
    return it;
}
VALUE Amethyst_spaces(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,__result,_autovar_2,__result_2;
    VALUE bind2=bind_new2(16);
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

fail:
    return it;
}
VALUE Amethyst_token(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_s,_s_2,__result,__result_2;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Amethyst_spaces(self );
    it=_s;
    _s_2=it;;
    it=_s_2;
    arg0=it;
    it=AmethystCore__seq(self ,arg0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=_s_2;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_true(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_x,__result,__result_2;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _a=it;;
    it=Qtrue;
    _x=it;;
    bind_aset(bind2,1,_x);
    bind_aset(bind2,2,_a);
    it=rb_funcall(self,sy_Amethyst__lp_bind_lb_1_rb__abc3,1,bind2);
    _x=bind_aget(bind2,1);;
    _a=bind_aget(bind2,2);;
    if (it==failobj) {
        it=failobj;
        goto fail;
    };
    it=_a;
    __result=it;;
    it=__result;
    __result_2=it;;

fail:
    return it;
}
VALUE Amethyst_until(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_x,_e,_s,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _e=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _x=it;;
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
            VALUE lalt12s=_s;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            cut1=1;
            stop1=1;
            ;
            goto accept1;
alt1_2:
            _s=lalt12s;
            ptr->pos=oldpos1;
            if (cut1) {
                it=failobj;
                goto fail;
            }
            VALUE lalt13s=_s;
            VALUE lalt13autovar=_autovar;
            it=Qnil;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_3;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept1;
alt1_3:
            _s=lalt13s;
            _autovar=lalt13autovar;
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case UC(92) ... UC(92):
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22s=_s;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            cut2=1;
            stop1=1;
            ;
            goto accept2;
alt2_2:
            _s=lalt22s;
            ptr->pos=oldpos2;
            if (cut2) {
                it=failobj;
                goto fail;
            }
            VALUE lalt23s=_s;
            VALUE lalt23autovar=_autovar;
            VALUE lalt23autovar_2=_autovar_2;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__bs__bs__7f81);
            _autovar_2=it;;
            it=AmethystCore_append(self,_x,_autovar_2);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept2;
alt2_3:
            _s=lalt23s;
            _autovar=lalt23autovar;
            _autovar_2=lalt23autovar_2;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto fail;
            };
accept2:
            ;
            break;
        }
    }
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy_Amethyst_bind_lb_1_rb__dot__e879,1,bind2);
    _x=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_upper(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'A' ... 'Z':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_word(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,__result_2;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'A' ... 'Z':
        ;
    case 'a' ... 'z':
        ;
        it=Amethyst_alpha(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        __result=it;;
        break;
    case '_' ... '_':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s___b14a);
        __result_2=it;;
        it=__result_2;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Amethyst_xdigit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
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
        if (1) {
            it=failobj;
            goto fail;
        }
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
fail:
    return it;
}
void Init_Amethyst_c() {
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
    sy_Amethyst__at_rev=rb_intern("Amethyst__at_rev");
    sy_Amethyst__at_rev_lb_src_704d=rb_intern("Amethyst__at_rev_lb_src_704d");
    sy_Amethyst__lp_bind_lb_1_rb__a948=rb_intern("Amethyst__lp_bind_lb_1_rb__a948");
    sy_Amethyst__lp_bind_lb_1_rb__abc3=rb_intern("Amethyst__lp_bind_lb_1_rb__abc3");
    sy_Amethyst__lp_bind_lb_1_rb__afaa=rb_intern("Amethyst__lp_bind_lb_1_rb__afaa");
    sy_Amethyst__lp_false_rp__sp__c3c5=rb_intern("Amethyst__lp_false_rp__sp__c3c5");
    sy_Amethyst_apply_lp_bi_f480=rb_intern("Amethyst_apply_lp_bi_f480");
    sy_Amethyst_bind_lb_1_rb_=rb_intern("Amethyst_bind_lb_1_rb_");
    sy_Amethyst_bind_lb_1_rb__dot__03c2=rb_intern("Amethyst_bind_lb_1_rb__dot__03c2");
    sy_Amethyst_bind_lb_1_rb__dot__1371=rb_intern("Amethyst_bind_lb_1_rb__dot__1371");
    sy_Amethyst_bind_lb_1_rb__dot__c3ef=rb_intern("Amethyst_bind_lb_1_rb__dot__c3ef");
    sy_Amethyst_bind_lb_1_rb__dot__e879=rb_intern("Amethyst_bind_lb_1_rb__dot__e879");
    sy_Amethyst_bind_lb_1_rb__ti__cfcb=rb_intern("Amethyst_bind_lb_1_rb__ti__cfcb");
    sy_Amethyst_self_dot_pro_8089=rb_intern("Amethyst_self_dot_pro_8089");
    sy__reverse=rb_intern("_reverse");
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
    rb_define_method(cls_Amethyst,"find",Amethyst_find,1);
    rb_define_method(cls_Amethyst,"int",Amethyst_int,0);
    rb_define_method(cls_Amethyst,"line",Amethyst_line,0);
    rb_define_method(cls_Amethyst,"listOf",Amethyst_listOf,2);
    rb_define_method(cls_Amethyst,"lower",Amethyst_lower,0);
    rb_define_method(cls_Amethyst,"member",Amethyst_member,1);
    rb_define_method(cls_Amethyst,"nested",Amethyst_nested,3);
    rb_define_method(cls_Amethyst,"newline",Amethyst_newline,0);
    rb_define_method(cls_Amethyst,"nil",Amethyst_nil,0);
    rb_define_method(cls_Amethyst,"number",Amethyst_number,0);
    rb_define_method(cls_Amethyst,"parse",Amethyst_parse,3);
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
}
