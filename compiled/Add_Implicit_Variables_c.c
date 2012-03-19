#include "cthyst.h"
#include "memo.c"
VALUE cls_Add_Implicit_Variables;
VALUE Add_Implicit_Variables_root(VALUE self );
VALUE Add_Implicit_Variables_traverse(VALUE self );
VALUE Add_Implicit_Variables_traverse_item(VALUE self );
VALUE Add_Implicit_Variables_visit(VALUE self );
VALUE AmethystCore_anything(VALUE self );
VALUE switchhash_Add_Implicit_Variables_1;
VALUE switchhash_Add_Implicit_Variables_2;
VALUE switchhash_Add_Implicit_Variables_3;
VALUE switchhash_Add_Implicit_Variables_4;
VALUE switchhash_Add_Implicit_Variables_5;
VALUE switchhash_Add_Implicit_Variables_6;
static VALUE sy_Add_Implicit_Variables__at__contex_5f56;
static VALUE sy_Add_Implicit_Variables__at__contex_cdb3;
static VALUE sy_Add_Implicit_Variables__at__contex_d6d5;
static VALUE sy_Add_Implicit_Variables__at_locals_eq__545d;
static VALUE sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d;
static VALUE sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3;
static VALUE sy_Add_Implicit_Variables__lp_src_dot_cla_2024;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__eq__1818;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__lb__9337;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20;
static VALUE sy_Add_Implicit_Variables_bind_lb_1_rb__sp__6af0;
static VALUE sy_Add_Implicit_Variables_if_sp_bind_lb__1bed;
static VALUE sy_Add_Implicit_Variables_l_eq_Local_lb__348c;
static VALUE sy_Add_Implicit_Variables_l_eq_Local_lb__f6a4;
VALUE profile_report_Add_Implicit_Variables(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Add_Implicit_Variables_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_t,_autovar_5,__result,_autovar_6;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy_Add_Implicit_Variables__at__contex_5f56,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=AmethystCore_anything(self );
    if (it==failobj) {
        it=failobj;
        goto fail;
    }
    _autovar_3=it;;
    bind_aset(bind2,1,_autovar_3);
    it=rb_funcall(self,sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4,1,bind2);
    _autovar_3=bind_aget(bind2,1);;
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_1,rb_obj_class(ame_curobj2(ptr))))) {
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
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__lb__9337,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_Add_Implicit_Variables__at_locals_eq__545d,1,bind2);
    bind_aset(bind2,1,_autovar_2);
    it=rb_funcall(self,sy_Add_Implicit_Variables__at__contex_d6d5,1,bind2);
    _autovar_2=bind_aget(bind2,1);;
    it=Add_Implicit_Variables_traverse(self );
    if (it==failobj) {
        it=failobj;
        goto pass1;
    }
    _t=it;;
    bind_aset(bind2,1,_t);
    it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__eq__1818,1,bind2);
    _t=bind_aget(bind2,1);;
    _autovar_5=it;;
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
    it=_autovar_5;
    __result=it;;
    _autovar_6=it;;
    bind_aset(bind2,1,_autovar);
    bind_aset(bind2,2,_autovar_6);
    it=rb_funcall(self,sy_Add_Implicit_Variables__at__contex_cdb3,1,bind2);
    _autovar=bind_aget(bind2,1);;
    _autovar_6=bind_aget(bind2,2);;
fail:
    return it;
}
VALUE Add_Implicit_Variables_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy_Add_Implicit_Variables__lp_src_dot_cla_2024,1,bind2);
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
        it=Add_Implicit_Variables_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__sp__6af0,1,bind2);
        _nvars=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
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
    it=rb_funcall(self,sy_Add_Implicit_Variables_if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Add_Implicit_Variables_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_4,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            it=Add_Implicit_Variables_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
            __result=it;;

            ;
            goto accept1;
alt1_2:
            ptr->pos=oldpos1;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Add_Implicit_Variables_traverse(self );
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
                goto alt1_3;
            }
success1:
            *ptr=oldpass1;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept1;
alt1_3:
            ptr->pos=oldpos1;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_4;
            }
            __result=it;;

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
        case 1/*Object*/:
            ;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar=it;;
            cstruct oldpass2=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar);
            it=Add_Implicit_Variables_traverse(self );
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
                goto alt2_2;
            }
success2:
            *ptr=oldpass2;
            it=_autovar_2;
            __result=it;;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
            }
            __result=it;;

            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto fail;
            };
accept2:
            ;
            break;
        }
        break;
    case 1/*Array*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_5,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=Add_Implicit_Variables_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            __result=it;;

            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
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
                it=Add_Implicit_Variables_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt4_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
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
                    goto pass3;
                };
accept4:
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
                goto alt3_3;
            }
success3:
            *ptr=oldpass3;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt3_4;
            }
            __result=it;;

            ;
            goto accept3;
alt3_4:
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto fail;
            };
accept3:
            ;
            break;
        case 1/*Object*/:
            ;
            int oldpos5=ptr->pos;
            int cut5=0;
alt5_1:
            ;
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
                it=Add_Implicit_Variables_traverse_item(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt6_2;
                }
                _it=it;;
                bind_aset(bind2,1,_ar);
                bind_aset(bind2,2,_it);
                it=rb_funcall(self,sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20,1,bind2);
                _ar=bind_aget(bind2,1);;
                _it=bind_aget(bind2,2);;
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
                    goto pass4;
                };
accept6:
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
                goto alt5_2;
            }
