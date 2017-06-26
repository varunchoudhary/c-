#include <iostream>
using namespace std;

int max_product_helper(int a[], int startIndex, int endIndex) {
	int product = 1;
	for (int i = startIndex; i <= endIndex; i++) {
		product = product * a[i];
	}
	if (product > 0) {
		return product;
	}
	int lp = 1;
	int rp = 1;
	int i = startIndex;
	while (a[i] > 0) {
		lp = lp * a[i];
		i++;
	}
	lp = lp * a[i];

	i = endIndex;
	while (a[i] > 0) {
		rp = rp * a[i];
		i--;
	}
	rp = rp * a[i];
	if (lp > rp) {
		return product/lp;
	} else {
		return product/rp;
	}
}

int max_product(int a[], int size) {
	int si = 0;
	int bestProduct = 1;
	for (int i = 0; i < size; i++) {
		if (a[i] == 0) {
			int p = max_product_helper(a, si,i -1);
			if (p > bestProduct) {
				bestProduct = p;
			}
			si = i + 1;
		}
	}
	if (a[size - 1] != 0) {
		int p = max_product_helper(a, si,size - 1);
		if (p > bestProduct) {
			bestProduct = p;
		}
	}
	return bestProduct;
}

int main() {
	int a[] = {1,2,3, -3,4,5};
	cout << max_product(a, 6);
}

