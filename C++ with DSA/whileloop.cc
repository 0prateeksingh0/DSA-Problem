/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int i=1;
    while (i <=n ){
        cout<<i<<endl;
        i=i+1;
    }

}
*/
// Check whether the number is prime no. or not
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n" << endl;
	cin >> n;

	int d = 2;
	bool divided = false;
	while (d < n) {
		if (n % d == 0) {
			cout << "Not Prime" << endl;
			divided = true;
		}
		d = d + 1;
	}
	if (!divided) {
		cout << "Prime" << endl;
	}
}
//print the sum of n even number till n
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
   int sum=0,i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
        
    }
    cout<<sum<<endl;
    
}