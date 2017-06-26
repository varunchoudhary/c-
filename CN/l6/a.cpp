#include <iostream>
using namespace std;

class Student {
	int i;
	char* p;
};

int main() {
	Student s;
	cout << sizeof(s) << endl;
	int i,j;
	cin >> i >> j;
	cout << i << j << endl;
}

