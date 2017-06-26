#include <iostream>
#include <unordered_map>
using namespace std;

int keypad(int a, char output[][100]) {

}

int lastIndex7(int a[], int size) {
	if (size == 0) {
		return -1;
	}
	int smallArrayAnswer = lastIndex7(a + 1, size - 1);
	if (smallArrayAnswer != -1) {
		return smallArrayAnswer  + 1;
	} else {
		if (a[0] == 7) {
			return 0;
		} else {
			return -1;
		}
	}

}

int firstIndex7(int a[], int size) {
	if (size == 0) {
		return -1;
	}
	if (a[0] == 7) {
		return 0;
	}
	int smallArrayAnswer = firstIndex7(a + 1, size - 1);
	if (smallArrayAnswer == -1) {
		return -1;
	}else {
		return smallArrayAnswer + 1;
	}
}

bool has7(int a[], int size) {
	if (size == 0) {
		return false;
	}
	if (a[0] == 7) {
		return true;
	}
	return has7(a + 1, size - 1);
}

void sort(int a[], int size) {
	if (size == 0 || size == 1) {
		return;
	}
	sort(a, size/2);
	sort(a + size/2, size - size/2);
	//merge(a, size);
}

int main() {
	unordered_map<int, int> freq;
	int a[] = {1,100,2,1,100,100000,100000,100000,2,3,4,5,5,5,2, 100000};
	for (int i = 0; i < sizeof(a)/4; i++) {
		++freq[a[i]];
		//freq[a[i]]++;
		if (freq.count(a[i]) == 0) {
			freq[a[i]] = 1;
		} else {
			freq[a[i]] = freq.at(a[i]) + 1;
		}
	}
}









