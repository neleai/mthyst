#include "cthyst.h"
#include "memo.c"
VALUE cls_Add_Contextual_Arguments;
VALUE Add_Contextual_Arguments_root(VALUE self );
VALUE Add_Contextual_Arguments_traverse(VALUE self );
VALUE Add_Contextual_Arguments_traverse_item(VALUE self );
VALUE Add_Contextual_Arguments_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Contextual_Arguments_1;
VALUE switchhash_Add_Contextual_Arguments_2;
VALUE switchhash_Add_Contextual_Arguments_3;
VALUE switchhash_Add_Contextual_Arguments_4;
VALUE switchhash_Add_Contextual_Arguments_5;
VALUE switchhash_Add_Contextual_Arguments_6;
static VALUE sy_Add_Contextual_Arguments_Seq_lb_Act_lb__84b5;
static VALUE sy_Add_Contextual_Arguments__at__contex_5f56;
static VALUE sy_Add_Contextual_Arguments__at__contex_cdb3;
static VALUE sy_Add_Contextual_Arguments__at__contex_d6d5;
static VALUE sy_Add_Contextual_Arguments__at_context_25cc;
static VALUE sy_Add_Contextual_Arguments__at_context_54ee;
static VALUE sy_Add_Contextual_Arguments__lp__at_cargs_lb__e1d6;
static VALUE sy_Add_Contextual_Arguments__lp_src_dot_cla_2024;
static VALUE sy_Add_Contextual_Arguments_bind_lb_1_rb__eq__9326;
static VALUE sy_Add_Contextual_Arguments_bind_lb_1_rb__lb__6ab8;
static VALUE sy_Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20;
static VALUE sy_Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0;
static VALUE sy_Add_Contextual_Arguments_if_sp_bind_lb__1bed;
static VALUE sy_Add_Contextual_Arguments_src_25d9;
static VALUE sy_Add_Contextual_Arguments_src_dot_dup_d768;
VALUE profile_report_Add_Contextual_Arguments(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Add_Contextual_Arguments_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_s=Qnil,_t=Qnil,_autovar_6=Qnil,__result=Qnil,_autovar_7=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_funcall(self,sy_Add_Contextual_Arguments_src_dot_dup_d768,1,bind2);
    _autovar_3=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_3;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_1,rb_obj_class(ame_curobj2(ptr))))) {
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
    it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__lb__6ab8,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_Add_Contextual_Arguments_src_25d9,1,bind2);
    _s=it;;
    it=rb_funcall(self,sy_Add_Contextual_Arguments__at_context_25cc,1,bind2);
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=Add_Contextual_Arguments_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto pass2;
    }
    _t=it;;
    bind_aset(bind2,1,_t);
    bind_aset(bind2,2,_autovar_2);
    bind_aset(bind2,3,_s);
    it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__eq__9326,1,bind2);
    _t=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    _s=bind_aget(bind2,3);;
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
    it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_7=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Add_Contextual_Arguments_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars=Qnil,_ivars=Qnil,_autovar=Qnil,_autovar_2=Qnil,_it=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Add_Contextual_Arguments__lp_src_dot_cla_2024,1,bind2);
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
        ;
        VALUE revert1nvars=rb_funcall(_nvars,rb_intern("dup"),0);
        VALUE revert1it=rb_funcall(_it,rb_intern("dup"),0);
        it=Add_Contextual_Arguments_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        ;
        goto accept2;
revert1:
        ;
        _nvars=revert1nvars;
        _it=revert1it;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
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
    it=rb_funcall(self,sy_Add_Contextual_Arguments_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Add_Contextual_Arguments_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_ar=Qnil,_it=Qnil,_autovar_4=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Contextual_Argument*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
            it=Add_Contextual_Arguments_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert1;
            }
            __result=it;;

            ;
            goto accept2;
revert1:
            ;
            __result=revert1_result;
            goto alt1_2;
accept2:
            ;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            VALUE revert2_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert2autovar=rb_funcall(_autovar,rb_intern("dup"),0);
            VALUE revert2autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Add_Contextual_Arguments_traverse(self );
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
            __result=revert2_result;
            _autovar=revert2autovar;
            _autovar_2=revert2autovar_2;
            goto alt1_3;
accept3:
            ;

            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            VALUE revert3_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert3_result;
            goto alt1_4;
accept4:
            ;

            ;
            goto accept1;
alt1_4:
            ptr->pos=oldpos1;
            if (1) {
                it=failobj;
                goto fail;
            };
