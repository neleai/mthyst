/* Copyright (C) Ondrej Bilka <neleai@seznam.cz> 2012 */
#include "cthyst.h"
#include <ruby.h>
#define CACHE_SIZE 512
VALUE not_present;
typedef struct {
	int rule;VALUE src;int pos;VALUE val;int newpos;
} elem_struct;
struct memo_struct {
		elem_struct *els;int *hits, *miss,*ticks;elem_struct *cache;int size;int capacity;
};

static memo_struct *memo_init(){
	memo_struct *m=calloc(sizeof(memo_struct),1);
  m->size=0;
  m->capacity=512;
	m->hits=calloc(sizeof(int)*256,1);	m->miss=calloc(sizeof(int)*256,1);m->ticks=calloc(sizeof(int)*256,1);
  m->cache=(elem_struct *) calloc(sizeof(elem_struct),CACHE_SIZE);
	m->els  =(elem_struct *) calloc(sizeof(elem_struct),m->capacity);
	return m;
}
static int memo_hash(int rule,int src,int pos,int cap){return (src+rule*pos)&(cap-1);}

typedef struct {long time;long saved;VALUE result;int pos;int discard;} time_struct;
time_struct timestamp;

static time_struct memo_get(memo_struct *m,int rule,VALUE src,int pos){
  timestamp.time++;
  elem_struct el=m->cache[(rule+pos)&(CACHE_SIZE-1)];
  if (el.pos==pos && el.rule==rule&& el.src==src) {
    timestamp.result=el.val;
    timestamp.pos   =el.newpos;
    m->hits[rule]++;
    return timestamp;
  }
  long hash=memo_hash(rule,src,pos,m->capacity);
  do {
    el = m->els[hash];
    if (el.pos==pos && el.rule==rule&& el.src==src) {
      timestamp.result=el.val;
      timestamp.pos   =el.newpos;
      m->hits[rule]++;
      return timestamp;
    }
    hash=(hash+1)&(m->capacity-1);
  } while (el.rule);
  m->miss[rule]++;
  timestamp.pos=-1;
  return timestamp;
}

static void memo_add(memo_struct *m,int rule,VALUE src,int pos,VALUE val,int newpos,time_struct time_old){
  long time  = timestamp.time  - time_old.time;
  long saved = timestamp.saved - time_old.saved;
  timestamp.saved += time-saved;
  m->ticks[rule]+=time-saved;
	elem_struct el;int i;
	el.rule=rule;el.src=src;el.pos=pos;el.val=val;el.newpos=newpos;
  m->cache[(rule+pos)&(CACHE_SIZE-1)]=el;
  m->size++;
  if (2*m->size > m->capacity) {
    elem_struct *resized=calloc(sizeof(elem_struct),2*m->capacity);
    for (i=0;i<m->capacity;i++) if (m->els[i].rule&& !(m->els[i].src==src&&m->els[i].pos<time_old.discard)) resized[memo_hash(m->els[i].rule,m->els[i].src,m->els[i].pos,2*m->capacity)]=m->els[i];
    free(m->els);
    m->els=resized;
    m->capacity=2*m->capacity;
  }
  int hash=memo_hash(rule,src,pos,m->capacity);
  while (m->els[hash].rule) hash=(hash+1)&(m->capacity-1);
	m->els[hash]=el;
}


void memo_mark(memo_struct *m){ /*we want weak link to src so we dont mark it*/
	int i;
  for(i=0;i<CACHE_SIZE;i++) if(m->cache[i].rule) {rb_gc_mark(m->els[i].src);rb_gc_mark(m->cache[i].val);}
  for(i=0;i<m->capacity;i++) if(m->els[i].rule) {rb_gc_mark(m->els[i].src);rb_gc_mark(m->els[i].val);}
}
void memo_free(memo_struct *m){ free(m->els);free(m->hits);free(m->miss);free(m);}

#include <stdint.h>
typedef uint64_t ticks;
ticks tscnt;
static __inline__ uint64_t read_timestamp_counter(void)
{
  return tscnt++;
}

