#include "cthyst.h"
#include "memo.c"
VALUE cls_Detect_Size;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Detect_Size_predicate(VALUE self ,VALUE a0);
VALUE Detect_Size_predicate2(VALUE self ,VALUE a0);
VALUE Detect_Size_predicate2(VALUE self ,VALUE);
VALUE switchhash_Detect_Size_1;
VALUE switchhash_Detect_Size_2;
static VALUE sy_Detect_Size_Or_dot_creat_49b2;
static VALUE sy_Detect_Size_Seq_dot_crea_bfbb;
static VALUE sy_Detect_Size__lb_bind_lb_1_rb__2d76;
static VALUE sy_Detect_Size__sh_lowleve_46e8;
static VALUE sy_Detect_Size_bind_lb_1_rb__eq__28f0;
static VALUE sy_Detect_Size_bind_lb_1_rb__gt__f573;
static VALUE sy_Detect_Size_minsize_lp__01f0;
VALUE profile_report_Detect_Size(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Detect_Size_predicate(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_el,_msize,_autovar,_s,_autovar_2,__result,_autovar_3,_s_2,_autovar_4,_autovar_5,__result_2,_autovar_6,_ary,_autovar_7,_autovar_8,_el_2,_autovar_9;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _el=it;;
    bind_aset(bind2,1,_el);
    it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
    _el=bind_aget(bind2,1);;
    _msize=it;;
    it=_el;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Size_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
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
            goto pass1;
        }
success2:
        *ptr=oldpass2;
        it=rb_funcall(self,sy_Detect_Size__sh_lowleve_46e8,1,bind2);
        __result=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=__result;
        _autovar_3=it;;
        break;
    case 1/*Or*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
        _s_2=it;;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_4);
        it=rb_ary_new3(0);
        _autovar_5=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12el=_el;
            VALUE lalt12msize=_msize;
            VALUE lalt12autovar=_autovar;
            VALUE lalt12s=_s;
            VALUE lalt12autovar_3=_autovar_3;
            VALUE lalt12_result_2=__result_2;
            VALUE lalt12autovar_6=_autovar_6;
            it=_s_2;
            _s=it;;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar;
            ptr->len=1;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto pass4;
            }
            _autovar_3=it;;
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
                goto alt1_2;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_3;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar_5,_autovar_6);
            ;
            goto accept1;
alt1_2:
            _el=lalt12el;
            _msize=lalt12msize;
            _autovar=lalt12autovar;
            _s=lalt12s;
            _autovar_3=lalt12autovar_3;
            __result_2=lalt12_result_2;
            _autovar_6=lalt12autovar_6;
            ptr->pos=oldpos1;
            VALUE lalt13el=_el;
            VALUE lalt13msize=_msize;
            VALUE lalt13autovar=_autovar;
            VALUE lalt13s=_s;
            VALUE lalt13autovar_3=_autovar_3;
            VALUE lalt13_result_2=__result_2;
            VALUE lalt13autovar_6=_autovar_6;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _el=lalt13el;
            _msize=lalt13msize;
            _autovar=lalt13autovar;
            _s=lalt13s;
            _autovar_3=lalt13autovar_3;
            __result_2=lalt13_result_2;
            _autovar_6=lalt13autovar_6;
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto pass3;
            };
accept1:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass3;
        }
        it=_autovar_5;
        _ary=it;;

        goto success3;
pass3:
        *ptr=oldpass3;
        if (1) {
            it=failobj;
            goto pass1;
        }
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Or_dot_creat_49b2,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=__result;
        _autovar_3=it;;
        break;
    case 2/*Seq*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
        _s_2=it;;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_7);
        it=rb_ary_new3(0);
        _autovar_8=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22el=_el;
            VALUE lalt22msize=_msize;
            VALUE lalt22autovar=_autovar;
            VALUE lalt22s=_s;
            VALUE lalt22autovar_3=_autovar_3;
            VALUE lalt22s_2=_s_2;
            VALUE lalt22_result_2=__result_2;
            VALUE lalt22el_2=_el_2;
            VALUE lalt22autovar_9=_autovar_9;
            it=_s_2;
            _s=it;;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar=it;;
            cstruct oldpass6=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar;
            ptr->len=1;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto pass6;
            }
            _autovar_3=it;;
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
                goto alt2_2;
            }
success6:
            *ptr=oldpass6;
            it=_autovar_3;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _el_2=it;;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_el_2);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__eq__28f0,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _el_2=bind_aget(bind2,2);;
            it=_el_2;
            _autovar_9=it;;
            it=AmethystCore_append(self,_autovar_8,_autovar_9);
            ;
            goto accept2;
alt2_2:
            _el=lalt22el;
            _msize=lalt22msize;
            _autovar=lalt22autovar;
            _s=lalt22s;
            _autovar_3=lalt22autovar_3;
            _s_2=lalt22s_2;
            __result_2=lalt22_result_2;
            _el_2=lalt22el_2;
            _autovar_9=lalt22autovar_9;
            ptr->pos=oldpos2;
            VALUE lalt23el=_el;
            VALUE lalt23msize=_msize;
            VALUE lalt23autovar=_autovar;
            VALUE lalt23s=_s;
            VALUE lalt23autovar_3=_autovar_3;
            VALUE lalt23s_2=_s_2;
            VALUE lalt23_result_2=__result_2;
            VALUE lalt23el_2=_el_2;
            VALUE lalt23autovar_9=_autovar_9;
            stop2=1;
            ;
            goto accept2;
alt2_3:
            _el=lalt23el;
            _msize=lalt23msize;
            _autovar=lalt23autovar;
            _s=lalt23s;
            _autovar_3=lalt23autovar_3;
            _s_2=lalt23s_2;
            __result_2=lalt23_result_2;
            _el_2=lalt23el_2;
            _autovar_9=lalt23autovar_9;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass5;
            };
accept2:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass5;
        }
        it=_autovar_8;
        _ary=it;;

        goto success5;
pass5:
        *ptr=oldpass5;
        if (1) {
            it=failobj;
            goto pass1;
        }
success5:
        *ptr=oldpass5;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Seq_dot_crea_bfbb,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        it=__result;
        _autovar_3=it;;
        break;
    case 3/*Object*/:
        ;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_msize);
        it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
        _s=bind_aget(bind2,1);;
        _msize=bind_aget(bind2,2);;
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
    it=_autovar_3;
    _el=it;;
    bind_aset(bind2,1,_msize);
    bind_aset(bind2,2,_s);
    bind_aset(bind2,3,_el);
    it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
    _msize=bind_aget(bind2,1);;
    _s=bind_aget(bind2,2);;
    _el=bind_aget(bind2,3);;
    __result_2=it;;

