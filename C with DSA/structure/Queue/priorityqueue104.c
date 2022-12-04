//Ascending Array
#include<stdio.h>
void ArrayInsertion(int a[],int n,int i,int x)
{
    int j;
    for(j=n-1;j>=i;j--)
    a[j+1]=a{j};
    a[i]=x;
    n=n+1;
}
void ArrayInsertion(int a[],int n, int x)
{
    int i;
    for(j=j+1;j<n;j++)
    a[j-1]=a[i];
    n=n-1;
}
void PQInseertion(int a[],int n,int x)
{
    int i=0;
    while(i<n && x>=a[i])
    i++;
    ArrayInsertion(a,n.i.x);
}
int PQInsertion(int a[])
{
    int i, n, j, num, a[10]; 
    printf("\n Enter the number of elementsin the array : " ); 
    scanf(" %d" , &n); 
   for(i=0;i<n;i++) 
   { 
    scanf("%d", &a[i]); 
   } 
    printf("\n Enter the number to be deleted: "); 
    scanf("%d", &num); 
   for(i=0;i<n;j++) 
   { 
    if(a[i]==num) 
    { 
        for(j=i;j<n;j++) 
        { 
            a[j] = a[j+1]; 
        } 
     }
     printf("\n The array after deletion is:"); 
     for(i=0;i<n-1;i++)
     { 
        printf("\t%d",a[i]); 
    }
    } 
    return 0; 
}