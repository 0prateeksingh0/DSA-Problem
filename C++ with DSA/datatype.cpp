#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int b=15;
	int c= a+b;
	cout << c << endl;

	char d ='x';
	cout << d << endl;

	float f= 0.1;

	bool b1= true;

	int size = sizeof(f);
	cout << size << endl;

}

/* int = 4 byte 
   char = 1 byte 
   float = 4 byte -Decimal no. & double xyz =3.256; and here " double = 8 byte "
*/
/*
int a;
    double d;
    char c;
    cin >> a >> d >> c;
    cout << a << d << c << endl;
*/