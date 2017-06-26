#include <iostream>
using namespace std;

void f(int a[10]) {
	a = new int;
	cout << sizeof(a) << endl;
}

int main() {
	int * b;
	f(b);
}

