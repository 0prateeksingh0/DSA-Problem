Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
/*
Number Star Pattern
Send Feedback
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<n-j+1;
        }
        if(i>1)
        {
        for(int p=1;p<=2*(i-1);p++)
        {
            cout<<"*";
        }
        }
        for(int j=l;j>=1;j--)
        {
            cout<<j;
            
        }
        l=l-1;
        cout<<endl;
    }
}
/*****/
/*
Second Largest
Send Feedback
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3*/
#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    int max=INT_MIN,secondMax=INT_MIN;
    int num;
    int count=1;
    
    while(count<=n){
        cin>>num;
        if (num>max){
            secondMax=max;
            max=num;
        }
        else if(num>secondMax&&num!=max){
            secondMax=num;
        }
        count++;
        
        
    }
    cout<<secondMax<<endl;
    
}
