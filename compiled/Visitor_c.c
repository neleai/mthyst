#include "cthyst.h"
#include "memo.c"
VALUE cls_Visitor;
VALUE AmethystCore_anything(VALUE self );
VALUE Visitor_traverse(VALUE self );
VALUE Visitor_traverse_item(VALUE self );
VALUE switchhash_Visitor_1;
static VALUE sy_Visitor__lp_src_dot_ins_a413;
static VALUE sy_visit;
VALUE profile_report_Visitor(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Visitor_traverse(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil,__result=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    ptr->pos=ptr->len;
    it=rb_funcall(self,sy_Visitor__lp_src_dot_ins_a413,1,bind2);
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
    it=rb_ary_new3(0);
    _autovar_3=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE revert1autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        it=Visitor_traverse_item(self );
        if (it==failobj) {
            it=failobj;
            goto revert1;
        }
        _autovar_4=it;;
        it=AmethystCore_append(self,_autovar_3,_autovar_4);
        ;
        goto accept2;
revert1:
        ;
        _autovar_4=revert1autovar_4;
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
    it=_autovar_3;
    _autovar_5=it;;

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
    it=_autovar_5;
    _autovar_6=it;;

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

fail:
    return it;
}
VALUE Visitor_traverse_item(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result=Qnil,_autovar=Qnil,_autovar_2=Qnil,_autovar_3=Qnil,_autovar_4=Qnil,_autovar_5=Qnil,_autovar_6=Qnil;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Visitor_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*AmethystAST*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE revert1_result=rb_funcall(__result,rb_intern("dup"),0);
        it=rb_funcall(self,sy_visit,0);
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
        it=Visitor_traverse(self );
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
    case 1/*Array*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE revert4_result=rb_funcall(__result,rb_intern("dup"),0);
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto revert4;
        }
        __result=it;;

        ;
        goto accept6;
revert4:
        ;
        __result=revert4_result;
        goto alt2_2;
accept6:
        ;

        ;
        goto accept5;
alt2_2:
        ptr->pos=oldpos2;
        VALUE revert5_result=rb_funcall(__result,rb_intern("dup"),0);
        VALUE revert5autovar_3=rb_funcall(_autovar_3,rb_intern("dup"),0);
        VALUE revert5autovar_4=rb_funcall(_autovar_4,rb_intern("dup"),0);
        VALUE revert5autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
        VALUE revert5autovar_6=rb_funcall(_autovar_6,rb_intern("dup"),0);
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_3=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_3);
        it=rb_ary_new3(0);
        _autovar_4=it;;
        int stop1=0;
        while(!stop1) {
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            VALUE revert6autovar_5=rb_funcall(_autovar_5,rb_intern("dup"),0);
            it=Visitor_traverse_item(self );
            if (it==failobj) {
                it=failobj;
                goto revert6;
            }
            _autovar_5=it;;
            it=AmethystCore_append(self,_autovar_4,_autovar_5);
            ;
            goto accept9;
revert6:
            ;
            _autovar_5=revert6autovar_5;
            goto alt3_2;
accept9:
            ;

            ;
            goto accept8;
alt3_2:
            ptr->pos=oldpos3;
            stop1=1;
            ;
            goto accept10;
revert7:
            ;
            goto alt3_3;
accept10:
            ;

            ;
            goto accept8;
alt3_3:
            ptr->pos=oldpos3;
            if (1) {
                it=failobj;
                goto pass2;
            };
accept8:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass2;
        }
        it=_autovar_4;
        _autovar_6=it;;

        goto success2;
pass2:
        *ptr=oldpass2;
        if (1) {
            it=failobj;
            goto revert5;
        }
success2:
        *ptr=oldpass2;
        it=_autovar_6;
        __result=it;;

        ;
        goto accept7;
revert5:
        ;
        __result=revert5_result;
        _autovar_3=revert5autovar_3;
        _autovar_4=revert5autovar_4;
        _autovar_5=revert5autovar_5;
        _autovar_6=revert5autovar_6;
        goto alt2_3;
accept7:
        ;

        ;
        goto accept5;
alt2_3:
        ptr->pos=oldpos2;
        VALUE revert8_result=rb_funcall(__result,rb_intern("dup"),0);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto revert8;
        }
        __result=it;;

        ;
        goto accept11;
revert8:
        ;
        __result=revert8_result;
        goto alt2_4;
accept11:
        ;

        ;
        goto accept5;
alt2_4:
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept5:
        ;
        break;
    case 2/*Object*/:
        ;
        int oldpos4=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        VALUE revert9_result=rb_funcall(__result,rb_intern("dup"),0);
        it=rb_funcall(self,sy_visit,0);
        if (it==failobj) {
            it=failobj;
            goto revert9;
        }
        __result=it;;

        ;
        goto accept13;
revert9:
        ;
        __result=revert9_result;
        goto alt4_2;
accept13:
        ;

        ;
        goto accept12;
alt4_2:
        ptr->pos=oldpos4;
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
        goto alt4_3;
accept14:
        ;

        ;
        goto accept12;
alt4_3:
        ptr->pos=oldpos4;
        if (1) {
            it=failobj;
            goto fail;
        };
accept12:
        ;
        break;
    }
fail:
    return it;
}
void Init_Visitor_c() {
    cls_Visitor=rb_define_class("Visitor",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Visitor,"profile_report",profile_report_Visitor,0);
    switchhash_Visitor_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=AmethystAST\nnext h[k]=1 if k<=Array\nnext h[k]=2 if k<=Object\n}");
    rb_global_variable(&switchhash_Visitor_1);;
    sy_Visitor__lp_src_dot_ins_a413=rb_intern("Visitor__lp_src_dot_ins_a413");
    sy_visit=rb_intern("visit");
    rb_define_method(cls_Visitor,"traverse",Visitor_traverse,0);
    rb_define_method(cls_Visitor,"traverse_item",Visitor_traverse_item,0);
}
