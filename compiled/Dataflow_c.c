#include "cthyst.h"
#include "memo.c"
VALUE cls_Dataflow;
VALUE AmethystCore_anything(VALUE self );
VALUE Dataflow_update(VALUE self ,VALUE a0);
VALUE Dataflow_value(VALUE self );
static VALUE sy_Dataflow_df_updat_6a97;
static VALUE sy_Dataflow_df_value_1b52;
VALUE profile_report_Dataflow(VALUE self){cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  return Qnil;}VALUE Dataflow_update(VALUE self ,VALUE a0){VALUE vals[1]; VALUE it ,_x=Qnil,_v=Qnil,__result=Qnil;VALUE bind2=bind_new2(2); _v=a0;;  cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} _x=it;;
bind_aset(bind2,1,_x);bind_aset(bind2,2,_v);it=rb_funcall(self,sy_Dataflow_df_updat_6a97,1,bind2);_x=bind_aget(bind2,1);;_v=bind_aget(bind2,2);; __result=it;;

fail: return it;
}
VALUE Dataflow_value(VALUE self ){VALUE vals[0]; VALUE it ,_x=Qnil,__result=Qnil;VALUE bind2=bind_new2(1);   cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);  it=AmethystCore_anything(self ); if (it==failobj){it=failobj;goto fail;} _x=it;;
bind_aset(bind2,1,_x);it=rb_funcall(self,sy_Dataflow_df_value_1b52,1,bind2);_x=bind_aget(bind2,1);; __result=it;;

fail: return it;
}
void Init_Dataflow_c(){ 
 cls_Dataflow=rb_define_class("Dataflow",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
                    failobj=rb_eval_string("FAIL");
                    rb_define_method(cls_Dataflow,"profile_report",profile_report_Dataflow,0);
sy_Dataflow_df_updat_6a97=rb_intern("Dataflow_df_updat_6a97");
sy_Dataflow_df_value_1b52=rb_intern("Dataflow_df_value_1b52");
                    rb_define_method(cls_Dataflow,"update",Dataflow_update,1);
rb_define_method(cls_Dataflow,"value",Dataflow_value,0);
                    }
