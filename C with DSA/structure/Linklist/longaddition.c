#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    int exp;
    struct node *Next;
};
/****/
struct node* Getnode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;

}
/***/
void InsBeg(struct node** START, int x, int y)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->exp-y;
    p->Next=*START;
    *START=p;
}
/**/
void InsEnd(struct node**START,int x.int y)
{
    struct node *q,*p;
    q=*START;
    if(q==NULL)
    {
        InsBeg(START,x,y);
    }
    else
    {
        while(q->Next!=NULL)
        q=q->Next;
        p=GetNode();
        
    }
}