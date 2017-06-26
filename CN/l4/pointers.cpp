#include <iostream>
using namespace std;

int main() {

	int i2 = 65;
	cout << &i2 << endl;
	//cout << &('a') << endl;

//	char* cp2 = &((char)i2);
//	cout << &((char)(i2)) << endl;

	int i = -1234433;
	int * p = &i;
	cout << p << endl;

	char c = 'd';
	char* cp = (char*)&i;
	cout << *cp << endl;

	int a[10];
	char c1[10] = "abcd";
	cout << a << endl;
	cout << c1 << endl;
}

