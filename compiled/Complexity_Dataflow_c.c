#include "cthyst.h"
#include "memo.c"
VALUE cls_Complexity_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Complexity_Dataflow_first(VALUE self );
VALUE Complexity_Dataflow_getvalue(VALUE self ,VALUE a0);
VALUE First_Dataflow_switch(VALUE self );
VALUE First_Dataflow_value(VALUE self );
VALUE switchhash_Complexity_Dataflow_1;
static VALUE sy_Complexity_Dataflow_Compiler_558e;
static VALUE sy_Complexity_Dataflow__at_vis_eq_bin_8b89;
static VALUE sy_Complexity_Dataflow__lp_Compile_7f7b;
static VALUE sy_Complexity_Dataflow_lattice_lb__11f0;
static VALUE sy_Complexity_Dataflow_lattice_lb__5911;
static VALUE sy_Complexity_Dataflow_lattice_lb__6ee3;
static VALUE sy_Complexity_Dataflow_lattice_lb__ba7e;
static VALUE sy_Complexity_Dataflow_lattice_lb__f621;
VALUE profile_report_Complexity_Dataflow(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Complexity_Dataflow_first(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_name,_autovar_2,_autovar_3,_v,__result,_autovar_4,_autovar_5,_autovar_6,_autovar_7,_autovar_8,_autovar_9,_autovar_10;
    VALUE bind2=bind_new2(16);
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch(FIX2LONG(rb_hash_aref(switchhash_Complexity_Dataflow_1,rb_obj_class(ame_curobj2(ptr))))) {
    case 0/*Apply*/:
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        VALUE lalt12autovar=_autovar;
        VALUE lalt12name=_name;
        VALUE lalt12autovar_2=_autovar_2;
        VALUE lalt12autovar_3=_autovar_3;
        VALUE lalt12v=_v;
        VALUE lalt12_result=__result;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar=it;;
        cstruct oldpass1=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar);
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto pass1;
        }
        _name=it;;
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Complexity_Dataflow__lp_Compile_7f7b,1,bind2);
        _name=bind_aget(bind2,1);;
        if (it==failobj) {
            it=failobj;
            goto pass1;
        };
        bind_aset(bind2,1,_name);
        it=rb_funcall(self,sy_Complexity_Dataflow_Compiler_558e,1,bind2);
        _name=bind_aget(bind2,1);;
        _autovar_2=it;;
        cstruct oldpass2=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ptr->src=failobj;
        ptr->ary=alloca(sizeof(VALUE));
        ptr->ary[0]=_autovar_2;
        ptr->len=1;
        it=First_Dataflow_value(self );
        if (it==failobj) {
            it=failobj;
            goto pass2;
        }
        _autovar_3=it;;
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
        it=_autovar_3;
        _v=it;;

        goto success1;
pass1:
        *ptr=oldpass1;
        if (1) {
            it=failobj;
            goto alt1_2;
        }
success1:
        *ptr=oldpass1;
        bind_aset(bind2,1,_v);
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__ba7e,1,bind2);
        _v=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        _autovar=lalt12autovar;
        _name=lalt12name;
        _autovar_2=lalt12autovar_2;
        _autovar_3=lalt12autovar_3;
        _v=lalt12v;
        __result=lalt12_result;
        ptr->pos=oldpos1;
        VALUE lalt13autovar=_autovar;
        VALUE lalt13name=_name;
        VALUE lalt13autovar_2=_autovar_2;
        VALUE lalt13autovar_3=_autovar_3;
        VALUE lalt13v=_v;
        VALUE lalt13_result=__result;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt1_3;
        }
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__6ee3,1,bind2);
        __result=it;;

        ;
        goto accept1;
alt1_3:
        _autovar=lalt13autovar;
        _name=lalt13name;
        _autovar_2=lalt13autovar_2;
        _autovar_3=lalt13autovar_3;
        _v=lalt13v;
        __result=lalt13_result;
        ptr->pos=oldpos1;
        if (1) {
            it=failobj;
            goto fail;
        };
accept1:
        ;
        break;
    case 1/*Many*/:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        VALUE lalt22v=_v;
        VALUE lalt22_result=__result;
        VALUE lalt22autovar_4=_autovar_4;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_4=it;;
        cstruct oldpass3=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_4);
        it=First_Dataflow_value(self );
        if (it==failobj) {
            it=failobj;
            goto pass3;
        }
        _v=it;;
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
            goto alt2_2;
        }
success3:
        *ptr=oldpass3;
        bind_aset(bind2,1,_v);
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__11f0,1,bind2);
        _v=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept2;
alt2_2:
        _v=lalt22v;
        __result=lalt22_result;
        _autovar_4=lalt22autovar_4;
        ptr->pos=oldpos2;
        VALUE lalt23v=_v;
        VALUE lalt23_result=__result;
        VALUE lalt23autovar_4=_autovar_4;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt2_3;
        }
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__6ee3,1,bind2);
        __result=it;;

        ;
        goto accept2;
