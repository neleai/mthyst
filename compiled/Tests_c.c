#include "cthyst.h"
#include "memo.c"
VALUE cls_Tests;
VALUE Amethyst_spaces(VALUE self );
VALUE Tests_abc(VALUE self );
VALUE Tests_context(VALUE self );
VALUE Tests_de(VALUE self );
VALUE Tests_foo(VALUE self );
VALUE Tests_gh(VALUE self );
VALUE Tests_s2(VALUE self );
VALUE Tests_sw(VALUE self );
VALUE Tests_test(VALUE self );
static VALUE i_1;
static VALUE i_3;
static VALUE i_42;
static VALUE s_c_4a8a;
static VALUE s_d_8277;
static VALUE s_g_b2f5;
static VALUE sy_Tests_;
static VALUE sy_Tests__at__contex_5f56;
static VALUE sy_Tests__at__contex_cdb3;
static VALUE sy_Tests__d41d;
static VALUE sy_Tests_bind_lb_1_rb__lb__6e1f;
static VALUE sy_Tests_bind_lb_1_rb__pl__0a71;
static VALUE sy_Tests_bind_lb_1_rb__pl__61a1;
static VALUE sy_Tests_foo_pl_bar_ac93;
static VALUE sy_bar;
VALUE profile_report_Tests(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Tests_abc(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... UC(31):
        ;
    case '!' ... '`':
        ;
    case 'd' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case ' ' ... ' ':
        ;
    case 'a' ... 'c':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Tests_context(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,__result=Qnil,_autovar_3=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Tests__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Tests_bind_lb_1_rb__lb__6e1f,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    __result=it;;
    _autovar_3=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_3);
    it=rb_funcall(self,sy_Tests__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_3=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Tests_de(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_foo=Qnil,_autovar_2=Qnil,__result=Qnil,_autovar_3=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... UC(31):
        ;
    case '!' ... '`':
        ;
    case 'f' ... UC(255):
        ;
        it=i_1;
        _autovar=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=_autovar;
        _foo=it;;
        bind_aset(bind2,1,_foo);
        it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__61a1,1,bind2);
        _foo=bind_aget(bind2,1);;
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
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=_autovar;
        _foo=it;;
        bind_aset(bind2,1,_foo);
        it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__0a71,1,bind2);
        _foo=bind_aget(bind2,1);;
        if (1) {
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
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case 'd' ... 'e':
        ;
        it=i_1;
        _autovar_2=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=_autovar_2;
        _foo=it;;
        bind_aset(bind2,1,_foo);
        it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__61a1,1,bind2);
        _foo=bind_aget(bind2,1);;
        if (1) {
            it=failobj;
            goto revert3;
        }
        ;
        goto accept5;
revert3:
        ;
        goto alt2_2;
accept5:
        ;

        ;
        goto accept4;
alt2_2:
        ptr->pos=oldpos2;
        it=_autovar_2;
        _foo=it;;
        bind_aset(bind2,1,_foo);
        it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__0a71,1,bind2);
        _foo=bind_aget(bind2,1);;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;

        ;
        goto accept6;
revert4:
        ;
        goto alt2_3;
accept6:
        ;

        ;
        goto accept4;
alt2_3:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
        ;
        break;
    case ' ' ... ' ':
        ;
    case 'a' ... 'c':
        ;
        it=i_1;
        _autovar_3=it;;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=_autovar_3;
        _foo=it;;
        bind_aset(bind2,1,_foo);
        it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__61a1,1,bind2);
        _foo=bind_aget(bind2,1);;
        it=Tests_abc(self );
        if (it==failobj) {
            it=failobj;
            goto revert5;
        }
        __result=it;;

        ;
        goto accept8;
revert5:
        ;
        goto alt3_2;
accept8:
        ;

        ;
        goto accept7;
alt3_2:
        ptr->pos=oldpos3;
        it=_autovar_3;
        _foo=it;;
        bind_aset(bind2,1,_foo);
        it=rb_funcall(self,sy_Tests_bind_lb_1_rb__pl__0a71,1,bind2);
        _foo=bind_aget(bind2,1);;
        if (1) {
            it=failobj;
            goto revert6;
        }
        ;
        goto accept9;
revert6:
        ;
        goto alt3_3;
accept9:
        ;

        ;
        goto accept7;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto fail;
        };
accept7:
        ;
        break;
    }
fail:
    return it;
}
VALUE Tests_foo(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_bar,0);
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    it=rb_funcall(self,sy_Tests_foo_pl_bar_ac93,1,bind2);
    __result=it;;
    int stop1=0;
    while(!stop1) {
        it=rb_funcall(self,sy_Tests__d41d,1,bind2);
        it=__result;
        __result=it;;
    }
    bind_aset(bind2,1,__result);
    it=rb_funcall(self,sy_Tests_,1,bind2);
    __result=bind_aget(bind2,1);;
