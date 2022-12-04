#include<stdio.h>
#include<string.h>
#define STACKSIZE 10
#define True 1
#define False 0
struct Stack
(
    int item[STACKSIZE];
    int TOP;
);
struct Stack s;
int IsEmpty(){
    if(s.TOP==-1)return True;
    else return false;
}
int POP{
    if (IsEmpty())
    {
        printf("\nSTACK UNDERFLOW");
        exit(1);
    }
    int x=s.item[s.TOP];
    s.Top-;
    return x;
}
void PUSH(int x){
    if(s.TO==STACKSIZE-1){
        printf("/\nSTACK OVERFLOEW");
        exit(1);
    }
    s.TOP++;
    s.item[s.TOP]=x;
}
void Initialize(){
    s.TOP=-1;
}
int stackTOP(){
    int x=s.item[s.TOP];
    return x;
}
int Evalute(int a,int b, char op){
    switch(op){
        case'+': return a+b;
        case'*': return a*b;
        case'-': return a-b;
        case'&': return a&b;
        default : return a/b;
    }
}
int main(){
    int x,i=0,val,b,a;
    char PS[20];
    char symb;
    Initialize();
    scanf("%s",&PS);
    while(PS[i]!='\0'){
        symb=PS[i];
        if(symb>='0'&&symb<='9'){
            PUSH(symb-48);
        }
        else{
            b=POP();
            a=POP();
            val=Evaluate(a,b,symb);
            PUSH(val);
        }
        i++;
    }
    x=POP();
    printf("%d",x);
    return 0;
}