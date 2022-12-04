/*Calculate Simple Interest*/
#include<iostream>
using namespace std;
int main()
{
    int p,r,t,i;
    cout << "\n Calculate the Simple Interest :\n";
    cout << "-------------\n";
    cout << "Input the principle:";
    cin >> p;
    cout<<"Input the Rate of Interest:";
    cin>> r;
    cout<<"Input the Time:";
    cin>>r;
    i = (p*r*t)/100;
    cout << "The Simple interest for the amount"<< i;
    cout << endl;
    return 0;

}