alt2_3:
        _v=lalt23v;
        __result=lalt23_result;
        _autovar_4=lalt23autovar_4;
        ptr->pos=oldpos2;
        if (1) {
            it=failobj;
            goto fail;
        };
accept2:
        ;
        break;
    case 2/*Or*/:
    case 3/*Switch_Char*/:
    case 4/*Switch_Clas*/:
        ;
        it=rb_ary_new3(0);
        _v=it;;
        int oldpos3=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        VALUE lalt32v=_v;
        VALUE lalt32_result=__result;
        VALUE lalt32autovar_5=_autovar_5;
        VALUE lalt32autovar_6=_autovar_6;
        VALUE lalt32autovar_7=_autovar_7;
        it=First_Dataflow_switch(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_2;
        }
        _autovar_5=it;;
        cstruct oldpass4=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_5);
        int stop1=0;
        while(!stop1) {
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            VALUE lalt42autovar_6=_autovar_6;
            VALUE lalt42autovar_7=_autovar_7;
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto alt4_2;
            }
            _autovar_6=it;;
            cstruct oldpass5=*ptr;
            ptr->pos=ptr->len=0;
            ptr->ary=NULL;
            ame_setsrc2(self,_autovar_6);
            it=AmethystCore_anything(self );
            if (it==failobj) {
                it=failobj;
                goto pass5;
            }
            it=First_Dataflow_value(self );
            if (it==failobj) {
                it=failobj;
                goto pass5;
            }
            _autovar_7=it;;
            it=AmethystCore_append(self,_v,_autovar_7);
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
                goto alt4_2;
            }
success5:
            *ptr=oldpass5;

            ;
            goto accept4;
alt4_2:
            _autovar_6=lalt42autovar_6;
            _autovar_7=lalt42autovar_7;
            ptr->pos=oldpos4;
            VALUE lalt43autovar_6=_autovar_6;
            VALUE lalt43autovar_7=_autovar_7;
            stop1=1;
            ;
            goto accept4;
alt4_3:
            _autovar_6=lalt43autovar_6;
            _autovar_7=lalt43autovar_7;
            ptr->pos=oldpos4;
            if (1) {
                it=failobj;
                goto pass4;
            };
accept4:
            ;
        }
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
            goto alt3_2;
        }
success4:
        *ptr=oldpass4;
        bind_aset(bind2,1,_v);
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__f621,1,bind2);
        _v=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept3;
alt3_2:
        _v=lalt32v;
        __result=lalt32_result;
        _autovar_5=lalt32autovar_5;
        _autovar_6=lalt32autovar_6;
        _autovar_7=lalt32autovar_7;
        ptr->pos=oldpos3;
        VALUE lalt33v=_v;
        VALUE lalt33_result=__result;
        VALUE lalt33autovar_5=_autovar_5;
        VALUE lalt33autovar_6=_autovar_6;
        VALUE lalt33autovar_7=_autovar_7;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt3_3;
        }
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__6ee3,1,bind2);
        __result=it;;

        ;
        goto accept3;
alt3_3:
        _v=lalt33v;
        __result=lalt33_result;
        _autovar_5=lalt33autovar_5;
        _autovar_6=lalt33autovar_6;
        _autovar_7=lalt33autovar_7;
        ptr->pos=oldpos3;
        if (1) {
            it=failobj;
            goto fail;
        };
accept3:
        ;
        break;
    case 5/*Seq*/:
        ;
        int oldpos5=ptr->pos;
        int cut5=0;
alt5_1:
        ;
        VALUE lalt52v=_v;
        VALUE lalt52_result=__result;
        VALUE lalt52autovar_8=_autovar_8;
        VALUE lalt52autovar_9=_autovar_9;
        VALUE lalt52autovar_10=_autovar_10;
        it=ptr->ary[ptr->pos];            ;
        ptr->pos++;
        _autovar_8=it;;
        cstruct oldpass6=*ptr;
        ptr->pos=ptr->len=0;
        ptr->ary=NULL;
        ame_setsrc2(self,_autovar_8);
        it=rb_ary_new3(0);
        _autovar_9=it;;
        int stop2=0;
        while(!stop2) {
            int oldpos6=ptr->pos;
            int cut6=0;
alt6_1:
            ;
            VALUE lalt62autovar_10=_autovar_10;
            it=First_Dataflow_value(self );
            if (it==failobj) {
                it=failobj;
                goto alt6_2;
            }
            _autovar_10=it;;
            it=AmethystCore_append(self,_autovar_9,_autovar_10);
            ;
            goto accept6;
alt6_2:
            _autovar_10=lalt62autovar_10;
            ptr->pos=oldpos6;
            VALUE lalt63autovar_10=_autovar_10;
            stop2=1;
            ;
            goto accept6;
alt6_3:
            _autovar_10=lalt63autovar_10;
            ptr->pos=oldpos6;
            if (1) {
                it=failobj;
                goto pass6;
            };
accept6:
            ;
        }
        it=Qnil;
        if (ptr->pos<ptr->len) {
            it=failobj;
            goto pass6;
        }
        it=_autovar_9;
        _v=it;;

        goto success6;
