#include <ruby.h>
/* 
 * You can choose memory requirements as follows. We cache 2**16  elements by default.
 * -1    Memoization
 *  0    No memoization
 *  k>0  Use cache of with 2**k elements.
 * */
#define MEMORY 16
VALUE not_present;
typedef struct {
	int rule;VALUE src;int pos;VALUE val;
} elem_struct;
typedef struct {
		elem_struct *els;
} memo_struct;
#if MEMORY==-1
VALUE memo_test(memo_struct m,int rule,VALUE src,int pos){
}
void memo_add(int rule,VALUE src,int pos,VALUE val){
}
#elif MEMORY==0
memo_struct memo_init(){
	memo_struct m;
	return m;
}
VALUE memo_test(memo_struct m,int rule,VALUE src,int pos){
	return not_present;
}
void memo_add(memo_struct m,int rule,VALUE src,int pos,VALUE val){
}
#else
memo_struct memo_init(){
	memo_struct m;
	m.els=(elem_struct *) calloc(sizeof(elem_struct),1<<MEMORY);
	return m;
}
int memo_hash(int rule,int pos){return (rule*pos)&((1<<MEMORY)-1);}
VALUE memo_test(memo_struct m,int rule,VALUE src,int pos){
	elem_struct el=m.els[memo_hash(rule,pos)];
	if (el.rule==rule&& el.src==src && el.pos==pos) return el.val;
	return not_present;
}
void memo_add(memo_struct m,int rule,VALUE src,int pos,VALUE val){
	elem_struct el;
	el.rule=rule;el.src=src;el.pos=pos;el.val=val;
	m.els[memo_hash(rule,pos)]=el;
}

#endif