success4:
            *ptr=oldpass4;
            it=_autovar_4;
            __result=it;;

            ;
            goto accept5;
alt5_2:
            ptr->pos=oldpos5;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt5_3;
            }
            __result=it;;

            ;
            goto accept5;
alt5_3:
            ptr->pos=oldpos5;
            if (1) {
                it=failobj;
                goto fail;
            };
accept5:
            ;
            break;
        }
        break;
    case 2/*Object*/:
        ;
        switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_6,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Apply*/:
            ;
            int oldpos7=ptr->pos;
            int cut7=0;
alt7_1:
            ;
            it=Add_Implicit_Variables_visit(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_2;
            }
            __result=it;;

            ;
            goto accept7;
alt7_2:
            ptr->pos=oldpos7;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt7_3;
            }
            __result=it;;

            ;
            goto accept7;
alt7_3:
            ptr->pos=oldpos7;
            if (1) {
                it=failobj;
                goto fail;
            };
accept7:
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
VALUE Add_Implicit_Variables_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_name,_autovar_6,__result,_autovar_7,_autovar_8,_autovar_9;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Add_Implicit_Variables_2,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Add_Implicit_Variables__at__contex_5f56,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        it=_autovar_3;
        _autovar_4=it;;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=_autovar_4;
        _autovar_5=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_5);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _name=it;;
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d,1,bind2);
        _name=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass1;
        };
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Add_Implicit_Variables_l_eq_Local_lb__f6a4,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
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
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        it=_autovar_6;
        __result=it;;
        _autovar_7=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=_autovar_4;
        _autovar_8=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_8);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _name=it;;
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3,1,bind2);
        _name=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass2;
        };
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Add_Implicit_Variables_l_eq_Local_lb__348c,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        _autovar_9=it;;
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
            goto alt1_3;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_9;
        __result=it;;
        _autovar_7=it;;

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
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_7);
        it=rb_funcall(self,sy_Add_Implicit_Variables__at__contex_cdb3,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=bind_aget(bind2,2);;
        break;
    case 1/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy_Add_Implicit_Variables__at__contex_5f56,1,bind2);
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
void Init_Add_Implicit_Variables_c() {
    cls_Add_Implicit_Variables=rb_define_class("Add_Implicit_Variables",rb_const_get(rb_cObject,rb_intern("Traverser_Clone2")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Add_Implicit_Variables,"profile_report",profile_report_Add_Implicit_Variables,0);
    switchhash_Add_Implicit_Variables_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Rule\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_1);;
    switchhash_Add_Implicit_Variables_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_2);;
    switchhash_Add_Implicit_Variables_3=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_3);;
    switchhash_Add_Implicit_Variables_4=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_4);;
    switchhash_Add_Implicit_Variables_5=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_5);;
    switchhash_Add_Implicit_Variables_6=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Object\n}");
    rb_global_variable(&switchhash_Add_Implicit_Variables_6);;
    sy_Add_Implicit_Variables__at__contex_5f56=rb_intern("Add_Implicit_Variables__at__contex_5f56");
    sy_Add_Implicit_Variables__at__contex_cdb3=rb_intern("Add_Implicit_Variables__at__contex_cdb3");
    sy_Add_Implicit_Variables__at__contex_d6d5=rb_intern("Add_Implicit_Variables__at__contex_d6d5");
    sy_Add_Implicit_Variables__at_locals_eq__545d=rb_intern("Add_Implicit_Variables__at_locals_eq__545d");
    sy_Add_Implicit_Variables__at_vars_eq_bi_1ca4=rb_intern("Add_Implicit_Variables__at_vars_eq_bi_1ca4");
    sy_Add_Implicit_Variables__lp__at_vars_lb_b_160d=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_160d");
    sy_Add_Implicit_Variables__lp__at_vars_lb_b_5cb3=rb_intern("Add_Implicit_Variables__lp__at_vars_lb_b_5cb3");
    sy_Add_Implicit_Variables__lp_src_dot_cla_2024=rb_intern("Add_Implicit_Variables__lp_src_dot_cla_2024");
    sy_Add_Implicit_Variables_bind_lb_1_rb__eq__1818=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__eq__1818");
    sy_Add_Implicit_Variables_bind_lb_1_rb__lb__9337=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__lb__9337");
    sy_Add_Implicit_Variables_bind_lb_1_rb__lt__7b20=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__lt__7b20");
    sy_Add_Implicit_Variables_bind_lb_1_rb__sp__6af0=rb_intern("Add_Implicit_Variables_bind_lb_1_rb__sp__6af0");
    sy_Add_Implicit_Variables_if_sp_bind_lb__1bed=rb_intern("Add_Implicit_Variables_if_sp_bind_lb__1bed");
    sy_Add_Implicit_Variables_l_eq_Local_lb__348c=rb_intern("Add_Implicit_Variables_l_eq_Local_lb__348c");
    sy_Add_Implicit_Variables_l_eq_Local_lb__f6a4=rb_intern("Add_Implicit_Variables_l_eq_Local_lb__f6a4");
    rb_define_method(cls_Add_Implicit_Variables,"root",Add_Implicit_Variables_root,0);
    rb_define_method(cls_Add_Implicit_Variables,"traverse",Add_Implicit_Variables_traverse,0);
    rb_define_method(cls_Add_Implicit_Variables,"traverse_item",Add_Implicit_Variables_traverse_item,0);
    rb_define_method(cls_Add_Implicit_Variables,"visit",Add_Implicit_Variables_visit,0);
}
