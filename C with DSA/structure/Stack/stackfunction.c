#include<stdio.h>
#include<stdlib.h>
#define stacksize 10
#define true 1
#define false 0

struct stack
{
    int item[stacksize];
    int top;
};
struct stack s;
/*******/
void Initialize()
{
    s.top=-1;
}
/******/
int IsEmpty()
{
    if(s.top==-1)
    return true;
    else 
    return false;
}
/******/
void Push(int x)
{
    if(s.top==stacksize-1)
    {
    printf("stack overflow");
    exit(1);
    }
    s.top=s.top+1;
    s.item[s.top]=x;
}
/******/
int Pop()
{
    if(IsEmpty())
    {
        printf("stack overflow");
        exit(1);
    }
    int x=s.item[s.top];
    s.top=s.top-1;
    return x;
}
/******/
int StackTop()
{
    int x=s.item[s.top];
    return x;
}
/******/
int main()
{
    int x;
    Initialize();
    Push(100);
    Push(200);
    Push(300);
    Push(400);
    Push(500);
    Push(600);
    Push(700);
    Push(800);
    Push(900);
    Push(1000);
    printf("%d",s.item[s.top]);
    Push(1100);
}