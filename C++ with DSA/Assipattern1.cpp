/**Pattern 2***/
// Reverse Triangle
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int spaces = 1;
		while (spaces <= n - i) {
			cout << ' ';
			spaces = spaces + 1;
		}

		int stars = 1;
		while (stars <= i) {
			cout << '*';
			stars = stars + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
   1
  12
 123
1234  
*/#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout <<c ;
                c++;
                
            }
        }
        cout<<endl;
    }
}
// Inverted Triangle
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int j = 1;
		while (j <= n - i + 1) {
			cout << '*';
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<c;
        }
        cout<< endl;
        c--;
    }
}
// isoseles triangle
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int spaces = 1;
		while (spaces <= n - i) {
			cout << ' ';
			spaces = spaces + 1;
		}

		int j = 1;
		while (j <= i) {
			cout << j;
			j = j + 1;
		}

		j = i - 1;
		while (j >= 1) {
			cout << j;
			j = j - 1;
		}
		cout << endl;
		i = i + 1;
	}
}
/*
Print the following pattern
Pattern for N = 4
        *
      * * *
    * * * * *
  * * * * * * *
The dots represent spaces*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int currRow=1;
    while(currRow<=n){
        int spaces=1;
        while(spaces<=n-currRow)
        {
            cout<<" ";
            spaces++;
        }
        int currCol=1;
        while(currCol<=(2*currRow)-1){
            cout<<"*";
            currCol++;
        }
        cout<<endl;
        currRow++;
    }
}
/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  232
 34543
4567654
The dots represent spaces.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, count1 = 0, k = 0;

    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        for(int space = 1; space <= n-i; ++space)
        {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= n-1)
            {
                cout << i+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }
    return 0;
}
/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include <iostream>
using namespace std;

int main() {
  int size = 5;
  // upside pyramid
  for (int i = 1; i <= size; i++) {
    // printing spaces
    for (int j = size; j > i; j--) {
      cout << " ";
    }
    // printing star
    for (int k = 0; k < i * 2 - 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  // downside pyramid
  for (int i = 1; i <= size - 1; i++) {
    // printing spaces
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    // printing star
    for (int k = (size - i) * 2 - 1; k > 0; k--) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}