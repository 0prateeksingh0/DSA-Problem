#include<iostream>
using namespace std;
int main(){
    int y=0;
    int n=0;
    cin >> n;
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=i;j=j+1){
            cout << (j+y);
        }
        cout << endl;
        y=y+1;
    }
}
#include<iostream>
using namespace std;
int main(){
    int y=0;
    int n=0;
    cin >> n;
    for(int i=1;i<=n;i=i+1){
        for(int k=1;k<=(n-1);k=k+1){
            cout << " ";
        }
        for(int j=1;j<=1;j=j+1){
            cout << (j+y);
        }
        cout << endl;
        y=y+1;
    }
}