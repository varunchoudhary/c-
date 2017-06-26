#include <iostream>
using namespace std;

int* returnsRef() {
	int a = 10;
	return &a;
}

int main() {
	int * b = returnsRef();
	int k = 1000;
	cout << *b << endl;
	*b = 100;
}

