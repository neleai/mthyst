#include "cthyst.h"
#include "memo.c"
VALUE cls_Constant_Propagator;
VALUE AmethystCore_anything(VALUE self );
VALUE Constant_Propagator_root(VALUE self );
VALUE Constant_Propagator_step(VALUE self ,VALUE a0);
VALUE switchhash_Constant_Propagator_1;
VALUE switchhash_Constant_Propagator_2;
static VALUE sy__Constant_8840;
static VALUE sy__Constant_bf42;
static VALUE sy__Constant_db03;
static VALUE sy___at_depend_eq__07a9;
static VALUE sy__a_eq_Consta_2e1d;
static VALUE sy__src_25d9;
static VALUE sy_valof;
VALUE profile_report_Constant_Propagator(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Constant_Propagator_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_it,__result;
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
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy___at_depend_eq__07a9,1,bind2);
    _it=bind_aget(bind2,1);;
    __result=it;;

fail:
    return it;
}
VALUE Constant_Propagator_step(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_el,_autovar,_autovar_2,_autovar_3,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_expr,_autovar_10,_autovar_11,_val,_autovar_12,_autovar_13,_autovar_14,__result;
    VALUE bind2=bind_new2(16);
    _el=a0;;
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=_el;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
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
        ptr->src=_autovar_2;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Propagator_2,rb_obj_class(ame_curobj2(ptr))))) {
        case 0/*Lambda*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_3=it;;
            cstruct oldpass3=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_3;
            if(TYPE(ptr->src)==T_STRING) {
                ptr->str=RSTRING_PTR(ptr->src);
                ptr->len=RSTRING_LEN(ptr->src);
            }
            else {
                VALUE ary;
                if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
                else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
                else ary=rb_ary_new3(0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy__Constant_8840,1,bind2);
            _autovar_4=it;;
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
            it=_autovar_4;
            _autovar_5=it;;
            break;
        case 1/*Local*/:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_6=it;;
            cstruct oldpass4=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_6;
            if(TYPE(ptr->src)==T_STRING) {
                ptr->str=RSTRING_PTR(ptr->src);
                ptr->len=RSTRING_LEN(ptr->src);
            }
            else {
                VALUE ary;
                if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
                else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
                else ary=rb_ary_new3(0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            ptr->pos=ptr->len;
            it=rb_funcall(self,sy__src_25d9,1,bind2);
            arg0=it;
            it=rb_funcall(self,sy_valof,1,arg0);
            if (it==failobj) {
                it=failobj;
                goto pass4;
            }
            _autovar_7=it;;
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
                goto pass2;
            }
success4:
            *ptr=oldpass4;
            it=Qnil;
            if (ptr->pos<ptr->len) {
                it=failobj;
                goto pass2;
            }
            it=_autovar_7;
            _autovar_5=it;;
            break;
        case 2/*Object*/:
            ;
            if (1) {
                it=failobj;
                goto pass2;
            }
            break;
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
        it=_autovar_5;
        _autovar_8=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=rb_funcall(self,sy__Constant_bf42,1,bind2);
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
        break;
    case 1/*Bind*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_9=it;;
        cstruct oldpass5=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_9;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _expr=it;;
        it=_expr;
        arg0=it;
        it=rb_funcall(self,sy_valof,1,arg0);
        if (it==failobj) {
            it=failobj;
            goto pass5;
        }
        _autovar_10=it;;
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
        it=_autovar_10;
        _autovar_8=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        it=rb_funcall(self,sy__Constant_bf42,1,bind2);
        _autovar_8=it;;

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
    case 2/*CAct*/:
        ;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_11=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_11;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        it=rb_funcall(self,sy__src_25d9,1,bind2);
        _val=it;;
        bind_aset(bind2,1,_val);
        it=rb_funcall(self,sy__Constant_db03,1,bind2);
        _val=bind_aget(bind2,1);;
        _autovar_12=it;;
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
            goto alt3_2;
        }
success6:
        *ptr=oldpass6;
        it=_autovar_12;
        _autovar_8=it;;

        ;
        goto accept3;
alt3_2:
        ptr->pos=oldpos3;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        it=rb_funcall(self,sy__Constant_bf42,1,bind2);
        _autovar_8=it;;

        ;
        goto accept3;
alt3_3:
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto pass1;
        };