fail:
    return it;
}
VALUE Tests_gh(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=Tests_foo(self );
    if (it==failobj) {
        it=failobj;
        goto revert1;
    }
    __result=it;;

    ;
    goto accept2;
revert1:
    ;
    goto alt1_2;
accept2:
    ;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    cut1=1;
    it=i_42;
    __result=it;;

    ;
    goto accept3;
revert2:
    ;
    goto alt1_3;
accept3:
    ;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    if (cut1) {
        it=failobj;
        goto fail;
    }
    if (1) {
        it=failobj;
        goto fail;
    };
accept1:
    ;

fail:
    return it;
}
VALUE Tests_s2(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case 'c' ... 'c':
        ;
    case 'h' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'd' ... 'f':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=i_3;
        __result=it;;
        break;
    case 'g' ... 'g':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s_g_b2f5);
        __result_2=it;;
        it=__result_2;
        __result=it;;
        break;
    case 'a' ... 'b':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Tests_sw(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,__result_2=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case 'c' ... 'c':
        ;
    case 'e' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    case 'd' ... 'd':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        it=rb_obj_clone(s_d_8277);
        __result=it;;
        it=__result;
        __result_2=it;;
        break;
    case 'a' ... 'b':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'b':
            ;
        case 'd' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto fail;
            }
            break;
        case 'c' ... 'c':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            break;
        }
        it=rb_obj_clone(s_c_4a8a);
        __result=it;;
        it=__result;
        __result_2=it;;
        break;
    }
fail:
    return it;
}
VALUE Tests_test(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=Amethyst_spaces(self );
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '`':
        ;
    case 'b' ... UC(255):
        ;
        if (1) {
            it=failobj;
            goto revert1;
        }
        break;
    case 'a' ... 'a':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        break;
    }
    it=i_1;
    __result=it;;

    ;
    goto accept2;
revert1:
    ;
    goto alt1_2;
accept2:
    ;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=i_42;
    __result=it;;

    ;
    goto accept3;
revert2:
    ;
    goto alt1_3;
accept3:
    ;

    ;
    goto accept1;
alt1_3:
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
void Init_Tests_c() {
    cls_Tests=rb_define_class("Tests",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    i_1=rb_funcall(rb_str_new2("1"),rb_intern("to_i"),0);
    rb_global_variable(&i_1);
    i_3=rb_funcall(rb_str_new2("3"),rb_intern("to_i"),0);
    rb_global_variable(&i_3);
    i_42=rb_funcall(rb_str_new2("42"),rb_intern("to_i"),0);
    rb_global_variable(&i_42);
    rb_define_method(cls_Tests,"profile_report",profile_report_Tests,0);
    s_c_4a8a=rb_str_new2("c");
    rb_global_variable(&s_c_4a8a);
    s_d_8277=rb_str_new2("d");
    rb_global_variable(&s_d_8277);
    s_g_b2f5=rb_str_new2("g");
    rb_global_variable(&s_g_b2f5);
    sy_Tests_=rb_intern("Tests_");
    sy_Tests__at__contex_5f56=rb_intern("Tests__at__contex_5f56");
    sy_Tests__at__contex_cdb3=rb_intern("Tests__at__contex_cdb3");
    sy_Tests__d41d=rb_intern("Tests__d41d");
    sy_Tests_bind_lb_1_rb__lb__6e1f=rb_intern("Tests_bind_lb_1_rb__lb__6e1f");
    sy_Tests_bind_lb_1_rb__pl__0a71=rb_intern("Tests_bind_lb_1_rb__pl__0a71");
    sy_Tests_bind_lb_1_rb__pl__61a1=rb_intern("Tests_bind_lb_1_rb__pl__61a1");
    sy_Tests_foo_pl_bar_ac93=rb_intern("Tests_foo_pl_bar_ac93");
    sy_bar=rb_intern("bar");
    rb_define_method(cls_Tests,"abc",Tests_abc,0);
    rb_define_method(cls_Tests,"context",Tests_context,0);
    rb_define_method(cls_Tests,"de",Tests_de,0);
    rb_define_method(cls_Tests,"foo",Tests_foo,0);
    rb_define_method(cls_Tests,"gh",Tests_gh,0);
    rb_define_method(cls_Tests,"s2",Tests_s2,0);
    rb_define_method(cls_Tests,"sw",Tests_sw,0);
    rb_define_method(cls_Tests,"test",Tests_test,0);
}