accept1:
            ;
            break;
        case 2/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            VALUE revert4_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert4autovar=rb_funcall(_autovar,rb_intern("dup"),0);
            VALUE revert4autovar_2=rb_funcall(_autovar_2,rb_intern("dup"),0);
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Add_Contextual_Arguments_traverse(self );
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
            __result=revert4_result;
            _autovar=revert4autovar;
            _autovar_2=revert4autovar_2;
            goto alt2_2;
accept6:
            ;

            ;
            goto accept5;
alt2_2:
            ptr->pos=oldpos2;
            VALUE revert5_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert5_result;
            goto alt2_3;
accept7:
            ;

            ;
            goto accept5;
alt2_3:
            ptr->pos=oldpos2;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Contextual_Argument*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE revert6_result=rb_funcall(__result,rb_intern("dup"),0);
            it=Add_Contextual_Arguments_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            __result=it;;

            ;
            goto accept9;
revert6:
            ;
            __result=revert6_result;
            goto alt3_2;
accept9:
            ;

            ;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            VALUE revert7_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert7autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
            VALUE revert7ar=rb_funcall(_ar,rb_intern("dup"),0);
            VALUE revert7it=rb_funcall(_it,rb_intern("dup"),0);
            VALUE revert7autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
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
                ;
                VALUE revert8ar=rb_funcall(_ar,rb_intern("dup"),0);
                VALUE revert8it=rb_funcall(_it,rb_intern("dup"),0);
                it=Add_Contextual_Arguments_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert8;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept12;
revert8:
                ;
                _ar=revert8ar;
                _it=revert8it;
                goto alt4_2;
accept12:
                ;

                ;
                goto accept11;
alt4_2:
                ptr->pos=oldpos4;
                stop1=1;
                ;
                goto accept13;
revert9:
                ;
                goto alt4_3;
accept13:
                ;

                ;
                goto accept11;
alt4_3:
                ptr->pos=oldpos4;
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
            __result=revert7_result;
            _autovar_3=revert7autovar_3;
            _ar=revert7ar;
            _it=revert7it;
            _autovar_4=revert7autovar_4;
            goto alt3_3;
accept10:
            ;

            ;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            VALUE revert10_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert10_result;
            goto alt3_4;
accept14:
            ;

            ;
            goto accept8;
alt3_4:
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept8:
            ;
            break;
        case 2/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            VALUE revert11_result=rb_funcall(__result,rb_intern("dup"),0);
            VALUE revert11autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
            VALUE revert11ar=rb_funcall(_ar,rb_intern("dup"),0);
            VALUE revert11it=rb_funcall(_it,rb_intern("dup"),0);
            VALUE revert11autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
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
                ;
                VALUE revert12ar=rb_funcall(_ar,rb_intern("dup"),0);
                VALUE revert12it=rb_funcall(_it,rb_intern("dup"),0);
                it=Add_Contextual_Arguments_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto revert12;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
                ;
                goto accept18;
revert12:
                ;
                _ar=revert12ar;
                _it=revert12it;
                goto alt6_2;
accept18:
                ;

                ;
                goto accept17;
alt6_2:
                ptr->pos=oldpos6;
                stop2=1;
                ;
                goto accept19;
revert13:
                ;
                goto alt6_3;
accept19:
                ;

                ;
                goto accept17;
alt6_3:
                ptr->pos=oldpos6;
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
            __result=revert11_result;
            _autovar_3=revert11autovar_3;
            _ar=revert11ar;
            _it=revert11it;
            _autovar_4=revert11autovar_4;
            goto alt5_2;
accept16:
            ;

            ;
            goto accept15;
alt5_2:
            ptr->pos=oldpos5;
            VALUE revert14_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert14_result;
            goto alt5_3;
accept20:
            ;

            ;
            goto accept15;