accept3:
        ;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 3/*Local*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_13=it;;
        cstruct oldpass7=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_13;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        ptr->pos=ptr->len;
        bind_aset(bind2,1,_el);
        it=rb_funcall(self,sy__a_eq_Consta_2e1d,1,bind2);
        _el=bind_aget(bind2,1);;
        _autovar_14=it;;
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
            goto alt4_2;
        }
success7:
        *ptr=oldpass7;
        it=_autovar_14;
        _autovar_8=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        it=rb_funcall(self,sy__Constant_bf42,1,bind2);
        _autovar_8=it;;

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
    case 4/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        it=rb_funcall(self,sy__Constant_bf42,1,bind2);
        _autovar_8=it;;
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
    it=_autovar_8;
    __result=it;;

fail:
    return it;
}
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
static VALUE sy__Bind_lb_src_66c4;
static VALUE sy__Bind_lb_src_91ed;
static VALUE sy__Seq_lb_bind_95dc;
static VALUE sy___at__contex_160a;
static VALUE sy___at__contex_d6d5;
static VALUE sy___lp__lp_bind_lb_1_1e7f;
static VALUE sy___lp__lp_bind_lb_1_42f7;
static VALUE sy___lp_src_dot_cla_2024;
static VALUE sy__bind_lb_1_rb__dot__f702;
static VALUE sy__bind_lb_1_rb__lb__a394;
static VALUE sy__bind_lb_1_rb__lb__cf87;
static VALUE sy__bind_lb_1_rb__lt__7b20;
static VALUE sy__bind_lb_1_rb__sp__6af0;
static VALUE sy__if_sp_bind_lb__1bed;
static VALUE sy__src_25d9;
static VALUE sy__src_dot_cfg_eq__15aa;
static VALUE sy__src_dot_dup_d768;
static VALUE sy_consts;
static VALUE sy_traverse;
static VALUE sy_traverse_item;
static VALUE sy_visit;
VALUE profile_report_Constant_Traverser(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Constant_Traverser_consts(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_ary,_autovar_2,_autovar_3,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_160a,1,bind2);
    _autovar=bind_aget(bind2,1);;
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
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=ptr->ary[ptr->pos];            ;
            ptr->pos++;
            _autovar_2=it;;
            cstruct oldpass1=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ptr->src=_autovar_2;
            if(TYPE(ptr->src)==T_STRING) {
                ptr->str=RSTRING_PTR(ptr->src);
                ptr->len=RSTRING_LEN(ptr->src);
            }
            else {
                VALUE ary;
                if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
                else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
                else ary=rb_ary_new3(0);
                ptr->ary2=ary;
                ptr->ary=RARRAY_PTR(ary);
                ptr->len=RARRAY_LEN(ary);
            }
            int stop2=0;
            while(!stop2) {
                int oldpos3=ptr->pos;
                int cut3=0;
alt3_1:
                ;
                bind_aset(bind2,1,_autovar);
                it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
                _autovar=bind_aget(bind2,1);;
                it=AmethystCore_anything(self );
                if (it==failobj) {
                    it=failobj;
                    goto alt3_2;
                }
                ;
                goto accept3;
alt3_2:
                ptr->pos=oldpos3;
                stop2=1;
                ;
                goto accept3;
alt3_3:
                ptr->pos=oldpos3;
                if (1) {
                    it=failobj;
                    goto pass1;
                };
accept3:
                ;
            }
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___lp__lp_bind_lb_1_1e7f,1,bind2);
            _autovar=bind_aget(bind2,1);;
            if (it==failobj) {
                it=failobj;
                goto pass1;
            };
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy__Bind_lb_src_91ed,1,bind2);
            _autovar=bind_aget(bind2,1);;
            _autovar_3=it;;
            it=AmethystCore_append(self,_ary,_autovar_3);
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
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
                goto alt2_2;
            }
success1:
            *ptr=oldpass1;

            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_3;
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
            stop1=1;
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
        case 1/*Object*/:
            ;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
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
                goto fail;
            };
accept4:
            ;
            break;
        }
    }
    it=_ary;
    __result=it;;

