/*
Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
Input format :
Line 1 : Integer N
Line 2 : Choice C
Output Format :
 Sum or product according to user's choice
Constraints :
1 <= N <= 12
Sample Input 1 :
10
1
Sample Output 1 :
55
*/
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int c;
    cin>>c;
    if(c==1){
        int sum=0;
        for(int f=0;f<=N;f++){
            sum=sum+f;
        }
        cout<< sum <<endl;
    }
    else if(c==2){
        int sum=1;
        for(int a=1;a<=N;a++){
            sum=sum*a;
        }
        cout<< sum <<endl;
    }
    else if(c!=1 || c!=2){
        cout<< "-1" <<endl;
    }
}
/*********/
/*Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :
Integer x
Output format :
Terms of series (separated by space)
Constraints :
1 <= x <= 1,000
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
*/
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        int a=3*i+2;
        if(a%4==0){
            n++;
            continue;
        }
        cout<< a << "";
    }
}

/*Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
*/
#include<iostream>
using namespace std;
int main(){
    int n, i , r=0;
    cin >> n;
    while(n>0){
        i=n%10;
        n=n/10;
        r=r*10+i;
    }
    cout<< r;
}

/*
Binary to decimal
1100---12
*/
// C++ program to convert binary to decimal
#include <iostream>
using namespace std;
int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;
	int base = 1;
	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;
		dec_value += last_digit * base;

		base = base * 2;
	}
	return dec_value;
}
int main()
{
	int num;
	cin >> num;
	cout << binaryToDecimal(num) << endl;
}
// or
// C++ program to convert binary to decimal
// when input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}

// Driver program to test above function
int main()
{
	string num = "10101001";
	cout << binaryToDecimal(num) << endl;
}
/****/
//Decimal to binary
#include<iostream>
using namespace std;
int main(){
    long int n;
    long int pv=1;
    long int ans=0;
    cin>>n;
    while(n!=0){
        int rem=n%2;
        ans=ans+rem*pv;
        pv=pv*10;
        n=n/2;

    }
    cout<<ans;
}
/****/
// Square Root
/*Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
*/
// A C++ program to find floor(sqrt(x)
#include <bits/stdc++.h>
using namespace std;

// Returns floor of square root of x
int floorSqrt(int x)
{
	// Base cases
	if (x == 0 || x == 1)
		return x;

	// Starting from 1, try all numbers until
	// i*i is greater than or equal to x.
	int i = 1, result = 1;
	while (result <= x) {
		i++;
		result = i * i;
	}
	return i - 1;
}

// Driver program
int main()
{
	int x;
	cin>>x;
	cout << floorSqrt(x) << endl;
	return 0;
}
/******/
/*
You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
Note : We say that x is strictly larger than y when x > y.
So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.


That is, in the sequence if numbers are decreasing, they can start increasing at one point. Thereafter, they cannot decrease at any point further.
Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So, in both the cases, print true.


You just need to print true/false. No need to split the sequence.
Input format :
Line 1 : Integer 'n'
Line 2 and Onwards : 'n' integers on 'n' lines(single integer on each line)
Output Format :
"true" or "false" (without quotes)
Constraints :
1 <= n <= 10^7
Sample Input 1 :
5
9
8
4
5
6
Sample Output 1 :
true
Sample Input 2 :
3
1
2
3
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n)
    {
    cin>>arr[i];
    i++;
    }
    int comparearray[n-1];
    for(int j=0;j<n-1;j++)
    {
     comparearray[j]=arr[j]-arr[j+1];   
    }
    int count=0;
    for(int k=0;k<n-2;k++)
    {
       if((comparearray[k]>0 && comparearray[k+1]<0)||(comparearray[k]<0 && comparearray[k+1]>0))
       {
           count++;
       }
    }
    if(count>=2)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
    
   
}