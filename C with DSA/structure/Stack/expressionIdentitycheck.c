#include<stdio.h>
#include<stdlib.h>
#define stacksize 10
#define true 1
#define false 0

struct stack
{
    char item[stacksize];
    int top;
};
struct stack s;
/*******/
void Initialize()
{
    s.top=-1;
}
/******/
char IsEmpty()
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
char Pop()
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
char StackTop()
{
    int x=s.item[s.top];
    return x;
}
/******/
ExpressionValidity(Exp[])
Stack s;
