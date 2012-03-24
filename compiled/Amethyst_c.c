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
VALUE Amethyst_else(VALUE self );
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
    VALUE it ,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,_c=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
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
    VALUE it ,_cls=Qnil,_x=Qnil,_a=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(2);
    _cls=a0;;
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
VALUE Amethyst_else(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_empty(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=Qnil;
    __result=it;;

fail:
    return it;
}
VALUE Amethyst_eof(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    if(!ptr->branches)ptr->discard=ptr->pos;
    ptr->branches+=2;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto revert1;
    }
    cut1=1;
    if (1) {
        it=failobj;
        goto revert1;
    }
    ;
    goto accept2;
revert1:
    ;
    goto alt1_2;
accept2:
    ;

    ;
    ptr->branches-=2;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    if(cut1) {
        ptr->branches-=0;
        it=failobj;
        goto fail;
    }
    ptr->branches-=1;
    it=Qnil;
    __result=it;;

    ;
    goto accept3;
revert2:
    ;
    goto alt1_3;
accept3:
    ;

    ;
    ptr->branches-=1;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    ptr->branches-=1;
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,_a=Qnil,_x=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(2);
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
    VALUE it ,_exp=Qnil,_e=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    _exp=a0;;
    VALUE arg0;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=2;
        it=_exp;
        arg0=it;
        it=rb_funcall(self,sy_apply,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _e=it;;
        cut1=1;
        stop1=1;
        ;
        goto accept2;
revert1:
        ;
        goto alt1_2;
accept2:
        ;

        ;
        ptr->branches-=2;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        if(cut1) {
            ptr->branches-=0;
            it=failobj;
            goto fail;
        }
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert2;
        }
        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        ptr->branches-=1;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil,_autovar_18=Qnil,_autovar_19=Qnil,_autovar_20=Qnil,_n=Qnil,_m=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
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
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto revert2;
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
                    goto revert2;
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
            goto accept4;
revert2:
            ;
            goto alt2_2;
accept4:
            ;

            ;
            ptr->branches-=2;
            goto accept3;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto revert3;
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
                    goto revert3;
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
            goto accept5;
revert3:
            ;
            goto alt2_3;
accept5:
            ;

            ;
            ptr->branches-=1;
            goto accept3;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto revert1;
            };
accept3:
            ;

            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=3;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto revert4;
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
                    goto revert4;
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
            goto accept6;
revert4:
            ;
            goto alt1_3;
accept6:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
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
            goto accept7;
revert5:
            ;
            goto alt1_4;
accept7:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_4:
            ptr->pos=oldpos1;
            ptr->branches-=1;
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
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto revert6;
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
                    goto revert6;
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
            goto accept9;
revert6:
            ;
            goto alt3_2;
accept9:
            ;

            ;
            ptr->branches-=2;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            ptr->branches-=1;
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
            goto accept10;
revert7:
            ;
            goto alt3_3;
accept10:
            ;

            ;
            ptr->branches-=1;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept8:
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
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            if (ame_curstr2(ptr)[0]=='x')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto revert9;
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
                    goto revert9;
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
            goto accept14;
revert9:
            ;
            goto alt5_2;
accept14:
            ;

            ;
            ptr->branches-=2;
            goto accept13;
alt5_2:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (ame_curstr2(ptr)[0]=='b')  ptr->pos+=1;
            else if (1) {
                it=failobj;
                goto revert10;
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
                    goto revert10;
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
            goto accept15;
revert10:
            ;
            goto alt5_3;
accept15:
            ;

            ;
            ptr->branches-=1;
            goto accept13;
alt5_3:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto revert8;
            };
accept13:
            ;

            ;
            goto accept12;
revert8:
            ;
            goto alt4_2;
accept12:
            ;

            ;
            ptr->branches-=3;
            goto accept11;
alt4_2:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto revert11;
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
                    goto revert11;
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
            goto accept16;
revert11:
            ;
            goto alt4_3;
accept16:
            ;

            ;
            ptr->branches-=2;
            goto accept11;
alt4_3:
            ptr->pos=oldpos4;
            ptr->branches-=1;
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
            goto accept17;
revert12:
            ;
            goto alt4_4;
