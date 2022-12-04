/*
1. &  bitwsie and
2. |  bitwise or
3. ~  bitwsie not
4. ^  bitwise XOR
*/
#include <iostream>
using namespace std;

int main() {
	int ror = 15 | 30;
	int rand = 15 & 30;
	int rnot = ~15;
	int rxor = 15 ^ 30;
	int rls = 15 << 2;
	int rrs = 15 >> 2;

	cout << ror << endl;
	cout << rand << endl;
	cout << rnot << endl;
	cout << rxor << endl;
	cout << rls << endl;
	cout << rrs << endl;
}
/*Increment Decreement Operation*/
/*
a++; -> post increment
a++; -> pre increment
*/
#include <iostream>
using namespace std;

int main() {
	 int a = 10;
	 cout << a++ << endl;
	 cout << ++a << endl;
}
#include<iostream>
using namespace std;

int main() {
	 int a = 10;
	 cout << a-- << endl;
	 cout << --a << endl;
}

#include <iostream>
using namespace std;

int main() {
	int a = 10;
	a += 3;

	a*= 2;

	cout << a-- << endl;
	cout << --a << endl;
}

/**/
#include <iostream>
using namespace std;

int main() {
	 int a = 2 * 3 + 4;
	 int b = (10 * 5) / 9;
	 cout << a << endl;
	 cout << b << endl;
}

