#include "cthyst.h"
#include "memo.c"
VALUE cls_Resolve_Calls;
VALUE AmethystCore_anything(VALUE self );
VALUE Amethyst_spaces(VALUE self );
VALUE Resolve_Calls_root(VALUE self );
VALUE Resolve_Calls_traverse(VALUE self );
VALUE Resolve_Calls_traverse_item(VALUE self );
VALUE Resolve_Calls_visit(VALUE self );
VALUE switchhash_Resolve_Calls_1;
VALUE switchhash_Resolve_Calls_2;
VALUE switchhash_Resolve_Calls_3;
VALUE switchhash_Resolve_Calls_4;
VALUE switchhash_Resolve_Calls_5;
VALUE switchhash_Resolve_Calls_6;
VALUE switchhash_Resolve_Calls_7;
static VALUE sy_Resolve_Calls_Apply_lb_bi_2f93;
static VALUE sy_Resolve_Calls_Apply_lb_bi_49fd;
static VALUE sy_Resolve_Calls__at__contex_5f56;
static VALUE sy_Resolve_Calls__at__contex_cdb3;
static VALUE sy_Resolve_Calls__at__contex_d6d5;
static VALUE sy_Resolve_Calls__lp_src_dot_cla_2024;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lb__7c6b;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lb__9d9a;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__lt__7b20;
static VALUE sy_Resolve_Calls_bind_lb_1_rb__sp__6af0;
static VALUE sy_Resolve_Calls_if_sp_bind_lb__1bed;
static VALUE sy_Resolve_Calls_src_dot_name_80f3;
static VALUE sy_Resolve_Calls_super_na_296f;
VALUE profile_report_Resolve_Calls(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Resolve_Calls_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,__result=Qnil,_autovar_7=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Resolve_Calls__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _autovar_3=it;;
    bind_aset(bind2,1,_autovar_2);
    bind_aset(bind2,2,_autovar_3);
    it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lb__7c6b,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    _autovar_3=bind_aget(bind2,2);;
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        break;
    case 1/*Object*/:
        ;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_4);
    it=rb_funcall(self,sy_Resolve_Calls_src_dot_name_80f3,1,bind2);
    _autovar_5=it;;
    bind_aset(bind2,1,_autovar_2);
    bind_aset(bind2,2,_autovar_5);
    it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lb__9d9a,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    _autovar_5=bind_aget(bind2,2);;
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Resolve_Calls__at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=Resolve_Calls_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _autovar_6=it;;
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
    it=_autovar_6;
    __result=it;;
    _autovar_7=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_7);
    it=rb_funcall(self,sy_Resolve_Calls__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_7=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Resolve_Calls_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Resolve_Calls__lp_src_dot_cla_2024,1,bind2);
    _ivars=it;;
    it=_ivars;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _autovar_2=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_2);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=2;
        it=Resolve_Calls_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
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
    goto success1;
pass1:
    *ptr=oldpass1;
    if (1) {
        it=failobj;
        goto fail;
    }
success1:
    *ptr=oldpass1;
    bind_aset(bind2,1,_ivars);
    bind_aset(bind2,2,_nvars);
    it=rb_funcall(self,sy_Resolve_Calls_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Resolve_Calls_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=Resolve_Calls_visit(self );
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
            ptr->branches-=3;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Resolve_Calls_traverse(self );
            if (it==failobj) {
                it=failobj;
                goto pass1;
            }
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
                goto revert2;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept3;
revert2:
            ;
            goto alt1_3;
accept3:
            ;

            ;
            ptr->branches-=2;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert3;
            }
            __result=it;;

            ;
            goto accept4;
revert3:
            ;
            goto alt1_4;
accept4:
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
        case 1/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Resolve_Calls_traverse(self );
            if (it==failobj) {
                it=failobj;
                goto pass2;
            }
            _autovar_2=it;;
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
                goto revert4;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept6;
revert4:
            ;
            goto alt2_2;
accept6:
            ;

            ;
            ptr->branches-=2;
            goto accept5;
alt2_2:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert5;
            }
            __result=it;;

            ;
            goto accept7;
revert5:
            ;
            goto alt2_3;
accept7:
            ;

            ;
            ptr->branches-=1;
            goto accept5;
