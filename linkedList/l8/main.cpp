#include <iostream>
#include "mypair.h"
#include "dynamic_array.h"
using namespace std;

class vehicle {
	public:
		vehicle() {
			cout << "done" << endl;
		}

		bool operator > (vehicle const & v) {
			return true;
		}
};

int main() {

	dynamic_array d;
	int i = 10;
	try {
		i++;
		d.push_back(1);
		i++;
		d.set(-1, 10);
		i++;
	} catch(negative_index_exception e) {
		cout << e.message() << endl;
	} catch (invalid_size_exception e) {
		cout << e.message() << endl;
	}
	cout << i << endl;

	mypair<int, int> p(1,2);
	p.setFirst(100);
	cout << p.getFirst() << endl;

	mypair<int*, int*> p2(NULL, NULL);
	p2.setFirst(NULL);

	vehicle b[10];
	bubbleSort(b, 10);

	int a[] = {1,2,3,4,3,2,1};
	bubbleSort(a, 7);
	for (int i = 0; i < 7; i++) {
		cout << a[i] << endl;
	}
}

