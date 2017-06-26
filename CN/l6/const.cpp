#include <iostream>
using namespace std;

int fact(int const & n) {
}

int sum(int const * a) {

}

int main() {
	int n = 10;
	fact(n);
	const int i = n;

	int const * p = &n;
	cout << *p << endl;
	n++;
	cout << *p << endl;

	int const * p2 = new int[10];

	int const * const p3 = &n;

	// cant make a non const copy from const copy
	// int * const p2 = &i;
	//(*p2)++;
}

