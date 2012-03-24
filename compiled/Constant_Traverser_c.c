#include "cthyst.h"
#include "memo.c"
VALUE cls_Constant_Traverser;
VALUE AmethystCore_anything(VALUE self );
VALUE Constant_Traverser_consts(VALUE self );
VALUE Constant_Traverser_root(VALUE self );
VALUE Constant_Traverser_traverse(VALUE self );
VALUE Constant_Traverser_traverse_item(VALUE self );
VALUE Constant_Traverser_visit(VALUE self );
VALUE switchhash_Constant_Traverser_1;
VALUE switchhash_Constant_Traverser_2;
VALUE switchhash_Constant_Traverser_3;
VALUE switchhash_Constant_Traverser_4;
VALUE switchhash_Constant_Traverser_5;
VALUE switchhash_Constant_Traverser_6;
VALUE switchhash_Constant_Traverser_7;
static VALUE sy_Constant_Traverser_Bind_lb_src_66c4;
static VALUE sy_Constant_Traverser_Bind_lb_src_91ed;
static VALUE sy_Constant_Traverser_Seq_lb_bind_95dc;
static VALUE sy_Constant_Traverser__at__contex_5f56;
static VALUE sy_Constant_Traverser__at__contex_cdb3;
static VALUE sy_Constant_Traverser__at__contex_d6d5;
static VALUE sy_Constant_Traverser__lp__lp_bind_lb_1_1e7f;
static VALUE sy_Constant_Traverser__lp__lp_bind_lb_1_42f7;
static VALUE sy_Constant_Traverser__lp_src_dot_cla_2024;
static VALUE sy_Constant_Traverser_bind_lb_1_rb__dot__f702;
static VALUE sy_Constant_Traverser_bind_lb_1_rb__lb__a394;
static VALUE sy_Constant_Traverser_bind_lb_1_rb__lb__cf87;
static VALUE sy_Constant_Traverser_bind_lb_1_rb__lt__7b20;
static VALUE sy_Constant_Traverser_bind_lb_1_rb__sp__6af0;
static VALUE sy_Constant_Traverser_if_sp_bind_lb__1bed;
static VALUE sy_Constant_Traverser_src_25d9;
static VALUE sy_Constant_Traverser_src_dot_cfg_eq__15aa;
static VALUE sy_Constant_Traverser_src_dot_dup_d768;
VALUE profile_report_Constant_Traverser(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Constant_Traverser_consts(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_ary=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,__result=Qnil,_autovar_5=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Constant_Traverser__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_ary_new3(0);
    _ary=it;;
    int stop1=0;
    while(!stop1) {
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Local*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_3);
            ptr->pos=ptr->len;
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Constant_Traverser__lp__lp_bind_lb_1_1e7f,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto pass1;
            };
            bind_aset(bind2,1,_autovar_2);
            it=rb_funcall(self,sy_Constant_Traverser_Bind_lb_src_91ed,1,bind2);
            _autovar_2=bind_aget(bind2,1);;
            _autovar_4=it;;
            it=AmethystCore_append(self,_ary,_autovar_4);
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
            ptr->branches-=2;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            ptr->branches-=1;
            stop1=1;
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
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto revert4;
            }
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
            stop1=1;
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
    }
    it=_ary;
    __result=it;;
    _autovar_5=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_5);
    it=rb_funcall(self,sy_Constant_Traverser__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_5=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Constant_Traverser_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_it=Qnil,_autovar_6=Qnil,__result=Qnil,_autovar_7=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Constant_Traverser__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_funcall(self,sy_Constant_Traverser_src_dot_dup_d768,1,bind2);
    _autovar_3=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_3;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Object*/:
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
    it=_autovar_4;
    _autovar_5=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ame_setsrc2(self,_autovar_5);
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__lb__cf87,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_Constant_Traverser_src_dot_cfg_eq__15aa,1,bind2);
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Constant_Traverser__at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=Constant_Traverser_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto pass2;
    }
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__dot__f702,1,bind2);
    _it=bind_aget(bind2,1);;
    _autovar_6=it;;
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
        goto fail;
    }
