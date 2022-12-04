/*
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
*/
#include<iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c>='A' && c<='Z'){
        cout << 1 << endl;   
    }
    else if(c>='a' && c<='z'){
        cout << 0 << endl;
    }else {
        cout << -1 << endl;
    }

}
// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
#include<iostream>
using namespace std;
int main(){
    int S,E,W;
    cin >>S >> E>>W;
    int C;
    while(S<=E)
    {
        C=((5*(S-32))/9);
        cout<<S<<"\t"<<C<<endl;
        S+=W;
        
    }
}

