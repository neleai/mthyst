#include "ruby.h"
typedef struct {
  VALUE * ary;
  VALUE * ret;
} normalize_cache;

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
//        hash=((int) rb_iv_get(els[i],"@hash"))+11*hash;
					hash=els[i]+11*hash;
			}
			rb_iv_set(el,"@hash",LONG2FIX(hash/2));
			hash=hash&((1<<20)-1);
			if (el2=cache_Array->ret[hash]) {
				if (els_equal(el,el2)) return el2;
			}
			cache_Array->ret[hash]=el;
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
			if (el2=cache_String->ret[hash]) {
				if (els_equal(el,el2)) return el2;
			}
      cache_String->ret[hash]=el;
      return el;
		} else {
			return el;
		}
	}
int hits_Act=0;int miss_Act=0; normalize_cache *cache_Act;
VALUE normalize_Act(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@pred")>>6);hash=11*hash+(rb_iv_get(obj,"@pure")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Act->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@pred"),rb_iv_get(obj2,"@pred"))) goto next;if (!els_equal(rb_iv_get(obj,"@pure"),rb_iv_get(obj2,"@pure"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Act++;
		return cache_Act->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Act++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@pred")>>6);hash3=11*hash3+(rb_iv_get(obj,"@pure")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Act->ary[hash3]=obj3;
  	cache_Act->ret[hash3]=obj3;
	}
	cache_Act->ary[hash]=obj;
	cache_Act->ret[hash]=obj3;
	return obj3;
}
int hits_Apply=0;int miss_Apply=0; normalize_cache *cache_Apply;
VALUE normalize_Apply(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@name")>>6);hash=11*hash+(rb_iv_get(obj,"@clas")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Apply->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@clas"),rb_iv_get(obj2,"@clas"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Apply++;
		return cache_Apply->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Apply++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@name")>>6);hash3=11*hash3+(rb_iv_get(obj,"@clas")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Apply->ary[hash3]=obj3;
  	cache_Apply->ret[hash3]=obj3;
	}
	cache_Apply->ary[hash]=obj;
	cache_Apply->ret[hash]=obj3;
	return obj3;
}
int hits_Args=0;int miss_Args=0; normalize_cache *cache_Args;
VALUE normalize_Args(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Args->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Args++;
		return cache_Args->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Args++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Args->ary[hash3]=obj3;
  	cache_Args->ret[hash3]=obj3;
	}
	cache_Args->ary[hash]=obj;
	cache_Args->ret[hash]=obj3;
	return obj3;
}
int hits_Bind=0;int miss_Bind=0; normalize_cache *cache_Bind;
VALUE normalize_Bind(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@name")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Bind->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Bind++;
		return cache_Bind->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Bind++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@name")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Bind->ary[hash3]=obj3;
  	cache_Bind->ret[hash3]=obj3;
	}
	cache_Bind->ary[hash]=obj;
	cache_Bind->ret[hash]=obj3;
	return obj3;
}
int hits_Bnding=0;int miss_Bnding=0; normalize_cache *cache_Bnding;
VALUE normalize_Bnding(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Bnding->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Bnding++;
		return cache_Bnding->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Bnding++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Bnding->ary[hash3]=obj3;
  	cache_Bnding->ret[hash3]=obj3;
	}
	cache_Bnding->ary[hash]=obj;
	cache_Bnding->ret[hash]=obj3;
	return obj3;
}
int hits_CAct=0;int miss_CAct=0; normalize_cache *cache_CAct;
VALUE normalize_CAct(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_CAct->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_CAct++;
		return cache_CAct->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_CAct++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_CAct->ary[hash3]=obj3;
  	cache_CAct->ret[hash3]=obj3;
	}
	cache_CAct->ary[hash]=obj;
	cache_CAct->ret[hash]=obj3;
	return obj3;
}
int hits_Comment=0;int miss_Comment=0; normalize_cache *cache_Comment;
VALUE normalize_Comment(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Comment->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Comment++;
		return cache_Comment->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Comment++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Comment->ary[hash3]=obj3;
  	cache_Comment->ret[hash3]=obj3;
	}
	cache_Comment->ary[hash]=obj;
	cache_Comment->ret[hash]=obj3;
	return obj3;
}
int hits_Cut=0;int miss_Cut=0; normalize_cache *cache_Cut;
VALUE normalize_Cut(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Cut->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Cut++;
		return cache_Cut->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Cut++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Cut->ary[hash3]=obj3;
  	cache_Cut->ret[hash3]=obj3;
	}
	cache_Cut->ary[hash]=obj;
	cache_Cut->ret[hash]=obj3;
	return obj3;
}
int hits_Lambda=0;int miss_Lambda=0; normalize_cache *cache_Lambda;
VALUE normalize_Lambda(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Lambda->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Lambda++;
		return cache_Lambda->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Lambda++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Lambda->ary[hash3]=obj3;
  	cache_Lambda->ret[hash3]=obj3;
	}
	cache_Lambda->ary[hash]=obj;
	cache_Lambda->ret[hash]=obj3;
	return obj3;
}
int hits_Global=0;int miss_Global=0; normalize_cache *cache_Global;
VALUE normalize_Global(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Global->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Global++;
		return cache_Global->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Global++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Global->ary[hash3]=obj3;
  	cache_Global->ret[hash3]=obj3;
	}
	cache_Global->ary[hash]=obj;
	cache_Global->ret[hash]=obj3;
	return obj3;
}
int hits_Key=0;int miss_Key=0; normalize_cache *cache_Key;
VALUE normalize_Key(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Key->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Key++;
		return cache_Key->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Key++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Key->ary[hash3]=obj3;
  	cache_Key->ret[hash3]=obj3;
	}
	cache_Key->ary[hash]=obj;
	cache_Key->ret[hash]=obj3;
	return obj3;
}
int hits_Local=0;int miss_Local=0; normalize_cache *cache_Local;
VALUE normalize_Local(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@ssano")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Local->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ssano"),rb_iv_get(obj2,"@ssano"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Local++;
		return cache_Local->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Local++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@ssano")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Local->ary[hash3]=obj3;
  	cache_Local->ret[hash3]=obj3;
	}
	cache_Local->ary[hash]=obj;
	cache_Local->ret[hash]=obj3;
	return obj3;
}
int hits_Lookahead=0;int miss_Lookahead=0; normalize_cache *cache_Lookahead;
VALUE normalize_Lookahead(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Lookahead->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Lookahead++;
		return cache_Lookahead->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Lookahead++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Lookahead->ary[hash3]=obj3;
  	cache_Lookahead->ret[hash3]=obj3;
	}
	cache_Lookahead->ary[hash]=obj;
	cache_Lookahead->ret[hash]=obj3;
	return obj3;
}
int hits_Many=0;int miss_Many=0; normalize_cache *cache_Many;
VALUE normalize_Many(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@has_stop")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Many->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@has_stop"),rb_iv_get(obj2,"@has_stop"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Many++;
		return cache_Many->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Many++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@has_stop")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Many->ary[hash3]=obj3;
  	cache_Many->ret[hash3]=obj3;
	}
	cache_Many->ary[hash]=obj;
	cache_Many->ret[hash]=obj3;
	return obj3;
}
int hits_Or=0;int miss_Or=0; normalize_cache *cache_Or;
VALUE normalize_Or(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@has_cut")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Or->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@has_cut"),rb_iv_get(obj2,"@has_cut"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Or++;
		return cache_Or->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Or++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@has_cut")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Or->ary[hash3]=obj3;
  	cache_Or->ret[hash3]=obj3;
	}
	cache_Or->ary[hash]=obj;
	cache_Or->ret[hash]=obj3;
	return obj3;
}
int hits_Pass=0;int miss_Pass=0; normalize_cache *cache_Pass;
VALUE normalize_Pass(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@var")>>6);hash=11*hash+(rb_iv_get(obj,"@to")>>6);hash=11*hash+(rb_iv_get(obj,"@enter")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Pass->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@var"),rb_iv_get(obj2,"@var"))) goto next;if (!els_equal(rb_iv_get(obj,"@to"),rb_iv_get(obj2,"@to"))) goto next;if (!els_equal(rb_iv_get(obj,"@enter"),rb_iv_get(obj2,"@enter"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Pass++;
		return cache_Pass->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Pass++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@var")>>6);hash3=11*hash3+(rb_iv_get(obj,"@to")>>6);hash3=11*hash3+(rb_iv_get(obj,"@enter")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Pass->ary[hash3]=obj3;
  	cache_Pass->ret[hash3]=obj3;
	}
	cache_Pass->ary[hash]=obj;
	cache_Pass->ret[hash]=obj3;
	return obj3;
}
int hits_Result=0;int miss_Result=0; normalize_cache *cache_Result;
VALUE normalize_Result(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	hash=11*hash+(rb_iv_get(obj,"@name")>>6);hash=11*hash+(rb_iv_get(obj,"@varnames")>>6);hash=11*hash+(rb_iv_get(obj,"@vars")>>6);
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Result->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@name"),rb_iv_get(obj2,"@name"))) goto next;if (!els_equal(rb_iv_get(obj,"@varnames"),rb_iv_get(obj2,"@varnames"))) goto next;if (!els_equal(rb_iv_get(obj,"@vars"),rb_iv_get(obj2,"@vars"))) goto next;if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Result++;
		return cache_Result->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Result++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		hash3=11*hash3+(rb_iv_get(obj,"@name")>>6);hash3=11*hash3+(rb_iv_get(obj,"@varnames")>>6);hash3=11*hash3+(rb_iv_get(obj,"@vars")>>6);
		hash3=hash3&((1<<20)-1);
		cache_Result->ary[hash3]=obj3;
  	cache_Result->ret[hash3]=obj3;
	}
	cache_Result->ary[hash]=obj;
	cache_Result->ret[hash]=obj3;
	return obj3;
}
int hits_Seq=0;int miss_Seq=0; normalize_cache *cache_Seq;
VALUE normalize_Seq(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Seq->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Seq++;
		return cache_Seq->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Seq++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Seq->ary[hash3]=obj3;
  	cache_Seq->ret[hash3]=obj3;
	}
	cache_Seq->ary[hash]=obj;
	cache_Seq->ret[hash]=obj3;
	return obj3;
}
int hits_Stop=0;int miss_Stop=0; normalize_cache *cache_Stop;
VALUE normalize_Stop(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Stop->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Stop++;
		return cache_Stop->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Stop++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Stop->ary[hash3]=obj3;
  	cache_Stop->ret[hash3]=obj3;
	}
	cache_Stop->ary[hash]=obj;
	cache_Stop->ret[hash]=obj3;
	return obj3;
}
int hits_Strin=0;int miss_Strin=0; normalize_cache *cache_Strin;
VALUE normalize_Strin(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Strin->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Strin++;
		return cache_Strin->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Strin++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Strin->ary[hash3]=obj3;
  	cache_Strin->ret[hash3]=obj3;
	}
	cache_Strin->ary[hash]=obj;
	cache_Strin->ret[hash]=obj3;
	return obj3;
}
int hits_Switch_Char=0;int miss_Switch_Char=0; normalize_cache *cache_Switch_Char;
VALUE normalize_Switch_Char(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Switch_Char->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Switch_Char++;
		return cache_Switch_Char->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Switch_Char++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Switch_Char->ary[hash3]=obj3;
  	cache_Switch_Char->ret[hash3]=obj3;
	}
	cache_Switch_Char->ary[hash]=obj;
	cache_Switch_Char->ret[hash]=obj3;
	return obj3;
}
int hits_Switch_Clas=0;int miss_Switch_Clas=0; normalize_cache *cache_Switch_Clas;
VALUE normalize_Switch_Clas(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Switch_Clas->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Switch_Clas++;
		return cache_Switch_Clas->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Switch_Clas++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Switch_Clas->ary[hash3]=obj3;
  	cache_Switch_Clas->ret[hash3]=obj3;
	}
	cache_Switch_Clas->ary[hash]=obj;
	cache_Switch_Clas->ret[hash]=obj3;
	return obj3;
}
int hits_Switch_Or=0;int miss_Switch_Or=0; normalize_cache *cache_Switch_Or;
VALUE normalize_Switch_Or(VALUE self,VALUE obj){int i;
	int hash=0;int len,len2,len3;VALUE *els,*els2,*els3;
	VALUE ary=rb_iv_get(obj,"@ary");
	if (rb_obj_frozen_p(obj)!=Qtrue){
		ary=normalize_el(ary);
		rb_iv_set(obj,"@ary",ary);
		rb_obj_freeze(obj);
	}
	hash=11*hash+rb_iv_get(ary,"@hash");
	
	hash=hash&((1<<20)-1);

	VALUE obj2=cache_Switch_Or->ary[hash];
	if((int)obj2){
		if (!els_equal(rb_iv_get(obj,"@ary"),rb_iv_get(obj2,"@ary"))) goto next;
		hits_Switch_Or++;
		return cache_Switch_Or->ret[hash];
		next:;
	}
  VALUE obj3=rb_funcall(obj,rb_intern("normalize2"),0);
	miss_Switch_Or++;
	if (rb_obj_is_kind_of(obj3, rb_obj_class(obj))){
		int hash3=0;
		VALUE ary3=rb_iv_get(obj3,"@ary");
		if (rb_obj_frozen_p(obj3)!=Qtrue){
			ary3=normalize_el(ary3);
			rb_iv_set(obj3,"@ary",ary3);
			rb_obj_freeze(obj3);
		}
		hash3=11*hash3+rb_iv_get(ary3,"@hash");
		
		hash3=hash3&((1<<20)-1);
		cache_Switch_Or->ary[hash3]=obj3;
  	cache_Switch_Or->ret[hash3]=obj3;
	}
	cache_Switch_Or->ary[hash]=obj;
	cache_Switch_Or->ret[hash]=obj3;
	return obj3;
}