alt2_3:
            ptr->pos=oldpos2;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept5:
            ;
            break;
        }
        break;
    case 1/*Array*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=Resolve_Calls_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            __result=it;;

            ;
            goto accept9;
revert6:
            ;
            goto alt3_2;
accept9:
            ;

            ;
            ptr->branches-=3;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos4=ptr->pos;
                int cut4=0;
alt4_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=2;
                it=Resolve_Calls_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept12;
revert8:
                ;
                goto alt4_2;
accept12:
                ;

                ;
                ptr->branches-=2;
                goto accept11;
alt4_2:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                stop1=1;
                ;
                goto accept13;
revert9:
                ;
                goto alt4_3;
accept13:
                ;

                ;
                ptr->branches-=1;
                goto accept11;
alt4_3:
                ptr->pos=oldpos4;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass3;
                };
accept11:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass3;
            }
            it=_ar;
            _autovar_4=it;;

            goto success3;
pass3:
            *ptr=oldpass3;
            if (1) {
                it=failobj;
                goto revert7;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept10;
revert7:
            ;
            goto alt3_3;
accept10:
            ;

            ;
            ptr->branches-=2;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert10;
            }
            __result=it;;

            ;
            goto accept14;
revert10:
            ;
            goto alt3_4;
accept14:
            ;

            ;
            ptr->branches-=1;
            goto accept8;
alt3_4:
            ptr->pos=oldpos3;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept8:
            ;
            break;
        case 1/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            it=rb_ary_new3(0);
            _ar=it;;
            int stop2=0;
            while(!stop2) {
                int oldpos6=ptr->pos;
                int cut6=0;
alt6_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=2;
                it=Resolve_Calls_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert12;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Resolve_Calls_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept18;
revert12:
                ;
                goto alt6_2;
accept18:
                ;

                ;
                ptr->branches-=2;
                goto accept17;
alt6_2:
                ptr->pos=oldpos6;
                ptr->branches-=1;
                stop2=1;
                ;
                goto accept19;
revert13:
                ;
                goto alt6_3;
accept19:
                ;

                ;
                ptr->branches-=1;
                goto accept17;
alt6_3:
                ptr->pos=oldpos6;
                ptr->branches-=1;
                if (1) {
                    it=failobj;
                    goto pass4;
                };
accept17:
                ;
            }
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass4;
            }
            it=_ar;
            _autovar_4=it;;

            goto success4;
pass4:
            *ptr=oldpass4;
            if (1) {
                it=failobj;
                goto revert11;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept16;
revert11:
            ;
            goto alt5_2;
accept16:
            ;

            ;
            ptr->branches-=2;
            goto accept15;
alt5_2:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert14;
            }
            __result=it;;

            ;
            goto accept20;
revert14:
            ;
            goto alt5_3;
accept20:
            ;

            ;
            ptr->branches-=1;
            goto accept15;
alt5_3:
            ptr->pos=oldpos5;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept15:
            ;
            break;
        }
        break;
    case 2/*Object*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=Resolve_Calls_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert15;
            }
            __result=it;;

            ;
            goto accept22;
revert15:
            ;
            goto alt7_2;
accept22:
            ;

            ;
            ptr->branches-=2;
            goto accept21;
alt7_2:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert16;
            }
            __result=it;;

            ;
            goto accept23;
revert16:
            ;
            goto alt7_3;
accept23:
            ;

            ;
            ptr->branches-=1;
            goto accept21;
alt7_3:
            ptr->pos=oldpos7;
            ptr->branches-=1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept21:
            ;
            break;
        case 1/*Object*/:
            ;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto fail;
            }
            __result=it;;
            break;
        }
        break;
    }
fail:
    return it;
}
VALUE Resolve_Calls_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,__result=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_name=Qnil,_autovar_11=Qnil,_autovar_12=Qnil,_args=Qnil,_autovar_13=Qnil,_autovar_14=Qnil,_autovar_15=Qnil,_autovar_16=Qnil,_autovar_17=Qnil;
    VALUE bind2=bind_new2(3);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        it=_autovar_3;
        _autovar_4=it;;
        it=_autovar_4;
        _autovar_5=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        if(!ptr->branches)ptr->discard=ptr->pos;
        ptr->branches+=3;
        it=_autovar_5;
        _autovar_6=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_6);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _autovar_7=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_7);
        it=Amethyst_spaces(self );
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... 'r':
            ;
        case 't' ... UC(255):
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
        case 's' ... 's':
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            if (ame_curstr2(ptr)[0]=='u'&&ame_curstr2(ptr)[1]=='p'&&ame_curstr2(ptr)[2]=='e'&&ame_curstr2(ptr)[3]=='r')  ptr->pos+=4;
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
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls_super_na_296f,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _autovar_8=it;;
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
            goto revert1;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_8;
        __result=it;;
        _autovar_9=it;;

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
        it=_autovar_5;
        _autovar_10=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_10);
        switch(FIX2LONG(rb_hash_aref(switchhash_Resolve_Calls_3,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Array*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _name=it;;
            it=rb_ary_new3(0);
            _autovar_11=it;;
            int stop1=0;
            while(!stop1) {
                int oldpos2=ptr->pos;
                int cut2=0;
alt2_1:
                if(!ptr->branches)ptr->discard=ptr->pos;
                ptr->branches+=2;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert3;
                }
                _autovar_12=it;;
                it=AmethystCore_append(self,_autovar_11,_autovar_12);
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
                ptr->branches-=1;
                stop1=1;
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
                    goto pass3;
                };
accept4:
                ;
            }
            it=_autovar_11;
            _args=it;;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_args);
            it=rb_funcall(self,sy_Resolve_Calls_Apply_lb_bi_2f93,1,bind2);
            _name=bind_aget(bind2,1);;
            _args=bind_aget(bind2,2);;
            _autovar_13=it;;
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
            goto revert2;
        }
