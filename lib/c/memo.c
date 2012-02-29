#include <ruby.h>
#define CACHE_SIZE 512
#define MEMORY 20
VALUE not_present;
typedef struct {
	int rule;VALUE src;int pos;VALUE val;int newpos;
} elem_struct;
typedef struct memo_struct {
		elem_struct *els;int *hits, *miss,*ticks;elem_struct *cache;
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
	m->hits=calloc(sizeof(int)*256,1);	m->miss=calloc(sizeof(int)*256,1);m->ticks=calloc(sizeof(int)*256,1);
  m->cache=(elem_struct *) calloc(sizeof(elem_struct),CACHE_SIZE);
	m->els=  (elem_struct *) calloc(sizeof(elem_struct),1<<MEMORY);
	return m;
}
static int memo_hash(int rule,int src,int pos){return (src+rule*pos)&((1<<MEMORY)-1);}

typedef struct {long time;long saved;VALUE result;int pos;} time_struct;
time_struct timestamp;

static time_struct memo_get(memo_struct *m,int rule,VALUE src,int pos){
  timestamp.time++;
  elem_struct el=m->cache[(rule+pos)&(CACHE_SIZE-1)];
  if (el.pos==pos && el.rule==rule&& el.src==src) {
    timestamp.result=el.val;
    timestamp.pos   =el.newpos;
    return timestamp;
  }
  long hash=memo_hash(rule,src,pos);
  el = m->els[hash];
  if (el.pos==pos && el.rule==rule&& el.src==src) {
    timestamp.result=el.val;
    timestamp.pos   =el.newpos;
    return timestamp;
  }
  timestamp.pos=-1;
  return timestamp;
}

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
  m->cache[(rule+pos)&(CACHE_SIZE-1)]=el;
	m->els[memo_hash(rule,src,pos)]=el;
}


void memo_mark(memo_struct *m){ /*we want weak link to src so we dont mark it*/
	int i;for(i=0;i<(1<<MEMORY);i++) if(m->els[i].rule) {rb_gc_mark(m->els[i].src);rb_gc_mark(m->els[i].val);}
}
void memo_free(memo_struct *m){ free(m->els);free(m->hits);free(m->miss);free(m);}
#endif
#include <stdint.h>
typedef uint64_t ticks;
ticks tscnt;
static __inline__ uint64_t read_timestamp_counter(void)
{
  return tscnt++;
}

