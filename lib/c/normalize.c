
#include "ruby.h"
#include <stdio.h>
extern FILE * profile_report;
typedef struct {
  VALUE * ary;
  VALUE * ret;
} normalize_cache;
typedef struct {
  VALUE *ary;
  int no;
} gc_objs; gc_objs* gc_obj;

	int els_equal(VALUE el,VALUE el2){
		if (el==el2) return 1;
		if (rb_iv_get(el,"@hash")!=rb_iv_get(el2,"@hash")) return 0;
		if (TYPE(el)!=TYPE(el2)) return 0;
		if(TYPE(el)==T_ARRAY) {int i;
			int len=RARRAY_LEN(el);
	    VALUE *els=RARRAY_PTR(el);
			int len2=RARRAY_LEN(el2);
  	  VALUE *els2=RARRAY_PTR(el2);
			if (len!=len2) return 0;
			for(i=0;i<len;i++) if(!els_equal(els[i],els2[i])) return 0;
			return 1;
		} else if (TYPE(el)==T_STRING) {
			int len=RSTRING_LEN(el);
			int len2=RSTRING_LEN(el2);
			if (len!=len2) return 0;
			return strncmp(RSTRING_PTR(el),RSTRING_PTR(el2),len)==0;
		} else {
			return 0;
		}
	}
	normalize_cache *cache_Array;  normalize_cache *cache_String;
	VALUE normalize_el(VALUE el){ VALUE el2;int len,len2;VALUE *els,*els2;int i;
		if(TYPE(el)==T_ARRAY){
			if (rb_iv_get(el,"@hash")!=Qnil) return el;
			int hash=0;
			len=RARRAY_LEN(el);
	    els=RARRAY_PTR(el);
  	  for (i=0;i<len;i++){ 
				els[i]=normalize_el(els[i]);
					if (TYPE(els[i])==T_ARRAY || TYPE(els[i])==T_STRING)
	        	hash=((int) rb_iv_get(els[i],"@hash"))+11*hash;
					else
						hash=els[i]+11*hash;
			}
			rb_iv_set(el,"@hash",LONG2FIX(hash/2));
			hash=hash&((1<<20)-1);
			while (el2=cache_Array->ret[hash]) {
				if (els_equal(el,el2)) return el2;
				hash=(hash+1)&((1<<20)-1);
			}
			cache_Array->ret[hash]=el;
      gc_obj->ary[gc_obj->no++]=el;
			return el;
		} else if (TYPE(el)==T_STRING){
      if (rb_iv_get(el,"@hash")!=Qnil) return el;
      int hash=0;
      len=RSTRING_LEN(el);
      char *chrs=RSTRING_PTR(el);
      for (i=0;i<len;i++) hash=((int) chrs[i])+11*hash;//TODO use long
			rb_iv_set(el,"@hash",LONG2FIX(hash/2));
      hash=hash&((1<<20)-1);
			el2=cache_String->ret[hash];
			while (el2=cache_String->ret[hash]) {
				if (els_equal(el,el2)) return el2;
				hash=(hash+1)&((1<<20)-1);
			}
      cache_String->ret[hash]=el;
      gc_obj->ary[gc_obj->no++]=el;
      return el;
		} else {
			return el;
		}
	}