success2:
    *ptr=oldpass2;
    it=_autovar_6;
    __result=it;;
    _autovar_7=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_7);
    it=rb_funcall(self,sy_Constant_Traverser__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_7=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Constant_Traverser_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Constant_Traverser__lp_src_dot_cla_2024,1,bind2);
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
        it=Constant_Traverser_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy_Constant_Traverser_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Constant_Traverser_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Bind*/:
        case 2/*Local*/:
        case 3/*Result*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=Constant_Traverser_visit(self );
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
            it=Constant_Traverser_traverse(self );
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
        case 4/*Object*/:
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
            it=Constant_Traverser_traverse(self );
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Bind*/:
        case 2/*Local*/:
        case 3/*Result*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=3;
            it=Constant_Traverser_visit(self );
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
                it=Constant_Traverser_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__lt__7b20,1,bind2);
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
        case 4/*Object*/:
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
                it=Constant_Traverser_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert12;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__lt__7b20,1,bind2);
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_7,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Act*/:
        case 1/*Bind*/:
        case 2/*Local*/:
        case 3/*Result*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            if(!ptr->branches)ptr->discard=ptr->pos;
            ptr->branches+=2;
            it=Constant_Traverser_visit(self );
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
        case 4/*Object*/:
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
VALUE Constant_Traverser_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_a=Qnil,_autovar_4=Qnil,__result=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,_expr=Qnil,_autovar_7=Qnil,_autovar_8=Qnil,_autovar_9=Qnil,_autovar_10=Qnil,_autovar_11=Qnil;
    VALUE bind2=bind_new2(2);
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_3);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Constant_Traverser_consts(self );
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy_Constant_Traverser_Seq_lb_bind_95dc,1,bind2);
        _a=bind_aget(bind2,1);;
        _autovar_4=it;;
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
        it=_autovar_4;
        __result=it;;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_5);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_5=bind_aget(bind2,2);;
        break;
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_6=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_6);
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Constant_Traverser_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy_Constant_Traverser_Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_7=it;;
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
            goto fail;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_7;
        __result=it;;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_5);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_5=bind_aget(bind2,2);;
        break;
    case 2/*Local*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_8=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_8);
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__lp__lp_bind_lb_1_42f7,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass3;
        };
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser_bind_lb_1_rb__lb__a394,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _autovar_9=it;;
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
            goto fail;
        }
success3:
        *ptr=oldpass3;
        it=_autovar_9;
        __result=it;;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_5);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_5=bind_aget(bind2,2);;
        break;
    case 3/*Result*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_10=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_10);
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy_Constant_Traverser_src_25d9,1,bind2);
        _autovar_11=it;;
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
            goto fail;
        }
success4:
        *ptr=oldpass4;
        it=_autovar_11;
        __result=it;;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_5);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_5=bind_aget(bind2,2);;
        break;
    case 4/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Constant_Traverser__at__contex_5f56,1,bind2);
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
void Init_Constant_Traverser_c() {
    cls_Constant_Traverser=rb_define_class("Constant_Traverser",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Constant_Traverser,"profile_report",profile_report_Constant_Traverser,0);
    switchhash_Constant_Traverser_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_1);;
    switchhash_Constant_Traverser_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Local\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_2);;
    switchhash_Constant_Traverser_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Result\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_3);;
    switchhash_Constant_Traverser_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_4);;
    switchhash_Constant_Traverser_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Result\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_5);;
    switchhash_Constant_Traverser_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Result\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_6);;
    switchhash_Constant_Traverser_7=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=Local\nnext h[k]=3 if k<=Result\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Traverser_7);;
    sy_Constant_Traverser_Bind_lb_src_66c4=rb_intern("Constant_Traverser_Bind_lb_src_66c4");
    sy_Constant_Traverser_Bind_lb_src_91ed=rb_intern("Constant_Traverser_Bind_lb_src_91ed");
    sy_Constant_Traverser_Seq_lb_bind_95dc=rb_intern("Constant_Traverser_Seq_lb_bind_95dc");
    sy_Constant_Traverser__at__contex_5f56=rb_intern("Constant_Traverser__at__contex_5f56");
    sy_Constant_Traverser__at__contex_cdb3=rb_intern("Constant_Traverser__at__contex_cdb3");
    sy_Constant_Traverser__at__contex_d6d5=rb_intern("Constant_Traverser__at__contex_d6d5");
    sy_Constant_Traverser__lp__lp_bind_lb_1_1e7f=rb_intern("Constant_Traverser__lp__lp_bind_lb_1_1e7f");
    sy_Constant_Traverser__lp__lp_bind_lb_1_42f7=rb_intern("Constant_Traverser__lp__lp_bind_lb_1_42f7");
    sy_Constant_Traverser__lp_src_dot_cla_2024=rb_intern("Constant_Traverser__lp_src_dot_cla_2024");
    sy_Constant_Traverser_bind_lb_1_rb__dot__f702=rb_intern("Constant_Traverser_bind_lb_1_rb__dot__f702");
    sy_Constant_Traverser_bind_lb_1_rb__lb__a394=rb_intern("Constant_Traverser_bind_lb_1_rb__lb__a394");
    sy_Constant_Traverser_bind_lb_1_rb__lb__cf87=rb_intern("Constant_Traverser_bind_lb_1_rb__lb__cf87");
    sy_Constant_Traverser_bind_lb_1_rb__lt__7b20=rb_intern("Constant_Traverser_bind_lb_1_rb__lt__7b20");
    sy_Constant_Traverser_bind_lb_1_rb__sp__6af0=rb_intern("Constant_Traverser_bind_lb_1_rb__sp__6af0");
    sy_Constant_Traverser_if_sp_bind_lb__1bed=rb_intern("Constant_Traverser_if_sp_bind_lb__1bed");
    sy_Constant_Traverser_src_25d9=rb_intern("Constant_Traverser_src_25d9");
    sy_Constant_Traverser_src_dot_cfg_eq__15aa=rb_intern("Constant_Traverser_src_dot_cfg_eq__15aa");
    sy_Constant_Traverser_src_dot_dup_d768=rb_intern("Constant_Traverser_src_dot_dup_d768");
    rb_define_method(cls_Constant_Traverser,"consts",Constant_Traverser_consts,0);
    rb_define_method(cls_Constant_Traverser,"root",Constant_Traverser_root,0);
    rb_define_method(cls_Constant_Traverser,"traverse",Constant_Traverser_traverse,0);
    rb_define_method(cls_Constant_Traverser,"traverse_item",Constant_Traverser_traverse_item,0);
    rb_define_method(cls_Constant_Traverser,"visit",Constant_Traverser_visit,0);
}