alt5_3:
            ptr->pos=oldpos5;
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
        switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
        case 1/*Contextual_Argument*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            VALUE revert15_result=rb_funcall(__result,rb_intern("dup"),0);
            it=Add_Contextual_Arguments_visit(self );
            if (it==failobj) {
                it=failobj;
                goto revert15;
            }
            __result=it;;

            ;
            goto accept22;
revert15:
            ;
            __result=revert15_result;
            goto alt7_2;
accept22:
            ;

            ;
            goto accept21;
alt7_2:
            ptr->pos=oldpos7;
            VALUE revert16_result=rb_funcall(__result,rb_intern("dup"),0);
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
            __result=revert16_result;
            goto alt7_3;
accept23:
            ;

            ;
            goto accept21;
alt7_3:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto fail;
            };
accept21:
            ;
            break;
        case 2/*Object*/:
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
VALUE Add_Contextual_Arguments_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_t=Qnil,__result=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_name=Qnil,_autovar_6=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Contextual_Arguments_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_3);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__lp__at_cargs_lb__e1d6,1,bind2);
        if (it==failobj) {
            it=failobj;
            goto pass1;
        };
        bind_aset(bind2,1,_autovar_2);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_d6d5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        it=Add_Contextual_Arguments_traverse(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _t=it;;
        ptr->pos=ptr->len;
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
        bind_aset(bind2,1,_autovar_2);
        bind_aset(bind2,2,_t);
        it=rb_funcall(self,sy_Add_Contextual_Arguments_Seq_lb_Act_lb__84b5,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _t=bind_aget(bind2,2);;
        __result=it;;
        _autovar_4=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_4=bind_aget(bind2,2);;
        break;
    case 1/*Contextual_Argument*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_5=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_5);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _name=it;;
        bind_aset(bind2,1,_autovar_2);
        bind_aset(bind2,2,_name);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at_context_54ee,1,bind2);
        _autovar_2=bind_aget(bind2,1);;
        _name=bind_aget(bind2,2);;
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
        _autovar_4=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_4);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_4=bind_aget(bind2,2);;
        break;
    case 2/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Add_Contextual_Arguments__at__contex_5f56,1,bind2);
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
void Init_Add_Contextual_Arguments_c() {
    cls_Add_Contextual_Arguments=rb_define_class("Add_Contextual_Arguments",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Add_Contextual_Arguments,"profile_report",profile_report_Add_Contextual_Arguments,0);
    switchhash_Add_Contextual_Arguments_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_1);;
    switchhash_Add_Contextual_Arguments_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Argument\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_2);;
    switchhash_Add_Contextual_Arguments_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_3);;
    switchhash_Add_Contextual_Arguments_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Argument\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_4);;
    switchhash_Add_Contextual_Arguments_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Argument\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_5);;
    switchhash_Add_Contextual_Arguments_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Contextual_Argument\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Contextual_Arguments_6);;
    sy_Add_Contextual_Arguments_Seq_lb_Act_lb__84b5=rb_intern("Add_Contextual_Arguments_Seq_lb_Act_lb__84b5");
    sy_Add_Contextual_Arguments__at__contex_5f56=rb_intern("Add_Contextual_Arguments__at__contex_5f56");
    sy_Add_Contextual_Arguments__at__contex_cdb3=rb_intern("Add_Contextual_Arguments__at__contex_cdb3");
    sy_Add_Contextual_Arguments__at__contex_d6d5=rb_intern("Add_Contextual_Arguments__at__contex_d6d5");
    sy_Add_Contextual_Arguments__at_context_25cc=rb_intern("Add_Contextual_Arguments__at_context_25cc");
    sy_Add_Contextual_Arguments__at_context_54ee=rb_intern("Add_Contextual_Arguments__at_context_54ee");
    sy_Add_Contextual_Arguments__lp__at_cargs_lb__e1d6=rb_intern("Add_Contextual_Arguments__lp__at_cargs_lb__e1d6");
    sy_Add_Contextual_Arguments__lp_src_dot_cla_2024=rb_intern("Add_Contextual_Arguments__lp_src_dot_cla_2024");
    sy_Add_Contextual_Arguments_bind_lb_1_rb__eq__9326=rb_intern("Add_Contextual_Arguments_bind_lb_1_rb__eq__9326");
    sy_Add_Contextual_Arguments_bind_lb_1_rb__lb__6ab8=rb_intern("Add_Contextual_Arguments_bind_lb_1_rb__lb__6ab8");
    sy_Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20=rb_intern("Add_Contextual_Arguments_bind_lb_1_rb__lt__7b20");
    sy_Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0=rb_intern("Add_Contextual_Arguments_bind_lb_1_rb__sp__6af0");
    sy_Add_Contextual_Arguments_if_sp_bind_lb__1bed=rb_intern("Add_Contextual_Arguments_if_sp_bind_lb__1bed");
    sy_Add_Contextual_Arguments_src_25d9=rb_intern("Add_Contextual_Arguments_src_25d9");
    sy_Add_Contextual_Arguments_src_dot_dup_d768=rb_intern("Add_Contextual_Arguments_src_dot_dup_d768");
    rb_define_method(cls_Add_Contextual_Arguments,"root",Add_Contextual_Arguments_root,0);
    rb_define_method(cls_Add_Contextual_Arguments,"traverse",Add_Contextual_Arguments_traverse,0);
    rb_define_method(cls_Add_Contextual_Arguments,"traverse_item",Add_Contextual_Arguments_traverse_item,0);
    rb_define_method(cls_Add_Contextual_Arguments,"visit",Add_Contextual_Arguments_visit,0);
}