pass6:
        *ptr=oldpass6;
        if (1) {
            it=failobj;
            goto alt5_2;
        }
success6:
        *ptr=oldpass6;
        bind_aset(bind2,1,_v);
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__5911,1,bind2);
        _v=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt5_2:
        _v=lalt52v;
        __result=lalt52_result;
        _autovar_8=lalt52autovar_8;
        _autovar_9=lalt52autovar_9;
        _autovar_10=lalt52autovar_10;
        ptr->pos=oldpos5;
        VALUE lalt53v=_v;
        VALUE lalt53_result=__result;
        VALUE lalt53autovar_8=_autovar_8;
        VALUE lalt53autovar_9=_autovar_9;
        VALUE lalt53autovar_10=_autovar_10;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto alt5_3;
        }
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__6ee3,1,bind2);
        __result=it;;

        ;
        goto accept5;
alt5_3:
        _v=lalt53v;
        __result=lalt53_result;
        _autovar_8=lalt53autovar_8;
        _autovar_9=lalt53autovar_9;
        _autovar_10=lalt53autovar_10;
        ptr->pos=oldpos5;
        if (1) {
            it=failobj;
            goto fail;
        };
accept5:
        ;
        break;
    case 6/*Object*/:
        ;
        it=AmethystCore_anything(self );
        if (it==failobj) {
            it=failobj;
            goto fail;
        }
        it=rb_funcall(self,sy_Complexity_Dataflow_lattice_lb__6ee3,1,bind2);
        __result=it;;
        break;
    }
fail:
    return it;
}
VALUE Complexity_Dataflow_getvalue(VALUE self ,VALUE a0) {
    VALUE vals[1];
    VALUE it ,_v,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    _v=a0;;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    bind_aset(bind2,1,_v);
    it=rb_funcall(self,sy_Complexity_Dataflow__at_vis_eq_bin_8b89,1,bind2);
    _v=bind_aget(bind2,1);;
    _autovar=it;;
    cstruct oldpass1=*ptr;
    ptr->pos=ptr->len=0;
    ptr->ary=NULL;
    ptr->src=failobj;
    ptr->ary=alloca(sizeof(VALUE));
    ptr->ary[0]=_autovar;
    ptr->len=1;
    it=Complexity_Dataflow_first(self );
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
        goto fail;
    }
success1:
    *ptr=oldpass1;
    it=_autovar_2;
    __result=it;;

fail:
    return it;
}
void Init_Complexity_Dataflow_c() {
    cls_Complexity_Dataflow=rb_define_class("Complexity_Dataflow",rb_const_get(rb_cObject,rb_intern("First_Dataflow")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Complexity_Dataflow,"profile_report",profile_report_Complexity_Dataflow,0);
    switchhash_Complexity_Dataflow_1=rb_eval_string("Hash.new{|h,k|next h[k]=0 if k<=Apply\nnext h[k]=1 if k<=Many\nnext h[k]=2 if k<=Or\nnext h[k]=3 if k<=Switch_Char\nnext h[k]=4 if k<=Switch_Clas\nnext h[k]=5 if k<=Seq\nnext h[k]=6 if k<=Object\n}");
    rb_global_variable(&switchhash_Complexity_Dataflow_1);;
    sy_Complexity_Dataflow_Compiler_558e=rb_intern("Complexity_Dataflow_Compiler_558e");
    sy_Complexity_Dataflow__at_vis_eq_bin_8b89=rb_intern("Complexity_Dataflow__at_vis_eq_bin_8b89");
    sy_Complexity_Dataflow__lp_Compile_7f7b=rb_intern("Complexity_Dataflow__lp_Compile_7f7b");
    sy_Complexity_Dataflow_lattice_lb__11f0=rb_intern("Complexity_Dataflow_lattice_lb__11f0");
    sy_Complexity_Dataflow_lattice_lb__5911=rb_intern("Complexity_Dataflow_lattice_lb__5911");
    sy_Complexity_Dataflow_lattice_lb__6ee3=rb_intern("Complexity_Dataflow_lattice_lb__6ee3");
    sy_Complexity_Dataflow_lattice_lb__ba7e=rb_intern("Complexity_Dataflow_lattice_lb__ba7e");
    sy_Complexity_Dataflow_lattice_lb__f621=rb_intern("Complexity_Dataflow_lattice_lb__f621");
    rb_define_method(cls_Complexity_Dataflow,"first",Complexity_Dataflow_first,0);
    rb_define_method(cls_Complexity_Dataflow,"getvalue",Complexity_Dataflow_getvalue,1);
}
