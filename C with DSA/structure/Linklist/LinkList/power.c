#include<stdio.h>
int power(int b,int p)
{
if(p==0)
{return 1;}
else {if(p==1)
   return b;
   else{
    return b*(power(b,p-1));
   }}
}
int main()
{
int p,b,m;
printf("enter the base");
scanf("%d",&b);
printf("enter the power");
scanf("%d",&p);
m=power(p,b);
printf("the required answer is %d",m);
return 0;
}