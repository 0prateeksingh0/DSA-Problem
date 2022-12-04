#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
};
/////////////////////////////////////////////////
struct node *START;
/////////////////////////////////////////////////
struct node *GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/////////////////////////////////////////////////
void InsBeg(int x)
{
  struct node *p;
  p=GetNode();
  p->info=x;
  p->Next=START;
  START=p;
}
////////////////////////////////////////////////////
void InsEnd(int x)
{
  struct node *q,*p;
  q=START;
  while(q->Next!=NULL)
    {
      q=q->Next;
    }
  p=GetNode();
  p->info=x;
  p->Next=NULL;
  q->Next=p;
}
/////////////////////////////////////////////////////
int Traversal()
{
  struct node *p;
  p=START;
  while(p!=NULL)
    {
      printf("\n%d\t",p->info);
      p=p->Next;
    }
}
/////////////////////////////////////////////////////
int main()
{
  START=NULL;
  InsBeg(2);
  InsBeg(34);
  InsBeg(33);
  InsBeg(19);
  InsEnd(400);
  InsBeg(89);
  InsBeg(90);
  Traversal();
}
