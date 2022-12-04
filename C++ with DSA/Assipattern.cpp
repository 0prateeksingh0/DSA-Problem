/*Print the following pattern for the given N number of rows.
Pattern for N = 4
*
**
***
*****/
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << "*" ;
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*Print the following pattern for the given N number of rows.
Pattern for N = 4
1
22
333
4444
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int p=i;
        while(j<=i){
            cout << p-j+1;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*************/
// Charatcer Pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+j-1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        char startChar='A'+i-1;
        while(j<=n){
            char ch=startChar+j-1;
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;
        
        
    }
}
/*
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
 */
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << a;
        }
        cout << endl;
        a=a+1;
    }
}
/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    char a='A';
    for(int i=1;i<=n;i++){
        char starchar='A'+i-1;
        for(int j=1;j<=i;j++){
            char a=starchar+j-1;
            cout << a;
        }
        cout << endl;
    }
}
/*
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout << ch;
            j++;
            ch=ch+1;
        }
        cout << endl;
        i++;
    }
}