accept17:
            ;

            ;
            ptr->branches-=1;
            goto accept11;
alt4_4:
            ptr->pos=oldpos4;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept11:
            ;
            break;
        case '1' ... '9':
            ;
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            if (ame_curstr2(ptr)[0]=='0'&&ame_curstr2(ptr)[1]=='o')  ptr->pos+=2;
            else if (1) {
                it=failobj;
                goto revert13;
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
                    goto revert13;
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
            goto accept19;
revert13:
            ;
            goto alt6_2;
accept19:
            ;

            ;
            ptr->branches-=2;
            goto accept18;
alt6_2:
            ptr->pos=oldpos6;
            ptr->branches-=1;
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
            goto accept20;
revert14:
            ;
            goto alt6_3;
accept20:
            ;

            ;
            ptr->branches-=1;
            goto accept18;
alt6_3:
            ptr->pos=oldpos6;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept18:
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
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
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
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=Amethyst_newline(self );
            if (it==failobj) {
                it=failobj;
                goto revert1;
            }
            _autovar_2=it;;
            cut1=1;
            stop1=1;
            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            if(cut1) {
                ptr->branches-=0;
                it=failobj;
                goto fail;
            }
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert2;
            }
            _autovar_2=it;;

            ;
            goto accept3;
revert2:
            ;
            goto alt1_3;
accept3:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
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
    VALUE it ,_f=Qnil,_rule=Qnil,_autovar=Qnil,_autovar_2=Qnil,_delim=Qnil,_s=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
    _rule=a0;;
    _delim=a1;;
    VALUE arg0;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _f=it;;
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    if(!ptr->branches)ptr->discard=ptr->pos;
    ptr->branches+=2;
    it=_rule;
    arg0=it;
    it=rb_funcall(self,sy_apply,1,arg0);
    if (it==failobj) {
        it=failobj;
        goto revert1;
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
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=2;
        it=_delim;
        _s=it;;
        it=_s;
        arg0=it;
        it=AmethystCore__seq(self ,arg0);
        if (it==failobj) {
            it=failobj;
            goto revert2;
        }
        it=_rule;
        arg0=it;
        it=rb_funcall(self,sy_apply,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto revert2;
        }
        _autovar_3=it;;
        it=AmethystCore_append(self,_autovar_2,_autovar_3);
        ;
        goto accept4;
revert2:
        ;
        goto alt2_2;
accept4:
        ;

        ;
        ptr->branches-=2;
        goto accept3;
alt2_2:
        ptr->pos=oldpos2;
        ptr->branches-=1;
        stop1=1;
        ;
        goto accept5;
revert3:
        ;
        goto alt2_3;
accept5:
        ;

        ;
        ptr->branches-=1;
        goto accept3;
alt2_3:
        ptr->pos=oldpos2;
        ptr->branches-=1;
        if (1) {
            it=failobj;
            goto revert1;
        };
accept3:
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
    goto accept2;
revert1:
    ;
    goto alt1_2;
accept2:
    ;

    ;
    ptr->branches-=2;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    ptr->branches-=1;
    it=Qnil;
    it=rb_ary_new3(0);
    __result=it;;

    ;
    goto accept6;
revert4:
    ;
    goto alt1_3;
accept6:
    ;

    ;
    ptr->branches-=1;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    ptr->branches-=1;
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,_a=Qnil,_x=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
    _x=a0;;
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
    VALUE it ,_start=Qnil,_s=Qnil,_mid=Qnil,_end=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(0);
    _start=a0;;
    _mid=a1;;
    _end=a2;;
    VALUE arg0;
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
    VALUE it ,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(0);
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
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=2;
        if (ame_curstr2(ptr)[0]==UC(10))  ptr->pos+=1;
        else if (1) {
            it=failobj;
            goto revert1;
        }
        it=rb_obj_clone(s__bs_r_bs_n_bdb2);
        __result=it;;
        it=__result;
        __result_2=it;;

        ;
        goto accept2;
revert1:
        ;
        goto alt1_2;
accept2:
        ;

        ;
        ptr->branches-=2;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        ptr->branches-=1;
        it=rb_obj_clone(s__bs_r_8ce5);
        __result=it;;
        it=__result;
        __result_2=it;;

        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        ptr->branches-=1;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
    VALUE it ,_a=Qnil,_x=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(2);
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,_obj=Qnil,_autovar=Qnil,_rule=Qnil,_args=Qnil,_r=Qnil,_autovar_2=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
    _rule=a0;;
    _obj=a1;;
    _args=a2;;
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
    VALUE it ,_a=Qnil,_b=Qnil,_x=Qnil,_a_2=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(2);
    _a=a0;;
    _b=a1;;
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
    VALUE it ,_a=Qnil,_b=Qnil,_x=Qnil,_a_2=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(2);
    _a=a0;;
    _b=a1;;
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
    VALUE it ,_regex=Qnil,_x=Qnil,_a=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(2);
    _regex=a0;;
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
    VALUE it ,_autovar=Qnil,_exp=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    _exp=a0;;
    VALUE arg0;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=2;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=2;
        it=_exp;
        arg0=it;
        it=rb_funcall(self,sy_apply,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto revert2;
        }
        _autovar_2=it;;

        ;
        goto accept4;
revert2:
        ;
        goto alt2_2;
accept4:
        ;

        ;
        ptr->branches-=2;
        goto accept3;
alt2_2:
        ptr->pos=oldpos2;
        ptr->branches-=1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert3;
        }
        _autovar_2=it;;

        ;
        goto accept5;