fail:
    return it;
}
VALUE Detect_Size_predicate2(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_autovar,__result,_autovar_2,_autovar_3,_s,_s_2,_el,_msize,_autovar_4,_autovar_5,__result_2,_autovar_6,_ary,_autovar_7,_autovar_8,_el_2,_autovar_9;
    VALUE bind2=bind_new2(16);
    _s=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Detect_Size_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '`':
            ;
        case 'b' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass1;
            }
            break;
        case 'a' ... 'a':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='n'&&ame_curstr2(ptr)[1]=='y'&&ame_curstr2(ptr)[2]=='t'&&ame_curstr2(ptr)[3]=='h'&&ame_curstr2(ptr)[4]=='i'&&ame_curstr2(ptr)[5]=='n'&&ame_curstr2(ptr)[6]=='g')  ptr->pos+=7;
            else if (1) {
                it=failobj;
                goto pass1;
            }
            break;
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
        it=rb_funcall(self,sy_Detect_Size__sh_lowleve_46e8,1,bind2);
        __result=it;;
        break;
    case 1/*Or*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_2);
        it=rb_ary_new3(0);
        _autovar_3=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE lalt12el=_el;
            VALUE lalt12msize=_msize;
            VALUE lalt12autovar_4=_autovar_4;
            VALUE lalt12s_2=_s_2;
            VALUE lalt12autovar_5=_autovar_5;
            VALUE lalt12_result_2=__result_2;
            VALUE lalt12autovar_6=_autovar_6;
            it=_s;
            _s_2=it;;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar_4=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_4;
            ptr->len=1;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto pass3;
            }
            _autovar_5=it;;
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
                goto alt1_2;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_5;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s_2);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s_2=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _autovar_6=it;;
            it=AmethystCore_append(self,_autovar_3,_autovar_6);
            ;
            goto accept1;
alt1_2:
            _el=lalt12el;
            _msize=lalt12msize;
            _autovar_4=lalt12autovar_4;
            _s_2=lalt12s_2;
            _autovar_5=lalt12autovar_5;
            __result_2=lalt12_result_2;
            _autovar_6=lalt12autovar_6;
            ptr->pos=oldpos1;
            VALUE lalt13el=_el;
            VALUE lalt13msize=_msize;
            VALUE lalt13autovar_4=_autovar_4;
            VALUE lalt13s_2=_s_2;
            VALUE lalt13autovar_5=_autovar_5;
            VALUE lalt13_result_2=__result_2;
            VALUE lalt13autovar_6=_autovar_6;
            stop1=1;
            ;
            goto accept1;
alt1_3:
            _el=lalt13el;
            _msize=lalt13msize;
            _autovar_4=lalt13autovar_4;
            _s_2=lalt13s_2;
            _autovar_5=lalt13autovar_5;
            __result_2=lalt13_result_2;
            _autovar_6=lalt13autovar_6;
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto pass2;
            };
accept1:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        it=_autovar_3;
        _ary=it;;

        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto fail;
        }
success2:
        *ptr=oldpass2;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Or_dot_creat_49b2,1,bind2);
        _ary=bind_aget(bind2,1);;
        __result=it;;
        break;
    case 2/*Seq*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_7=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_7);
        it=rb_ary_new3(0);
        _autovar_8=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE lalt22el=_el;
            VALUE lalt22msize=_msize;
            VALUE lalt22autovar_4=_autovar_4;
            VALUE lalt22s_2=_s_2;
            VALUE lalt22autovar_5=_autovar_5;
            VALUE lalt22s=_s;
            VALUE lalt22_result_2=__result_2;
            VALUE lalt22el_2=_el_2;
            VALUE lalt22autovar_9=_autovar_9;
            it=_s;
            _s_2=it;;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            _el=it;;
            bind_aset(bind2,1,_el);
            it=rb_funcall(self,sy_Detect_Size_minsize_lp__01f0,1,bind2);
            _el=bind_aget(bind2,1);;
            _msize=it;;
            it=_el;
            _autovar_4=it;;
            cstruct oldpass5=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=failobj;
            ptr->ary=alloca(sizeof(VALUE));
            ptr->ary[0]=_autovar_4;
            ptr->len=1;
            bind_aset(bind2,1,_s_2);
            bind_aset(bind2,2,_msize);
            it=rb_funcall(self,sy_Detect_Size__lb_bind_lb_1_rb__2d76,1,bind2);
            _s_2=bind_aget(bind2,1);;
            _msize=bind_aget(bind2,2);;
            arg0=it;
            it=Detect_Size_predicate2(self ,arg0);
            if (it==failobj) {
                it=failobj;
                goto pass5;
            }
            _autovar_5=it;;
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
                goto alt2_2;
            }
success5:
            *ptr=oldpass5;
            it=_autovar_5;
            _el=it;;
            bind_aset(bind2,1,_msize);
            bind_aset(bind2,2,_s_2);
            bind_aset(bind2,3,_el);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__gt__f573,1,bind2);
            _msize=bind_aget(bind2,1);;
            _s_2=bind_aget(bind2,2);;
            _el=bind_aget(bind2,3);;
            __result_2=it;;
            it=__result_2;
            _el_2=it;;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_el_2);
            it=rb_funcall(self,sy_Detect_Size_bind_lb_1_rb__eq__28f0,1,bind2);
            _s=bind_aget(bind2,1);;
            _el_2=bind_aget(bind2,2);;
            it=_el_2;
            _autovar_9=it;;
            it=AmethystCore_append(self,_autovar_8,_autovar_9);
            ;
            goto accept2;
alt2_2:
            _el=lalt22el;
            _msize=lalt22msize;
            _autovar_4=lalt22autovar_4;
            _s_2=lalt22s_2;
            _autovar_5=lalt22autovar_5;
            _s=lalt22s;
            __result_2=lalt22_result_2;
            _el_2=lalt22el_2;
            _autovar_9=lalt22autovar_9;
            ptr->pos=oldpos2;
            VALUE lalt23el=_el;
            VALUE lalt23msize=_msize;
            VALUE lalt23autovar_4=_autovar_4;
            VALUE lalt23s_2=_s_2;
            VALUE lalt23autovar_5=_autovar_5;
            VALUE lalt23s=_s;
            VALUE lalt23_result_2=__result_2;
            VALUE lalt23el_2=_el_2;
            VALUE lalt23autovar_9=_autovar_9;
            stop2=1;
            ;
            goto accept2;
alt2_3:
            _el=lalt23el;
            _msize=lalt23msize;
            _autovar_4=lalt23autovar_4;
            _s_2=lalt23s_2;
            _autovar_5=lalt23autovar_5;
            _s=lalt23s;
            __result_2=lalt23_result_2;
            _el_2=lalt23el_2;
            _autovar_9=lalt23autovar_9;
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass4;
            };
accept2:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass4;
        }
        it=_autovar_8;
        _ary=it;;

        goto success4;
pass4:
        *ptr=oldpass4;
        if (1) {
            it=failobj;
            goto fail;
        }
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_ary);
        it=rb_funcall(self,sy_Detect_Size_Seq_dot_crea_bfbb,1,bind2);
        _ary=bind_aget(bind2,1);;
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
void Init_Detect_Size_c() {
    cls_Detect_Size=rb_define_class("Detect_Size",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Detect_Size,"profile_report",profile_report_Detect_Size,0);
    switchhash_Detect_Size_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Size_1);;
    switchhash_Detect_Size_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Or\nnext h[k]=2 if k<=Seq\nnext h[k]=3 if k<=Object\n}");
    rb_global_variable(&switchhash_Detect_Size_2);;
    sy_Detect_Size_Or_dot_creat_49b2=rb_intern("Detect_Size_Or_dot_creat_49b2");
    sy_Detect_Size_Seq_dot_crea_bfbb=rb_intern("Detect_Size_Seq_dot_crea_bfbb");
    sy_Detect_Size__lb_bind_lb_1_rb__2d76=rb_intern("Detect_Size__lb_bind_lb_1_rb__2d76");
    sy_Detect_Size__sh_lowleve_46e8=rb_intern("Detect_Size__sh_lowleve_46e8");
    sy_Detect_Size_bind_lb_1_rb__eq__28f0=rb_intern("Detect_Size_bind_lb_1_rb__eq__28f0");
    sy_Detect_Size_bind_lb_1_rb__gt__f573=rb_intern("Detect_Size_bind_lb_1_rb__gt__f573");
    sy_Detect_Size_minsize_lp__01f0=rb_intern("Detect_Size_minsize_lp__01f0");
    rb_define_method(cls_Detect_Size,"predicate",Detect_Size_predicate,1);
    rb_define_method(cls_Detect_Size,"predicate2",Detect_Size_predicate2,1);
}
