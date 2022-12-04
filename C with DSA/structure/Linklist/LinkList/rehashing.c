#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    return 1;
    else{return n*factorial(n-1);}
}
int main()
{
int n,m;
printf("enter the no.");
scanf("%d",&n);
m=factorial(n);
printf("the factorial of the no . is %d",m);
return 0;

}