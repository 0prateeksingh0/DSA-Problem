#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<< endl;
    cin >> n;
    for(int i=0;i<=n;i++){
        cout<< i << endl;
    }
}
/**/
#include <iostream>
using namespace std;

int main() {
	int m,n;
	cout << "Enter m & n" << endl;
	cin >> m >> n;

	for(;m <= n; m++) {
		cout << m << endl;
	}
}
/*Infinite 1 's*/
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i < 5; i = i + 1){
        cout << i << " ";
        i = i - 1;
    }
}
/* Output = 00 */
#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 2; i = i + 1) {
        for(int j = 0; j < 2; j = j + 1) {
            if (j == 1)
            break;
            cout << j << " ";
        }
    } 
}
/* Output = 0 1 3 4*/
#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i < 5; i = i + 1) {
        if(i == 2) 
        continue;
        cout << i << " ";
    } 
}
/********************/
//Nth Fibonacci Number
#include<iostream>
using namespace std;
int fib(int i){
    if(i==1){
        return 1;
    }
    if(i==2){
        return 1;
    }
    return (fib(i-1)+fib(i-2));
}
int main(){
    int n,a;
    cin>>n;
    a=fib(n);
    cout<<a;
}

/***************************/
//  Break and Continue
/*     Prime number   */
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int d = 2;
	bool divided = false;
	while (d < n) {
		if (n % d == 0) {
			divided = true;
			break;
		}
		d++;
	}
	if (divided) {
		cout << "Not prime" << endl;
	} else {
		cout << "Prime" << endl;
	}
}
/* Pattern*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	while(i  <= n) {
		int j = 1;
		while (j <= n) {
			cout << j;
			j++;
		}
		cout << endl;
		i++;
	}
}
/*
output- 6
123456
123456
123456
123456
123456
123456
*/

/**
/tmp/NT7ungL6P9.o
6
1
12
123
1234
12345
123456
 **/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	while(i  <= n) {
		int j = 1;
		while (j <= n) {
			cout << j;
			j++;
			if (j > i) {
				break;
			}
		}
		cout << endl;
		i++;
	}
}
/***                   Break      eg */
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i < 5) {
        if(i == 3) {
            break;
        }
        cout << i << " ";
        i++;
        
    }
}
//   Output = 1 2

/**/
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i < 3) {
        int j = 1;
        while(j < 5) {
            if(j == 3) {
                break;
                
            }
            cout << j << " ";
            j++;
            
        }
        i++;
        
    }
}
// output = 1 2 1 2




/*****              Continue */
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i < 5) {
        if(i == 3) {
            continue;
        }
        cout << i << " ";
        i++;
        
    }
}
// output = 1 2 loop infinte

/**/
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i < 3) {
        int j = 0;
        while(j < 5) {
            j++;
            if(j == 3) {
                continue;
            }
            cout << j << " ";
        }
        i++;
    }
}

// Output -- 1 2 4 5 1 2 4 5 
/** Prime number**/
#include<iostream>
using namespace std;
int main(){
    int n,isprime;
    cin>>n;
    for(int i=2;i<=n;i++){
        isprime=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=1;
                break;
            }
        }
        if(isprime==0)
            cout<< i << endl;
    }
    return 0;
}
/**************************************************/
//            Scope of Variables
#include<iostream>
using namespace std;
int main(){
    int i=10;
    cout<< i << endl;
    if(i==10){
        int j=12;
        cout<< j << endl;
    }
    cout<< j << endl;
}
// Output show ---- J is undeclared 269

/***/
#include <iostream>
using namespace std;

int main() {
	int k = 1;
	while (k < 100) {
		int k2 = 1002;
		cout << k2 << endl;
		k++;
	}
	cout << k2 << endl;

	int i = 10;
	cout << i << endl;

	if (i == 10) {
		int j = 12;
		cout << j << endl;
	} else {
		int j = 122;
		cout << j << endl;
	}
	// J is not available here 
	// cout << j << endl;
}
//  k2 is not valid 284

/***/
#include <iostream>
using namespace std;

int main() {
	int i = 1;
	while (i < 10) {
		int j = 1;
		while (j < i) {
			int k = 10;
			cout << j;
			j++;
		}
		cout <<k << endl;
		i++;
	}
}
// output --- k is not declared 314
/***/
#include <iostream>
using namespace std;

int main() {
	int i = 10;

	// not allowed int i = 22;
	cout << i << endl;

	if (i == 10) {
		int i = 23;
		cout << i << endl;
	}
	cout << i << endl;

	int k = 0;
	for (; k < 10; k++) {
		cout << k << endl;
	}
	cout << k << endl;
}
/* Output -- 
10
23
10
0
1
2
3
4
5
6
7
8
9
10
*/

/****************                 cin vs cin.get()    */

#include<iostream>
using namespacestd;
int main(){
    char c;
    cin >> c;
    int count =0;
    while(c!='$'){
        count++;
        cin>>c;
    }
    cout<< count <<endl;
}

// it only stop when $ sign is come and also count it

#include<iostream>
using namespacestd;
int main(){
    char c;
    c = cin.get();
    int count =0;
    while(c!='$'){
        count++;
        cin>>c;
    }
    cout<< count <<endl;
}
// output -- in this it work same just it count space as weel as tab also in it



/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
Sample Input :
abc def4 5$
Sample Output :
6 2 2
Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)
*/
#include<iostream>
using namespace std;
int main(){
    int count =0;
    int chars =0;
    int digits =0;
    int spaces =0;
    char c;
    while(c!='$'){
        c= cin,get();
        if (int(c)>=48 && int(c)<=57){
            digits++;
        }
        else if(int(c)>=97 && int(c)<=122){
            chars++;
        }
        else{
            spaces++;
        }
    }
    cout<<chars<<' '<<digits<<' '<<spaces-1;
}