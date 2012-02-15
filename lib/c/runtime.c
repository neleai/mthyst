#include "../../compiled/cthyst.h"
FILE * profile_report;
// write declarations to cthyst.h as without them call from other .so will crash
VALUE amecore;VALUE bindcls;VALUE failobj;
ID s_src,s_input,s_call,s_ary_get;
ID s_to_a;
VALUE ame_setlenrb(VALUE self,VALUE val){return INT2FIX(ame_setlen(self,FIX2INT(val)));}
VALUE ame_setposrb(VALUE self,VALUE val){return INT2FIX(ame_setpos(self,FIX2INT(val)));}
VALUE ame_getlenrb(VALUE self){return INT2FIX(ame_getlen(self));}

VALUE AmethystCore__seq(VALUE self,VALUE str){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	int len=RSTRING_LEN(str);
	if (TYPE(ptr->src)==T_STRING){
		if (strncmp(ptr->str+ptr->pos,RSTRING_PTR(str),len)) 
			{ return failobj; }
		else {
			ptr->pos+=len;
			return Qnil;
		}
	}else{
		 rb_raise(rb_eArgError, "called seq when not in string");
	}
}
//TODO handle unicode
#define mbs_UTF8(c) mbsize_UTF8[c/16]
char mbsize_UTF8[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,3,4};
VALUE AmethystCore_anything(VALUE self){
  cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	VALUE r;
	if(TYPE(ptr->src)==T_STRING){
		if (ptr->pos>=ptr->len) return failobj;
		int cs=1; //mbs_UTF8(ptr->str[ptr->pos]);
		r=rb_str_new(ptr->str+ptr->pos,cs);
		ptr->pos+=cs;
	}else{
		r= ame_curobj2(ptr);
		ptr->pos++;
	}
	return r;
}

amethystCore__reverse(VALUE self,VALUE reversed){
	cstruct  *ptr;
  Data_Get_Struct(self,cstruct,ptr);
	int len;
	if (TYPE(reversed)==T_STRING){
		ptr->str=RSTRING_PTR(reversed);
		len=RSTRING_LEN(reversed);
	} else {
		ptr->ary=RARRAY_PTR(reversed);
		len=RARRAY_LEN(reversed);
	}
	int tmppos=ptr->pos,tmplen=ptr->len;
	ptr->pos=len-tmplen; ptr->len=len-tmppos;
	return Qnil;
}

VALUE AmethystCore_append(VALUE self,VALUE ary,VALUE el){
	if (TYPE(ary)!=T_ARRAY){
	 rb_raise(rb_eArgError,"first argument is not array");
	}
	if (TYPE(el)==T_ARRAY){
		rb_ary_concat(ary,el);
	}else{
		rb_ary_push(ary,el);
	}
	return ary;
}
void ame_mark(cstruct *ptr){ rb_gc_mark( ptr->memgc);}
void ame_free(cstruct* ptr){ free(ptr);}
VALUE ame_new(VALUE clas){
	cstruct *ptr=ALLOC(cstruct);
	ptr->mem=NULL;ptr->memgc=Qnil;
  VALUE o=Data_Wrap_Struct(clas,ame_mark,ame_free,ptr);
	VALUE argv[0]; rb_obj_call_init(o,0,argv);
	return o;
}

void bind_mark(bind_struct *ptr){
	int i;for(i=0;i<ptr->size;i++) if(ptr->ary[i]) rb_gc_mark(ptr->ary[i]);
}
void bind_free(bind_struct *ptr){
	free(ptr->ary);
	free(ptr);
}
static inline VALUE bind_reset(VALUE self){
  bind_struct* ptr;
  Data_Get_Struct(self,bind_struct,ptr);
	int i;
	for(i=0;i<ptr->size;i++) ptr->ary[i]=Qnil;
	return Qnil;
}

typedef struct {
	VALUE * ary;
	VALUE * res;
} bind_cache;
bind_cache * bind_cache_init(){
       bind_cache *b;
       b=malloc(sizeof(bind_cache));
       b->ary=calloc(1<<20,sizeof(VALUE));
       b->res=calloc(1<<20,sizeof(VALUE));

       return b;
}
void bind_cache_mark(bind_cache *b){int i;
       for(i=0;i<(1<<20);i++) if (b->ary[i])rb_gc_mark(b->ary[i]);
       for(i=0;i<(1<<20);i++) if (b->res[i])rb_gc_mark(b->res[i]);
}
void bind_cache_free(bind_cache *b){}

void normalize_stats();
VALUE report_normalize(VALUE self){
	normalize_stats();
	return Qnil;
}
extern bind_cache *cache_Bind;VALUE cache_Bind_gc;
VALUE normalize_Bind(VALUE,VALUE);
extern bind_cache *cache_Or;VALUE cache_Or_gc;
VALUE normalize_Or(VALUE,VALUE);
extern bind_cache *cache_Seq;VALUE cache_Seq_gc;
VALUE normalize_Seq(VALUE,VALUE);
extern bind_cache *cache_Act;VALUE cache_Act_gc;
VALUE normalize_Act(VALUE,VALUE);
extern bind_cache *cache_Array;VALUE cache_Array_gc;
extern bind_cache *cache_String;VALUE cache_String_gc;
extern bind_cache *cache_Apply;VALUE cache_Apply_gc;
VALUE normalize_Apply(VALUE,VALUE);


void init_normalize();
ID s_ary;
void Init_Ame(VALUE self){
  profile_report=fopen("profile_report","w");
	cache_Array=bind_cache_init(); 
  cache_Array_gc=Data_Wrap_Struct(amecore,bind_cache_mark,bind_cache_free,cache_Array);
	rb_global_variable(&cache_Array_gc);
	cache_String=bind_cache_init(); 
  cache_String_gc=Data_Wrap_Struct(amecore,bind_cache_mark,bind_cache_free,cache_String);
	rb_global_variable(&cache_String_gc);

	init_normalize();

	s_ary_get=rb_intern("[]");
	s_ary=rb_intern("@ary");
	s_to_a=rb_intern("to_a");
	failobj=rb_eval_string("FAIL");
	amecore=rb_define_class("AmethystCore",rb_cObject);
	rb_define_singleton_method(amecore,"new",ame_new,0);
	rb_define_singleton_method(amecore,"report_normalize",report_normalize,0);

	rb_define_method(amecore,"pos=",ame_setposrb,1);
	rb_define_method(amecore,"pos",ame_getposrb,0);
	rb_define_method(amecore,"len=",ame_setlenrb,1);
	rb_define_method(amecore,"len",ame_getlenrb,0);
	rb_define_method(amecore,"src=",ame_setsrc,1);
	rb_define_method(amecore,"src",ame_getsrc,0);
	
	rb_define_method(amecore,"_seq",AmethystCore__seq,1);
	rb_define_method(amecore,"anything",AmethystCore_anything,0);
	rb_define_method(amecore,"_append",AmethystCore_append,2);

	bindcls=rb_define_class("BindingClass",rb_cObject);
  rb_define_singleton_method(bindcls,"new",bind_new,1);
	rb_define_method(bindcls,"[]=",bind_asetrb,2);
	rb_define_method(bindcls,"[]",bind_agetrb,1);
	rb_define_method(bindcls,"reset",bind_reset,0);
}
