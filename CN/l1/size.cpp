#include <iostream>
using namespace std;

int main() {
	int a[50] = {};
	for (int i = 0; i < 50; i++) {
		cout << a[i] << endl;
	}
	int size = sizeof(a)/4;
	cout << size << endl;
}
