/*Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double ts;
    int b1;
    int c;
    double d;
    double b;
    int d1;
    double h;
    int a;
    double p;
    char g;
    cin>>b;
    cin>>g;
    h=0.2*b;
    d=0.5*b;
    p=0.11*b;

    if(g=='A'){
        ts=b+h+d+1700-p;
        b1=round(ts);
        cout<<b1;        
    }
    else if(g=='B'){
        ts=b+h+d+1500-p;
        c=round(ts);
        cout<<c;
    }
    else
    {
        ts=b+h+d+1300-p;
        d1=round(ts);
        cout<<d1;
    }
}