revert3:
        ;
        goto alt2_3;
accept5:
        ;

        ;
        ptr->branches-=1;
        goto accept3;
alt2_3:
        ptr->pos=oldpos2;
        ptr->branches-=1;
        if (1) {
            it=failobj;
            goto revert1;
        };
accept3:
        ;
        it=AmethystCore_append(self,_autovar,_autovar_2);
        ;
        goto accept2;
revert1:
        ;
        goto alt1_2;
accept2:
        ;

        ;
        ptr->branches-=2;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        ptr->branches-=1;
        stop1=1;
        ;
        goto accept6;
revert4:
        ;
        goto alt1_3;
accept6:
        ;

        ;
        ptr->branches-=1;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        ptr->branches-=1;
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
    VALUE it ,_l=Qnil,_rev=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(0);
    _l=a0;;
    VALUE arg0;
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
    VALUE it ,_s=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(0);
    _s=a0;;
    VALUE arg0;
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,_autovar=Qnil,__result=Qnil,_autovar_2=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,_s=Qnil,_s_2=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(0);
    _s=a0;;
    VALUE arg0;
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
    VALUE it ,_a=Qnil,_x=Qnil,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(2);
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
    VALUE it ,_x=Qnil,_e=Qnil,_s=Qnil,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(1);
    _e=a0;;
    VALUE arg0;
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
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto revert1;
            }
            cut1=1;
            stop1=1;
            ;
            goto accept2;
revert1:
            ;
            goto alt1_2;
accept2:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            if(cut1) {
                ptr->branches-=0;
                it=failobj;
                goto fail;
            }
            ptr->branches-=1;
            it=Qnil;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert2;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept3;
revert2:
            ;
            goto alt1_3;
accept3:
            ;

            ;
            ptr->branches-=1;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
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
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=_e;
            _s=it;;
            it=_s;
            arg0=it;
            it=AmethystCore__seq(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto revert3;
            }
            cut2=1;
            stop1=1;
            ;
            goto accept5;
revert3:
            ;
            goto alt2_2;
accept5:
            ;

            ;
            ptr->branches-=2;
            goto accept4;
alt2_2:
            ptr->pos=oldpos2;
            if(cut2) {
                ptr->branches-=0;
                it=failobj;
                goto fail;
            }
            ptr->branches-=1;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            it=rb_obj_clone(s__bs__bs__7f81);
            _autovar_2=it;;
            it=AmethystCore_append(self,_x,_autovar_2);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert4;
            }
            _autovar=it;;
            it=AmethystCore_append(self,_x,_autovar);
            ;
            goto accept6;
revert4:
            ;
            goto alt2_3;
accept6:
            ;

            ;
            ptr->branches-=1;
            goto accept4;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept4:
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(0);
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
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(0);
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
    rb_define_method(cls_Amethyst,"else",Amethyst_else,0);
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