success3:
        *ptr=oldpass3;
        it=_autovar_13;
        __result=it;;
        _autovar_9=it;;

        ;
        goto accept3;
revert2:
        ;
        goto alt1_3;
accept3:
        ;

        ;
        ptr->branches-=2;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        ptr->branches-=1;
        it=_autovar_5;
        _autovar_14=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_14);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass4;
        }
        _name=it;;
        it=rb_ary_new3(0);
        _autovar_15=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            _autovar_16=it;;
            it=AmethystCore_append(self,_autovar_15,_autovar_16);
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
            stop2=1;
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
                goto pass4;
            };
accept8:
            ;
        }
        it=_autovar_15;
        _args=it;;
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_args);
        bind_aset(bind2,3,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls_Apply_lb_bi_49fd,1,bind2);
        _name=bind_aget(bind2,1);;
        _args=bind_aget(bind2,2);;
        _autovar_2=bind_aget(bind2,3);;
        _autovar_17=it;;
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
            goto revert5;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_17;
        __result=it;;
        _autovar_9=it;;

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
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_9);
        it=rb_funcall(self,sy_Resolve_Calls__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_9=bind_aget(bind2,2);;
        break;
    case 1/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Resolve_Calls__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
void Init_Resolve_Calls_c() {
    cls_Resolve_Calls=rb_define_class("Resolve_Calls",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Resolve_Calls,"profile_report",profile_report_Resolve_Calls,0);
    switchhash_Resolve_Calls_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_1);;
    switchhash_Resolve_Calls_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_2);;
    switchhash_Resolve_Calls_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Array\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_3);;
    switchhash_Resolve_Calls_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_4);;
    switchhash_Resolve_Calls_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_5);;
    switchhash_Resolve_Calls_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_6);;
    switchhash_Resolve_Calls_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Resolve_Calls_7);;
    sy_Resolve_Calls_Apply_lb_bi_2f93=rb_intern("Resolve_Calls_Apply_lb_bi_2f93");
    sy_Resolve_Calls_Apply_lb_bi_49fd=rb_intern("Resolve_Calls_Apply_lb_bi_49fd");
    sy_Resolve_Calls__at__contex_5f56=rb_intern("Resolve_Calls__at__contex_5f56");
    sy_Resolve_Calls__at__contex_cdb3=rb_intern("Resolve_Calls__at__contex_cdb3");
    sy_Resolve_Calls__at__contex_d6d5=rb_intern("Resolve_Calls__at__contex_d6d5");
    sy_Resolve_Calls__lp_src_dot_cla_2024=rb_intern("Resolve_Calls__lp_src_dot_cla_2024");
    sy_Resolve_Calls_bind_lb_1_rb__lb__7c6b=rb_intern("Resolve_Calls_bind_lb_1_rb__lb__7c6b");
    sy_Resolve_Calls_bind_lb_1_rb__lb__9d9a=rb_intern("Resolve_Calls_bind_lb_1_rb__lb__9d9a");
    sy_Resolve_Calls_bind_lb_1_rb__lt__7b20=rb_intern("Resolve_Calls_bind_lb_1_rb__lt__7b20");
    sy_Resolve_Calls_bind_lb_1_rb__sp__6af0=rb_intern("Resolve_Calls_bind_lb_1_rb__sp__6af0");
    sy_Resolve_Calls_if_sp_bind_lb__1bed=rb_intern("Resolve_Calls_if_sp_bind_lb__1bed");
    sy_Resolve_Calls_src_dot_name_80f3=rb_intern("Resolve_Calls_src_dot_name_80f3");
    sy_Resolve_Calls_super_na_296f=rb_intern("Resolve_Calls_super_na_296f");
    rb_define_method(cls_Resolve_Calls,"root",Resolve_Calls_root,0);
    rb_define_method(cls_Resolve_Calls,"traverse",Resolve_Calls_traverse,0);
    rb_define_method(cls_Resolve_Calls,"traverse_item",Resolve_Calls_traverse_item,0);
    rb_define_method(cls_Resolve_Calls,"visit",Resolve_Calls_visit,0);
}
