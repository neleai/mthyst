#include "stack_machine.h"
typedef struct {
 char *str;exp *e ;exp *memo;
 memo_s set;
} memo_entry;
static memo_entry memos[1000];static long memo_no;
static void memo_set(Global *g,char *str,exp *e ,exp *memo, memo_s set){int i;
  for(i=0;i<memo_no;i++){
    if (memos[i].str==str&& memos[i].e==e&& memos[i].memo==memo)
      return ;
  }
  memos[memo_no].str=str;memos[memo_no].e=e; memos[memo_no].memo=memo; memos[memo_no].set=set;memo_no++;
}
static memo_s memo_get(Global *g,char *str,exp *e, exp *memo){int i;
  for(i=0;i<memo_no;i++){
    if (memos[i].str==str&& memos[i].e==e&& memos[i].memo==memo)
      return memos[i].set;
  }
  memo_s not_present;
  not_present.state=-1;
  return not_present;
}
static void *head(char *str){
  return *str;
}
static void *advance(char *str){
  return str+1;
}
void use_memo(Global *g){
  g->advance=advance;
  g->head=head;
  g->memo_set=memo_set;
  g->memo_get=memo_get;
}