int hits_Act=0;int miss_Act=0; normalize_cache *cache_Act;
VALUE normalize_Act(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@pred",normalize_el(rb_iv_get(obj,"@pred")));hash=11*hash+rb_iv_get(obj,"@pred");rb_iv_set(obj,"@pure",normalize_el(rb_iv_get(obj,"@pure")));hash=11*hash+rb_iv_get(obj,"@pure");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Act->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@pred"),rb_iv_get(obj2,"@pred"))) goto next;if (!els_equal(rb_iv_get(obj,"@pure"),rb_iv_get(obj2,"@pure"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Act++;
	 	return cache_Act->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Act++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@pred",normalize_el(rb_iv_get(obj3,"@pred")));hash3=11*hash3+rb_iv_get(obj3,"@pred");rb_iv_set(obj3,"@pure",normalize_el(rb_iv_get(obj3,"@pure")));hash3=11*hash3+rb_iv_get(obj3,"@pure");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Act->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@pred"),rb_iv_get(obj2,"@pred"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@pure"),rb_iv_get(obj2,"@pure"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Act->ary[hash3]=obj3;
  	cache_Act->ret[hash3]=obj3;
	}
	cache_Act->ary[hash]=obj;
	cache_Act->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Act(VALUE self ,VALUE pred,VALUE pure,VALUE ary){
	int hash=0;
	pred=normalize_el(pred);hash=11*hash+pred;pure=normalize_el(pure);hash=11*hash+pure;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Act->ary[hash];
  if((int)obj2){
    if (!els_equal(pred,rb_iv_get(obj2,"@pred"))) goto next;if (!els_equal(pure,rb_iv_get(obj2,"@pure"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Act++;
    return cache_Act->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Act")));
	rb_iv_set(obj3,"@pred",pred);rb_iv_set(obj3,"@pure",pure);rb_iv_set(obj3,"@ary",ary);
	return normalize_Act(obj3);
}
int hits_Apply=0;int miss_Apply=0; normalize_cache *cache_Apply;
VALUE normalize_Apply(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@name",normalize_el(rb_iv_get(obj,"@name")));hash=11*hash+rb_iv_get(obj,"@name");rb_iv_set(obj,"@clas",normalize_el(rb_iv_get(obj,"@clas")));hash=11*hash+rb_iv_get(obj,"@clas");rb_iv_set(obj,"@bound",normalize_el(rb_iv_get(obj,"@bound")));hash=11*hash+rb_iv_get(obj,"@bound");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Apply->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@clas"),rb_iv_get(obj2,"@clas"))) goto next;if (!els_equal(rb_iv_get(obj,"@bound"),rb_iv_get(obj2,"@bound"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Apply++;
	 	return cache_Apply->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Apply++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@name",normalize_el(rb_iv_get(obj3,"@name")));hash3=11*hash3+rb_iv_get(obj3,"@name");rb_iv_set(obj3,"@clas",normalize_el(rb_iv_get(obj3,"@clas")));hash3=11*hash3+rb_iv_get(obj3,"@clas");rb_iv_set(obj3,"@bound",normalize_el(rb_iv_get(obj3,"@bound")));hash3=11*hash3+rb_iv_get(obj3,"@bound");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Apply->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@name"),rb_iv_get(obj2,"@name"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@clas"),rb_iv_get(obj2,"@clas"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@bound"),rb_iv_get(obj2,"@bound"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Apply->ary[hash3]=obj3;
  	cache_Apply->ret[hash3]=obj3;
	}
	cache_Apply->ary[hash]=obj;
	cache_Apply->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Apply(VALUE self ,VALUE name,VALUE clas,VALUE bound,VALUE ary){
	int hash=0;
	name=normalize_el(name);hash=11*hash+name;clas=normalize_el(clas);hash=11*hash+clas;bound=normalize_el(bound);hash=11*hash+bound;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Apply->ary[hash];
  if((int)obj2){
    if (!els_equal(name,rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(clas,rb_iv_get(obj2,"@clas"))) goto next;if (!els_equal(bound,rb_iv_get(obj2,"@bound"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Apply++;
    return cache_Apply->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Apply")));
	rb_iv_set(obj3,"@name",name);rb_iv_set(obj3,"@clas",clas);rb_iv_set(obj3,"@bound",bound);rb_iv_set(obj3,"@ary",ary);
	return normalize_Apply(obj3);
}
int hits_Append_AST=0;int miss_Append_AST=0; normalize_cache *cache_Append_AST;
VALUE normalize_Append_AST(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@name",normalize_el(rb_iv_get(obj,"@name")));hash=11*hash+rb_iv_get(obj,"@name");rb_iv_set(obj,"@exp",normalize_el(rb_iv_get(obj,"@exp")));hash=11*hash+rb_iv_get(obj,"@exp");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Append_AST->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@exp"),rb_iv_get(obj2,"@exp"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Append_AST++;
	 	return cache_Append_AST->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Append_AST++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@name",normalize_el(rb_iv_get(obj3,"@name")));hash3=11*hash3+rb_iv_get(obj3,"@name");rb_iv_set(obj3,"@exp",normalize_el(rb_iv_get(obj3,"@exp")));hash3=11*hash3+rb_iv_get(obj3,"@exp");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Append_AST->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@name"),rb_iv_get(obj2,"@name"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@exp"),rb_iv_get(obj2,"@exp"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Append_AST->ary[hash3]=obj3;
  	cache_Append_AST->ret[hash3]=obj3;
	}
	cache_Append_AST->ary[hash]=obj;
	cache_Append_AST->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Append_AST(VALUE self ,VALUE name,VALUE exp,VALUE ary){
	int hash=0;
	name=normalize_el(name);hash=11*hash+name;exp=normalize_el(exp);hash=11*hash+exp;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Append_AST->ary[hash];
  if((int)obj2){
    if (!els_equal(name,rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(exp,rb_iv_get(obj2,"@exp"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Append_AST++;
    return cache_Append_AST->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Append_AST")));
	rb_iv_set(obj3,"@name",name);rb_iv_set(obj3,"@exp",exp);rb_iv_set(obj3,"@ary",ary);
	return normalize_Append_AST(obj3);
}
int hits_Args=0;int miss_Args=0; normalize_cache *cache_Args;
VALUE normalize_Args(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Args->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Args++;
	 	return cache_Args->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Args++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Args->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Args->ary[hash3]=obj3;
  	cache_Args->ret[hash3]=obj3;
	}
	cache_Args->ary[hash]=obj;
	cache_Args->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Args(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Args->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Args++;
    return cache_Args->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Args")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Args(obj3);
}
int hits_Bind=0;int miss_Bind=0; normalize_cache *cache_Bind;
VALUE normalize_Bind(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@name",normalize_el(rb_iv_get(obj,"@name")));hash=11*hash+rb_iv_get(obj,"@name");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Bind->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Bind++;
	 	return cache_Bind->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Bind++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@name",normalize_el(rb_iv_get(obj3,"@name")));hash3=11*hash3+rb_iv_get(obj3,"@name");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Bind->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@name"),rb_iv_get(obj2,"@name"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Bind->ary[hash3]=obj3;
  	cache_Bind->ret[hash3]=obj3;
	}
	cache_Bind->ary[hash]=obj;
	cache_Bind->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Bind(VALUE self ,VALUE name,VALUE ary){
	int hash=0;
	name=normalize_el(name);hash=11*hash+name;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Bind->ary[hash];
  if((int)obj2){
    if (!els_equal(name,rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Bind++;
    return cache_Bind->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Bind")));
	rb_iv_set(obj3,"@name",name);rb_iv_set(obj3,"@ary",ary);
	return normalize_Bind(obj3);
}
int hits_Bnding=0;int miss_Bnding=0; normalize_cache *cache_Bnding;
VALUE normalize_Bnding(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Bnding->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Bnding++;
	 	return cache_Bnding->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Bnding++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Bnding->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Bnding->ary[hash3]=obj3;
  	cache_Bnding->ret[hash3]=obj3;
	}
	cache_Bnding->ary[hash]=obj;
	cache_Bnding->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Bnding(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Bnding->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Bnding++;
    return cache_Bnding->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Bnding")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Bnding(obj3);
}
int hits_CAct=0;int miss_CAct=0; normalize_cache *cache_CAct;
VALUE normalize_CAct(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_CAct->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_CAct++;
	 	return cache_CAct->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_CAct++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_CAct->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_CAct->ary[hash3]=obj3;
  	cache_CAct->ret[hash3]=obj3;
	}
	cache_CAct->ary[hash]=obj;
	cache_CAct->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_CAct(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_CAct->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_CAct++;
    return cache_CAct->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("CAct")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_CAct(obj3);
}
int hits_Comment=0;int miss_Comment=0; normalize_cache *cache_Comment;
VALUE normalize_Comment(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Comment->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Comment++;
	 	return cache_Comment->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Comment++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Comment->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Comment->ary[hash3]=obj3;
  	cache_Comment->ret[hash3]=obj3;
	}
	cache_Comment->ary[hash]=obj;
	cache_Comment->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Comment(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Comment->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Comment++;
    return cache_Comment->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Comment")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Comment(obj3);
}
int hits_Cut=0;int miss_Cut=0; normalize_cache *cache_Cut;
VALUE normalize_Cut(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Cut->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Cut++;
	 	return cache_Cut->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Cut++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Cut->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Cut->ary[hash3]=obj3;
  	cache_Cut->ret[hash3]=obj3;
	}
	cache_Cut->ary[hash]=obj;
	cache_Cut->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Cut(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Cut->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Cut++;
    return cache_Cut->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Cut")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Cut(obj3);
}
int hits_Lambda=0;int miss_Lambda=0; normalize_cache *cache_Lambda;
VALUE normalize_Lambda(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Lambda->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Lambda++;
	 	return cache_Lambda->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Lambda++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Lambda->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Lambda->ary[hash3]=obj3;
  	cache_Lambda->ret[hash3]=obj3;
	}
	cache_Lambda->ary[hash]=obj;
	cache_Lambda->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Lambda(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Lambda->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Lambda++;
    return cache_Lambda->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Lambda")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Lambda(obj3);
}
int hits_Global=0;int miss_Global=0; normalize_cache *cache_Global;
VALUE normalize_Global(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Global->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Global++;
	 	return cache_Global->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Global++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Global->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Global->ary[hash3]=obj3;
  	cache_Global->ret[hash3]=obj3;
	}
	cache_Global->ary[hash]=obj;
	cache_Global->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Global(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Global->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Global++;
    return cache_Global->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Global")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Global(obj3);
}
int hits_Key=0;int miss_Key=0; normalize_cache *cache_Key;
VALUE normalize_Key(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Key->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Key++;
	 	return cache_Key->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Key++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Key->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Key->ary[hash3]=obj3;
  	cache_Key->ret[hash3]=obj3;
	}
	cache_Key->ary[hash]=obj;
	cache_Key->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Key(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Key->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Key++;
    return cache_Key->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Key")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Key(obj3);
}
int hits_Local=0;int miss_Local=0; normalize_cache *cache_Local;
VALUE normalize_Local(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ssano",normalize_el(rb_iv_get(obj,"@ssano")));hash=11*hash+rb_iv_get(obj,"@ssano");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Local->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ssano"),rb_iv_get(obj2,"@ssano"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Local++;
	 	return cache_Local->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Local++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ssano",normalize_el(rb_iv_get(obj3,"@ssano")));hash3=11*hash3+rb_iv_get(obj3,"@ssano");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Local->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ssano"),rb_iv_get(obj2,"@ssano"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Local->ary[hash3]=obj3;
  	cache_Local->ret[hash3]=obj3;
	}
	cache_Local->ary[hash]=obj;
	cache_Local->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Local(VALUE self ,VALUE ssano,VALUE ary){
	int hash=0;
	ssano=normalize_el(ssano);hash=11*hash+ssano;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Local->ary[hash];
  if((int)obj2){
    if (!els_equal(ssano,rb_iv_get(obj2,"@ssano"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Local++;
    return cache_Local->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Local")));
	rb_iv_set(obj3,"@ssano",ssano);rb_iv_set(obj3,"@ary",ary);
	return normalize_Local(obj3);
}
int hits_Lookahead=0;int miss_Lookahead=0; normalize_cache *cache_Lookahead;
VALUE normalize_Lookahead(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Lookahead->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Lookahead++;
	 	return cache_Lookahead->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Lookahead++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Lookahead->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Lookahead->ary[hash3]=obj3;
  	cache_Lookahead->ret[hash3]=obj3;
	}
	cache_Lookahead->ary[hash]=obj;
	cache_Lookahead->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Lookahead(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Lookahead->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Lookahead++;
    return cache_Lookahead->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Lookahead")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Lookahead(obj3);
}
int hits_Many=0;int miss_Many=0; normalize_cache *cache_Many;
VALUE normalize_Many(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Many->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Many++;
	 	return cache_Many->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Many++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Many->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Many->ary[hash3]=obj3;
  	cache_Many->ret[hash3]=obj3;
	}
	cache_Many->ary[hash]=obj;
	cache_Many->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Many(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Many->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Many++;
    return cache_Many->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Many")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Many(obj3);
}
int hits_Or=0;int miss_Or=0; normalize_cache *cache_Or;
VALUE normalize_Or(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@has_cut",normalize_el(rb_iv_get(obj,"@has_cut")));hash=11*hash+rb_iv_get(obj,"@has_cut");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Or->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@has_cut"),rb_iv_get(obj2,"@has_cut"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Or++;
	 	return cache_Or->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Or++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@has_cut",normalize_el(rb_iv_get(obj3,"@has_cut")));hash3=11*hash3+rb_iv_get(obj3,"@has_cut");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Or->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@has_cut"),rb_iv_get(obj2,"@has_cut"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Or->ary[hash3]=obj3;
  	cache_Or->ret[hash3]=obj3;
	}
	cache_Or->ary[hash]=obj;
	cache_Or->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Or(VALUE self ,VALUE has_cut,VALUE ary){
	int hash=0;
	has_cut=normalize_el(has_cut);hash=11*hash+has_cut;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Or->ary[hash];
  if((int)obj2){
    if (!els_equal(has_cut,rb_iv_get(obj2,"@has_cut"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Or++;
    return cache_Or->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Or")));
	rb_iv_set(obj3,"@has_cut",has_cut);rb_iv_set(obj3,"@ary",ary);
	return normalize_Or(obj3);
}
int hits_Pass=0;int miss_Pass=0; normalize_cache *cache_Pass;
VALUE normalize_Pass(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@var",normalize_el(rb_iv_get(obj,"@var")));hash=11*hash+rb_iv_get(obj,"@var");rb_iv_set(obj,"@to",normalize_el(rb_iv_get(obj,"@to")));hash=11*hash+rb_iv_get(obj,"@to");rb_iv_set(obj,"@enter",normalize_el(rb_iv_get(obj,"@enter")));hash=11*hash+rb_iv_get(obj,"@enter");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Pass->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@var"),rb_iv_get(obj2,"@var"))) goto next;if (!els_equal(rb_iv_get(obj,"@to"),rb_iv_get(obj2,"@to"))) goto next;if (!els_equal(rb_iv_get(obj,"@enter"),rb_iv_get(obj2,"@enter"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Pass++;
	 	return cache_Pass->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Pass++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@var",normalize_el(rb_iv_get(obj3,"@var")));hash3=11*hash3+rb_iv_get(obj3,"@var");rb_iv_set(obj3,"@to",normalize_el(rb_iv_get(obj3,"@to")));hash3=11*hash3+rb_iv_get(obj3,"@to");rb_iv_set(obj3,"@enter",normalize_el(rb_iv_get(obj3,"@enter")));hash3=11*hash3+rb_iv_get(obj3,"@enter");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Pass->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@var"),rb_iv_get(obj2,"@var"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@to"),rb_iv_get(obj2,"@to"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@enter"),rb_iv_get(obj2,"@enter"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Pass->ary[hash3]=obj3;
  	cache_Pass->ret[hash3]=obj3;
	}
	cache_Pass->ary[hash]=obj;
	cache_Pass->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Pass(VALUE self ,VALUE var,VALUE to,VALUE enter,VALUE ary){
	int hash=0;
	var=normalize_el(var);hash=11*hash+var;to=normalize_el(to);hash=11*hash+to;enter=normalize_el(enter);hash=11*hash+enter;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Pass->ary[hash];
  if((int)obj2){
    if (!els_equal(var,rb_iv_get(obj2,"@var"))) goto next;if (!els_equal(to,rb_iv_get(obj2,"@to"))) goto next;if (!els_equal(enter,rb_iv_get(obj2,"@enter"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Pass++;
    return cache_Pass->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Pass")));
	rb_iv_set(obj3,"@var",var);rb_iv_set(obj3,"@to",to);rb_iv_set(obj3,"@enter",enter);rb_iv_set(obj3,"@ary",ary);
	return normalize_Pass(obj3);
}
int hits_Result=0;int miss_Result=0; normalize_cache *cache_Result;
VALUE normalize_Result(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@name",normalize_el(rb_iv_get(obj,"@name")));hash=11*hash+rb_iv_get(obj,"@name");rb_iv_set(obj,"@varnames",normalize_el(rb_iv_get(obj,"@varnames")));hash=11*hash+rb_iv_get(obj,"@varnames");rb_iv_set(obj,"@vars",normalize_el(rb_iv_get(obj,"@vars")));hash=11*hash+rb_iv_get(obj,"@vars");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Result->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@varnames"),rb_iv_get(obj2,"@varnames"))) goto next;if (!els_equal(rb_iv_get(obj,"@vars"),rb_iv_get(obj2,"@vars"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Result++;
	 	return cache_Result->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Result++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@name",normalize_el(rb_iv_get(obj3,"@name")));hash3=11*hash3+rb_iv_get(obj3,"@name");rb_iv_set(obj3,"@varnames",normalize_el(rb_iv_get(obj3,"@varnames")));hash3=11*hash3+rb_iv_get(obj3,"@varnames");rb_iv_set(obj3,"@vars",normalize_el(rb_iv_get(obj3,"@vars")));hash3=11*hash3+rb_iv_get(obj3,"@vars");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Result->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@name"),rb_iv_get(obj2,"@name"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@varnames"),rb_iv_get(obj2,"@varnames"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@vars"),rb_iv_get(obj2,"@vars"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Result->ary[hash3]=obj3;
  	cache_Result->ret[hash3]=obj3;
	}
	cache_Result->ary[hash]=obj;
	cache_Result->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Result(VALUE self ,VALUE name,VALUE varnames,VALUE vars,VALUE ary){
	int hash=0;
	name=normalize_el(name);hash=11*hash+name;varnames=normalize_el(varnames);hash=11*hash+varnames;vars=normalize_el(vars);hash=11*hash+vars;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Result->ary[hash];
  if((int)obj2){
    if (!els_equal(name,rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(varnames,rb_iv_get(obj2,"@varnames"))) goto next;if (!els_equal(vars,rb_iv_get(obj2,"@vars"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Result++;
    return cache_Result->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Result")));
	rb_iv_set(obj3,"@name",name);rb_iv_set(obj3,"@varnames",varnames);rb_iv_set(obj3,"@vars",vars);rb_iv_set(obj3,"@ary",ary);
	return normalize_Result(obj3);
}
int hits_Rule=0;int miss_Rule=0; normalize_cache *cache_Rule;
VALUE normalize_Rule(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@name",normalize_el(rb_iv_get(obj,"@name")));hash=11*hash+rb_iv_get(obj,"@name");rb_iv_set(obj,"@args",normalize_el(rb_iv_get(obj,"@args")));hash=11*hash+rb_iv_get(obj,"@args");rb_iv_set(obj,"@locals",normalize_el(rb_iv_get(obj,"@locals")));hash=11*hash+rb_iv_get(obj,"@locals");rb_iv_set(obj,"@body",normalize_el(rb_iv_get(obj,"@body")));hash=11*hash+rb_iv_get(obj,"@body");rb_iv_set(obj,"@cfg",normalize_el(rb_iv_get(obj,"@cfg")));hash=11*hash+rb_iv_get(obj,"@cfg");rb_iv_set(obj,"@reachable",normalize_el(rb_iv_get(obj,"@reachable")));hash=11*hash+rb_iv_get(obj,"@reachable");rb_iv_set(obj,"@bnding",normalize_el(rb_iv_get(obj,"@bnding")));hash=11*hash+rb_iv_get(obj,"@bnding");rb_iv_set(obj,"@consts",normalize_el(rb_iv_get(obj,"@consts")));hash=11*hash+rb_iv_get(obj,"@consts");rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Rule->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@args"),rb_iv_get(obj2,"@args"))) goto next;if (!els_equal(rb_iv_get(obj,"@locals"),rb_iv_get(obj2,"@locals"))) goto next;if (!els_equal(rb_iv_get(obj,"@body"),rb_iv_get(obj2,"@body"))) goto next;if (!els_equal(rb_iv_get(obj,"@cfg"),rb_iv_get(obj2,"@cfg"))) goto next;if (!els_equal(rb_iv_get(obj,"@reachable"),rb_iv_get(obj2,"@reachable"))) goto next;if (!els_equal(rb_iv_get(obj,"@bnding"),rb_iv_get(obj2,"@bnding"))) goto next;if (!els_equal(rb_iv_get(obj,"@consts"),rb_iv_get(obj2,"@consts"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Rule++;
	 	return cache_Rule->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Rule++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@name",normalize_el(rb_iv_get(obj3,"@name")));hash3=11*hash3+rb_iv_get(obj3,"@name");rb_iv_set(obj3,"@args",normalize_el(rb_iv_get(obj3,"@args")));hash3=11*hash3+rb_iv_get(obj3,"@args");rb_iv_set(obj3,"@locals",normalize_el(rb_iv_get(obj3,"@locals")));hash3=11*hash3+rb_iv_get(obj3,"@locals");rb_iv_set(obj3,"@body",normalize_el(rb_iv_get(obj3,"@body")));hash3=11*hash3+rb_iv_get(obj3,"@body");rb_iv_set(obj3,"@cfg",normalize_el(rb_iv_get(obj3,"@cfg")));hash3=11*hash3+rb_iv_get(obj3,"@cfg");rb_iv_set(obj3,"@reachable",normalize_el(rb_iv_get(obj3,"@reachable")));hash3=11*hash3+rb_iv_get(obj3,"@reachable");rb_iv_set(obj3,"@bnding",normalize_el(rb_iv_get(obj3,"@bnding")));hash3=11*hash3+rb_iv_get(obj3,"@bnding");rb_iv_set(obj3,"@consts",normalize_el(rb_iv_get(obj3,"@consts")));hash3=11*hash3+rb_iv_get(obj3,"@consts");rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Rule->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@name"),rb_iv_get(obj2,"@name"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@args"),rb_iv_get(obj2,"@args"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@locals"),rb_iv_get(obj2,"@locals"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@body"),rb_iv_get(obj2,"@body"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@cfg"),rb_iv_get(obj2,"@cfg"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@reachable"),rb_iv_get(obj2,"@reachable"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@bnding"),rb_iv_get(obj2,"@bnding"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@consts"),rb_iv_get(obj2,"@consts"))) goto next2;if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Rule->ary[hash3]=obj3;
  	cache_Rule->ret[hash3]=obj3;
	}
	cache_Rule->ary[hash]=obj;
	cache_Rule->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Rule(VALUE self ,VALUE name,VALUE args,VALUE locals,VALUE body,VALUE cfg,VALUE reachable,VALUE bnding,VALUE consts,VALUE ary){
	int hash=0;
	name=normalize_el(name);hash=11*hash+name;args=normalize_el(args);hash=11*hash+args;locals=normalize_el(locals);hash=11*hash+locals;body=normalize_el(body);hash=11*hash+body;cfg=normalize_el(cfg);hash=11*hash+cfg;reachable=normalize_el(reachable);hash=11*hash+reachable;bnding=normalize_el(bnding);hash=11*hash+bnding;consts=normalize_el(consts);hash=11*hash+consts;ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Rule->ary[hash];
  if((int)obj2){
    if (!els_equal(name,rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(args,rb_iv_get(obj2,"@args"))) goto next;if (!els_equal(locals,rb_iv_get(obj2,"@locals"))) goto next;if (!els_equal(body,rb_iv_get(obj2,"@body"))) goto next;if (!els_equal(cfg,rb_iv_get(obj2,"@cfg"))) goto next;if (!els_equal(reachable,rb_iv_get(obj2,"@reachable"))) goto next;if (!els_equal(bnding,rb_iv_get(obj2,"@bnding"))) goto next;if (!els_equal(consts,rb_iv_get(obj2,"@consts"))) goto next;if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Rule++;
    return cache_Rule->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Rule")));
	rb_iv_set(obj3,"@name",name);rb_iv_set(obj3,"@args",args);rb_iv_set(obj3,"@locals",locals);rb_iv_set(obj3,"@body",body);rb_iv_set(obj3,"@cfg",cfg);rb_iv_set(obj3,"@reachable",reachable);rb_iv_set(obj3,"@bnding",bnding);rb_iv_set(obj3,"@consts",consts);rb_iv_set(obj3,"@ary",ary);
	return normalize_Rule(obj3);
}
int hits_Seq=0;int miss_Seq=0; normalize_cache *cache_Seq;
VALUE normalize_Seq(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Seq->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Seq++;
	 	return cache_Seq->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Seq++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Seq->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Seq->ary[hash3]=obj3;
  	cache_Seq->ret[hash3]=obj3;
	}
	cache_Seq->ary[hash]=obj;
	cache_Seq->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Seq(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Seq->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Seq++;
    return cache_Seq->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Seq")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Seq(obj3);
}
int hits_Stop=0;int miss_Stop=0; normalize_cache *cache_Stop;
VALUE normalize_Stop(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Stop->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Stop++;
	 	return cache_Stop->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Stop++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Stop->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Stop->ary[hash3]=obj3;
  	cache_Stop->ret[hash3]=obj3;
	}
	cache_Stop->ary[hash]=obj;
	cache_Stop->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Stop(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Stop->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Stop++;
    return cache_Stop->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Stop")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Stop(obj3);
}
int hits_Strin=0;int miss_Strin=0; normalize_cache *cache_Strin;
VALUE normalize_Strin(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Strin->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Strin++;
	 	return cache_Strin->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Strin++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Strin->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Strin->ary[hash3]=obj3;
  	cache_Strin->ret[hash3]=obj3;
	}
	cache_Strin->ary[hash]=obj;
	cache_Strin->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Strin(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Strin->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Strin++;
    return cache_Strin->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Strin")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Strin(obj3);
}
int hits_Switch_Char=0;int miss_Switch_Char=0; normalize_cache *cache_Switch_Char;
VALUE normalize_Switch_Char(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Switch_Char->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Switch_Char++;
	 	return cache_Switch_Char->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Switch_Char++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Switch_Char->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Switch_Char->ary[hash3]=obj3;
  	cache_Switch_Char->ret[hash3]=obj3;
	}
	cache_Switch_Char->ary[hash]=obj;
	cache_Switch_Char->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Switch_Char(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Switch_Char->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Switch_Char++;
    return cache_Switch_Char->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Switch_Char")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Switch_Char(obj3);
}
int hits_Switch_Clas=0;int miss_Switch_Clas=0; normalize_cache *cache_Switch_Clas;
VALUE normalize_Switch_Clas(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Switch_Clas->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Switch_Clas++;
	 	return cache_Switch_Clas->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Switch_Clas++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Switch_Clas->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Switch_Clas->ary[hash3]=obj3;
  	cache_Switch_Clas->ret[hash3]=obj3;
	}
	cache_Switch_Clas->ary[hash]=obj;
	cache_Switch_Clas->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Switch_Clas(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Switch_Clas->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Switch_Clas++;
    return cache_Switch_Clas->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Switch_Clas")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Switch_Clas(obj3);
}
int hits_Switch_Or=0;int miss_Switch_Or=0; normalize_cache *cache_Switch_Or;
VALUE normalize_Switch_Or(VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;VALUE obj2;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)==Qtrue)
		obj=rb_obj_dup(obj);
	rb_iv_set(obj,"@ary",normalize_el(rb_iv_get(obj,"@ary")));hash=11*hash+rb_iv_get(obj,"@ary");
	rb_iv_set(obj,"@hash",LONG2FIX(hash));
	rb_obj_freeze(obj);
	hash=hash&((1<<20)-1);
  while(obj2=cache_Switch_Or->ary[hash]){
	 	if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
	 	hits_Switch_Or++;
	 	return cache_Switch_Or->ret[hash];
	 	next:;
    hash=(hash+1)&((1<<20)-1);
  }
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Switch_Or++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
	  if (rb_obj_frozen_p(obj3)==Qtrue)
	    obj3=rb_obj_dup(obj3);
	  rb_iv_set(obj3,"@ary",normalize_el(rb_iv_get(obj3,"@ary")));hash3=11*hash3+rb_iv_get(obj3,"@ary");
  	rb_iv_set(obj3,"@hash",LONG2FIX(hash3));
    rb_obj_freeze(obj3);    
		hash3=hash3&((1<<20)-1);
    while(obj2=cache_Switch_Or->ary[hash3]){
	   	if (!els_equal(rb_iv_get(obj3,"@ary"),rb_iv_get(obj2,"@ary"))) goto next2;
	 	  break;
      next2:;
      hash3=(hash3+1)&((1<<20)-1);
    }
		cache_Switch_Or->ary[hash3]=obj3;
  	cache_Switch_Or->ret[hash3]=obj3;
	}
	cache_Switch_Or->ary[hash]=obj;
	cache_Switch_Or->ret[hash]=obj3;
  gc_obj->ary[gc_obj->no++]=obj;
  gc_obj->ary[gc_obj->no++]=obj3;
	return obj3;
}
VALUE create2_Switch_Or(VALUE self ,VALUE ary){
	int hash=0;
	ary=normalize_el(ary);hash=11*hash+ary;
	hash=hash&((1<<20)-1);
	VALUE obj2=cache_Switch_Or->ary[hash];
  if((int)obj2){
    if (!els_equal(ary,rb_iv_get(obj2,"@ary"))) goto next;
    hits_Switch_Or++;
    return cache_Switch_Or->ret[hash];
    next:;
  }
	VALUE obj3=rb_obj_alloc(rb_const_get(rb_cObject,rb_intern("Switch_Or")));
	rb_iv_set(obj3,"@ary",ary);
	return normalize_Switch_Or(obj3);
}

normalize_cache * normalize_cache_init(){
       normalize_cache *b;
       b=malloc(sizeof(normalize_cache));
       b->ary=calloc(1<<20,sizeof(VALUE));
       b->ret=calloc(1<<20,sizeof(VALUE));

       return b;
}
void normalize_cache_mark(normalize_cache *b){int i;
  for(i=0;i<gc_obj->no;i++) rb_gc_mark(gc_obj->ary[i]);
}
void normalize_cache_free(normalize_cache *b){}
VALUE gc_cache;
void init_normalize(){
cache_Act=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Act")),"normalize",normalize_Act,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Act")),"create2",create2_Act,3);cache_Apply=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Apply")),"normalize",normalize_Apply,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Apply")),"create2",create2_Apply,4);cache_Args=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Args")),"normalize",normalize_Args,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Args")),"create2",create2_Args,1);cache_Append_AST=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Append_AST")),"normalize",normalize_Append_AST,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Append_AST")),"create2",create2_Append_AST,3);cache_Bind=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Bind")),"normalize",normalize_Bind,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Bind")),"create2",create2_Bind,2);cache_Bnding=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Bnding")),"normalize",normalize_Bnding,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Bnding")),"create2",create2_Bnding,1);cache_CAct=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("CAct")),"normalize",normalize_CAct,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("CAct")),"create2",create2_CAct,1);cache_Comment=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Comment")),"normalize",normalize_Comment,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Comment")),"create2",create2_Comment,1);cache_Cut=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Cut")),"normalize",normalize_Cut,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Cut")),"create2",create2_Cut,1);cache_Lambda=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Lambda")),"normalize",normalize_Lambda,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Lambda")),"create2",create2_Lambda,1);cache_Global=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Global")),"normalize",normalize_Global,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Global")),"create2",create2_Global,1);cache_Key=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Key")),"normalize",normalize_Key,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Key")),"create2",create2_Key,1);cache_Local=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Local")),"normalize",normalize_Local,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Local")),"create2",create2_Local,2);cache_Lookahead=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Lookahead")),"normalize",normalize_Lookahead,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Lookahead")),"create2",create2_Lookahead,1);cache_Many=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Many")),"normalize",normalize_Many,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Many")),"create2",create2_Many,1);cache_Or=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Or")),"normalize",normalize_Or,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Or")),"create2",create2_Or,2);cache_Pass=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Pass")),"normalize",normalize_Pass,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Pass")),"create2",create2_Pass,4);cache_Result=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Result")),"normalize",normalize_Result,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Result")),"create2",create2_Result,4);cache_Rule=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Rule")),"normalize",normalize_Rule,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Rule")),"create2",create2_Rule,9);cache_Seq=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Seq")),"normalize",normalize_Seq,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Seq")),"create2",create2_Seq,1);cache_Stop=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Stop")),"normalize",normalize_Stop,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Stop")),"create2",create2_Stop,1);cache_Strin=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Strin")),"normalize",normalize_Strin,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Strin")),"create2",create2_Strin,1);cache_Switch_Char=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Switch_Char")),"normalize",normalize_Switch_Char,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Switch_Char")),"create2",create2_Switch_Char,1);cache_Switch_Clas=normalize_cache_init();
  rb_define_method(rb_const_get(rb_cObject,rb_intern("Switch_Clas")),"normalize",normalize_Switch_Clas,0);
	rb_define_singleton_method(rb_const_get(rb_cObject,rb_intern("Switch_Clas")),"create2",create2_Switch_Clas,1);
  gc_obj=malloc(sizeof(gc_objs));gc_obj->ary=calloc(1<<20,sizeof(VALUE));gc_obj->no=0;
	gc_cache=Data_Wrap_Struct(rb_cObject,normalize_cache_mark,normalize_cache_free,gc_obj);
	rb_global_variable(&gc_cache);

}
void normalize_stats(){
	fprintf(profile_report,"normalize Act hits: %i miss: %i\n",hits_Act,miss_Act);fprintf(profile_report,"normalize Apply hits: %i miss: %i\n",hits_Apply,miss_Apply);fprintf(profile_report,"normalize Args hits: %i miss: %i\n",hits_Args,miss_Args);fprintf(profile_report,"normalize Append_AST hits: %i miss: %i\n",hits_Append_AST,miss_Append_AST);fprintf(profile_report,"normalize Bind hits: %i miss: %i\n",hits_Bind,miss_Bind);fprintf(profile_report,"normalize Bnding hits: %i miss: %i\n",hits_Bnding,miss_Bnding);fprintf(profile_report,"normalize CAct hits: %i miss: %i\n",hits_CAct,miss_CAct);fprintf(profile_report,"normalize Comment hits: %i miss: %i\n",hits_Comment,miss_Comment);fprintf(profile_report,"normalize Cut hits: %i miss: %i\n",hits_Cut,miss_Cut);fprintf(profile_report,"normalize Lambda hits: %i miss: %i\n",hits_Lambda,miss_Lambda);fprintf(profile_report,"normalize Global hits: %i miss: %i\n",hits_Global,miss_Global);fprintf(profile_report,"normalize Key hits: %i miss: %i\n",hits_Key,miss_Key);fprintf(profile_report,"normalize Local hits: %i miss: %i\n",hits_Local,miss_Local);fprintf(profile_report,"normalize Lookahead hits: %i miss: %i\n",hits_Lookahead,miss_Lookahead);fprintf(profile_report,"normalize Many hits: %i miss: %i\n",hits_Many,miss_Many);fprintf(profile_report,"normalize Or hits: %i miss: %i\n",hits_Or,miss_Or);fprintf(profile_report,"normalize Pass hits: %i miss: %i\n",hits_Pass,miss_Pass);fprintf(profile_report,"normalize Result hits: %i miss: %i\n",hits_Result,miss_Result);fprintf(profile_report,"normalize Rule hits: %i miss: %i\n",hits_Rule,miss_Rule);fprintf(profile_report,"normalize Seq hits: %i miss: %i\n",hits_Seq,miss_Seq);fprintf(profile_report,"normalize Stop hits: %i miss: %i\n",hits_Stop,miss_Stop);fprintf(profile_report,"normalize Strin hits: %i miss: %i\n",hits_Strin,miss_Strin);fprintf(profile_report,"normalize Switch_Char hits: %i miss: %i\n",hits_Switch_Char,miss_Switch_Char);fprintf(profile_report,"normalize Switch_Clas hits: %i miss: %i\n",hits_Switch_Clas,miss_Switch_Clas);
}
