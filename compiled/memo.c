#include <ruby.h>
/* 
 * You can choose memory requirements as follows. We cache 2**20  elements by default.
 * -1    Memoization
 *  0    No memoization
 *  k>0  Use cache of with 2**k elements.
 * */
#define MEMORY 20
VALUE not_present;
typedef struct {
	int rule;VALUE src;int pos;VALUE val;int newpos;
} elem_struct;
typedef struct memo_struct {
		elem_struct *els;int *hits, *miss;
} memo_struct;
#if MEMORY==-1
static VALUE memo_test(memo_struct m,int rule,VALUE src,int pos){
}
static void memo_add(int rule,VALUE src,int pos,VALUE val){
}
#elif MEMORY==0
static memo_struct *memo_init(){
	memo_struct m;
	return m;
}
static VALUE memo_test(memo_struct m,int rule,VALUE src,int pos){
	return not_present;
}
static void memo_add(memo_struct m,int rule,VALUE src,int pos,VALUE val){
}
#else
static memo_struct *memo_init(){
	memo_struct *m=malloc(sizeof(memo_struct));
	m->hits=calloc(sizeof(int)*256,1);	m->miss=calloc(sizeof(int)*256,1);
	m->els=(elem_struct *) calloc(sizeof(elem_struct),1<<MEMORY);
	return m;
}
static int memo_hash(int rule,int src,int pos){return (src+rule*pos)&((1<<MEMORY)-1);}
static VALUE memo_value(memo_struct *m,int rule,VALUE src,int pos){
	elem_struct el=m->els[memo_hash(rule,src,pos)];
	if (el.rule==rule&& el.src==src && el.pos==pos) return el.val;
	return Qnil;
}
static int memo_pos(memo_struct *m,int rule,VALUE src,int pos){
	elem_struct el=m->els[memo_hash(rule,src,pos)];
	if (el.rule==rule&& el.src==src && el.pos==pos){ m->hits[rule]++; return el.newpos;
	} else {	                                       m->miss[rule]++; return -1;
  }
}
static void memo_add(memo_struct *m,int rule,VALUE src,int pos,VALUE val,int newpos){
	elem_struct el;
	el.rule=rule;el.src=src;el.pos=pos;el.val=val;el.newpos=newpos;
	m->els[memo_hash(rule,src,pos)]=el;
}


void memo_mark(memo_struct *m){ /*we want weak link to src so we dont mark it*/
	int i;for(i=0;i<(1<<MEMORY);i++) if(m->els[i].rule) {rb_gc_mark(m->els[i].src);rb_gc_mark(m->els[i].val);}
}
void memo_free(memo_struct *m){ free(m->els);free(m->hits);free(m->miss);free(m);}
#endif
