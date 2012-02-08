#include "ruby.h"
#include "../../compiled/cthyst.h"
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

extern int hits_Bind,hits_Seq,hits_Or,miss_Bind,miss_Seq,miss_Or;
VALUE report_normalize(VALUE self){
	printf("normalize bind hit: %i miss: %i\n",hits_Bind,miss_Bind );
	printf("normalize seq  hit: %i miss: %i\n",hits_Seq,miss_Seq);
	printf("normalize or   hit: %i miss: %i\n",hits_Or,miss_Or);

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

bind_cache *cache_Array;VALUE cache_Array_gc;

VALUE normalize_el(VALUE el){ VALUE el2,el3;int i;
	if (rb_obj_frozen_p(el)==Qtrue) return el;
	if (TYPE(el)==T_ARRAY){
		VALUE *ptr=RARRAY_PTR(el);
    int    len=RARRAY_LEN(el);
    int hash=0;
    for(i=0;i<len;i++) hash=((int)ptr[i]>>6)+11*hash;
		hash=hash&((1<<20)-1);
    if (el2=cache_Array->res[hash]){
      VALUE *ptr2=RARRAY_PTR(el2);
      int    len2=RARRAY_LEN(el2);
      if (len!=len2 ) goto next;
			for (i=0;i<len;i++) if (ptr[i]!=ptr2[i]) goto next;
			return el2;
			next:;
    }
		rb_obj_freeze(el);
    cache_Array->res[hash&((1<<20)-1)]=el;
  	return el;
	} else if (TYPE(el)==T_STRING) {
		return el;
	} else {
		return el;
	}
}

ID s_ary;
void Init_Ame(VALUE self){

	cache_Bind=bind_cache_init(); 
  cache_Bind_gc=Data_Wrap_Struct(amecore,bind_cache_mark,bind_cache_free,cache_Bind);
	rb_global_variable(&cache_Bind_gc);
	cache_Seq=bind_cache_init(); 
  cache_Seq_gc=Data_Wrap_Struct(amecore,bind_cache_mark,bind_cache_free,cache_Seq);
	rb_global_variable(&cache_Seq_gc);
	cache_Or=bind_cache_init(); 
  cache_Or_gc=Data_Wrap_Struct(amecore,bind_cache_mark,bind_cache_free,cache_Or);
	rb_global_variable(&cache_Or_gc);
	cache_Array=bind_cache_init(); 
  cache_Array_gc=Data_Wrap_Struct(amecore,bind_cache_mark,bind_cache_free,cache_Array);
	rb_global_variable(&cache_Array_gc);


	s_ary_get=rb_intern("[]");
	s_ary=rb_intern("@ary");
	s_to_a=rb_intern("to_a");
	failobj=rb_eval_string("FAIL");
	amecore=rb_define_class("AmethystCore",rb_cObject);
	rb_define_singleton_method(amecore,"new",ame_new,0);
	rb_define_singleton_method(amecore,"bind_normalize",normalize_Bind,1);
	rb_define_singleton_method(amecore,"seq_normalize",normalize_Seq,1);
	rb_define_singleton_method(amecore,"or_normalize",normalize_Or,1);
	rb_define_singleton_method(amecore,"act_normalize",normalize_Act,1);

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