fail:
    return it;
}
VALUE Constant_Traverser_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_autovar_3,_autovar_4,_it,_autovar_5,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_160a,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=rb_funcall(self,sy__src_dot_dup_d768,1,bind2);
    _autovar_2=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar_2;
    ptr->len=1;
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Rule*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass1;
        }
        break;
    case 1/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
    _autovar_4=it;;
    cstruct oldpass2=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=_autovar_4;
    if(TYPE(ptr->src)==T_STRING) {
        ptr->str=RSTRING_PTR(ptr->src);
        ptr->len=RSTRING_LEN(ptr->src);
    }
    else {
        VALUE ary;
        if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
        else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
        else ary=rb_ary_new3(0);
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy__bind_lb_1_rb__lb__cf87,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=rb_funcall(self,sy__src_dot_cfg_eq__15aa,1,bind2);
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar=bind_aget(bind2,1);;
    it=rb_funcall(self,sy_traverse,0);
    if (it==failobj) {
        it=failobj;
        goto pass2;
    }
    _it=it;;
    bind_aset(bind2,1,_it);
    it=rb_funcall(self,sy__bind_lb_1_rb__dot__f702,1,bind2);
    _it=bind_aget(bind2,1);;
    _autovar_5=it;;
    bind_aset(bind2,1,_autovar);
    it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
    _autovar=bind_aget(bind2,1);;
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
    it=_autovar_5;
    __result=it;;

fail:
    return it;
}
VALUE Constant_Traverser_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_nvars,_ivars,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_ary_new3(0);
    _nvars=it;;
    it=rb_funcall(self,sy___lp_src_dot_cla_2024,1,bind2);
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
    ptr->src=_autovar_2;
    if(TYPE(ptr->src)==T_STRING) {
        ptr->str=RSTRING_PTR(ptr->src);
        ptr->len=RSTRING_LEN(ptr->src);
    }
    else {
        VALUE ary;
        if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
        else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
        else ary=rb_ary_new3(0);
        ptr->ary2=ary;
        ptr->ary=RARRAY_PTR(ary);
        ptr->len=RARRAY_LEN(ary);
    }
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_funcall(self,sy_traverse_item,0);
        if (it==failobj) {
            it=failobj;
            goto alt1_2;
        }
        _it=it;;
        bind_aset(bind2,1,_nvars);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy__bind_lb_1_rb__sp__6af0,1,bind2);
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
    it=rb_funcall(self,sy__if_sp_bind_lb__1bed,1,bind2);
    _ivars=bind_aget(bind2,1);;
    _nvars=bind_aget(bind2,2);;
    __result=it;;

fail:
    return it;
}
VALUE Constant_Traverser_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result,_autovar,_autovar_2,_autovar_3,_ar,_it,_autovar_4;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_4,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_funcall(self,sy_visit,0);
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
        ptr->src=_autovar;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_funcall(self,sy_traverse,0);
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
    case 1/*Array*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto alt2_2;
        }
        __result=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_3;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        it=rb_ary_new3(0);
        _ar=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=rb_funcall(self,sy_traverse_item,0);
            if (it==failobj) {
                it=failobj;
                goto alt3_2;
            }
            _it=it;;
            bind_aset(bind2,1,_ar);
            bind_aset(bind2,2,_it);
            it=rb_funcall(self,sy__bind_lb_1_rb__lt__7b20,1,bind2);
            _ar=bind_aget(bind2,1);;
            _it=bind_aget(bind2,2);;
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
                goto pass2;
            };
accept3:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        it=_ar;
        _autovar_4=it;;

        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto alt2_3;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_4;
        __result=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_4;
        }
        __result=it;;

        ;
        goto accept2;
alt2_4:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept2:
        ;
        break;
    case 2/*Object*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto alt4_2;
        }
        __result=it;;

        ;
        goto accept4;
alt4_2:
        ptr->pos=oldpos4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt4_3;
        }
        __result=it;;

        ;
        goto accept4;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept4:
        ;
        break;
    }
fail:
    return it;
}
VALUE Constant_Traverser_visit(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_a,_autovar_3,__result,_autovar_4,_expr,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Constant_Traverser_3,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Act*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_2=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_2;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_consts,0);
        _a=it;;
        bind_aset(bind2,1,_a);
        it=rb_funcall(self,sy__Seq_lb_bind_95dc,1,bind2);
        _a=bind_aget(bind2,1);;
        _autovar_3=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=_autovar_3;
        __result=it;;
        break;
    case 1/*Bind*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_4;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=rb_funcall(self,sy_traverse_item,0);
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _expr=it;;
        bind_aset(bind2,1,_expr);
        it=rb_funcall(self,sy__Bind_lb_src_66c4,1,bind2);
        _expr=bind_aget(bind2,1);;
        _autovar_5=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=_autovar_5;
        __result=it;;
        break;
    case 2/*Local*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_6=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_6;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop1=0;
        while(!stop1) {
            int oldpos1=ptr->pos;
            int cut1=0;
alt1_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt1_2;
            }
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
                goto pass3;
            };
accept1:
            ;
        }
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___lp__lp_bind_lb_1_42f7,1,bind2);
        _autovar=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass3;
        };
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy__bind_lb_1_rb__lb__a394,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_7=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=_autovar_7;
        __result=it;;
        break;
    case 3/*Result*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_8=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=_autovar_8;
        if(TYPE(ptr->src)==T_STRING) {
            ptr->str=RSTRING_PTR(ptr->src);
            ptr->len=RSTRING_LEN(ptr->src);
        }
        else {
            VALUE ary;
            if (TYPE(ptr->src)==T_ARRAY) ary=ptr->src;
            else  if (rb_respond_to(ptr->src,s_to_a)) ary=rb_funcall(ptr->src,s_to_a,0);
            else ary=rb_ary_new3(0);
            ptr->ary2=ary;
            ptr->ary=RARRAY_PTR(ary);
            ptr->len=RARRAY_LEN(ary);
        }
        int stop2=0;
        while(!stop2) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            bind_aset(bind2,1,_autovar);
            it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
            _autovar=bind_aget(bind2,1);;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt2_2;
            }
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            stop2=1;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            if (1) {
                it=failobj;
                goto pass4;
            };
accept2:
            ;
        }
        it=rb_funcall(self,sy__src_25d9,1,bind2);
        _autovar_9=it;;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
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
        it=_autovar_9;
        __result=it;;
        break;
    case 4/*Object*/:
        ;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_160a,1,bind2);
        _autovar=bind_aget(bind2,1);;
        bind_aset(bind2,1,_autovar);
        it=rb_funcall(self,sy___at__contex_d6d5,1,bind2);
        _autovar=bind_aget(bind2,1);;
        if (1) {
            it=failobj;
            goto fail;
        }
        break;
    }
fail:
    return it;
}
void Init_constant_propagation_c() {
    cls_Constant_Propagator=rb_define_class("Constant_Propagator",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Constant_Propagator,"profile_report",profile_report_Constant_Propagator,0);
    switchhash_Constant_Propagator_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Act\nnext h[k]=1 if k<=Bind\nnext h[k]=2 if k<=CAct\nnext h[k]=3 if k<=Local\nnext h[k]=4 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Propagator_1);;
    switchhash_Constant_Propagator_2=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Lambda\nnext h[k]=1 if k<=Local\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Constant_Propagator_2);;
    sy__Constant_8840=rb_intern("_Constant_8840");
    sy__Constant_bf42=rb_intern("_Constant_bf42");
    sy__Constant_db03=rb_intern("_Constant_db03");
    sy___at_depend_eq__07a9=rb_intern("__at_depend_eq__07a9");
    sy__a_eq_Consta_2e1d=rb_intern("_a_eq_Consta_2e1d");
    sy__src_25d9=rb_intern("_src_25d9");
    sy_valof=rb_intern("valof");
    rb_define_method(cls_Constant_Propagator,"root",Constant_Propagator_root,0);
    rb_define_method(cls_Constant_Propagator,"step",Constant_Propagator_step,1);

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
    sy__Bind_lb_src_66c4=rb_intern("_Bind_lb_src_66c4");
    sy__Bind_lb_src_91ed=rb_intern("_Bind_lb_src_91ed");
    sy__Seq_lb_bind_95dc=rb_intern("_Seq_lb_bind_95dc");
    sy___at__contex_160a=rb_intern("__at__contex_160a");
    sy___at__contex_d6d5=rb_intern("__at__contex_d6d5");
    sy___lp__lp_bind_lb_1_1e7f=rb_intern("__lp__lp_bind_lb_1_1e7f");
    sy___lp__lp_bind_lb_1_42f7=rb_intern("__lp__lp_bind_lb_1_42f7");
    sy___lp_src_dot_cla_2024=rb_intern("__lp_src_dot_cla_2024");
    sy__bind_lb_1_rb__dot__f702=rb_intern("_bind_lb_1_rb__dot__f702");
    sy__bind_lb_1_rb__lb__a394=rb_intern("_bind_lb_1_rb__lb__a394");
    sy__bind_lb_1_rb__lb__cf87=rb_intern("_bind_lb_1_rb__lb__cf87");
    sy__bind_lb_1_rb__lt__7b20=rb_intern("_bind_lb_1_rb__lt__7b20");
    sy__bind_lb_1_rb__sp__6af0=rb_intern("_bind_lb_1_rb__sp__6af0");
    sy__if_sp_bind_lb__1bed=rb_intern("_if_sp_bind_lb__1bed");
    sy__src_25d9=rb_intern("_src_25d9");
    sy__src_dot_cfg_eq__15aa=rb_intern("_src_dot_cfg_eq__15aa");
    sy__src_dot_dup_d768=rb_intern("_src_dot_dup_d768");
    sy_consts=rb_intern("consts");
    sy_traverse=rb_intern("traverse");
    sy_traverse_item=rb_intern("traverse_item");
    sy_visit=rb_intern("visit");
    rb_define_method(cls_Constant_Traverser,"consts",Constant_Traverser_consts,0);
    rb_define_method(cls_Constant_Traverser,"root",Constant_Traverser_root,0);
    rb_define_method(cls_Constant_Traverser,"traverse",Constant_Traverser_traverse,0);
    rb_define_method(cls_Constant_Traverser,"traverse_item",Constant_Traverser_traverse_item,0);
    rb_define_method(cls_Constant_Traverser,"visit",Constant_Traverser_visit,0);
    rb_eval_string("testversionconstant_propagation('094ca293c5afd332fb59f7ba9eef6630')");
}
