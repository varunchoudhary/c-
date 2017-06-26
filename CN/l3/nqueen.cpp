#include <iostream>
using namespace std;

bool isSafe(bool a[][100], int n, int i, int j) {
	for (int k = 0; k < n; k++) {
		if (a[i][k] || a[k][j]) {
			return false;
		}
	}

	int startingRow = i + j - (n - 1);
	if (startingRow < 0) {
		startingRow = 0;
	}
	int startingColumn = i + j - startingRow;
	while (startingRow < n && startingColumn >= 0) {
		if (a[startingRow][startingColumn]) {
			return false;
		}
		startingRow++;
		startingColumn--;
	}

  startingRow = i - j;
	if (startingRow < 0) {
		startingRow = 0;
	}
	startingColumn = j - i + startingRow; 
	while (startingRow < n && startingColumn < n) {
		if (a[startingRow][startingColumn]) {
			return false;
		}
		startingRow++;
		startingColumn++;
	}
	return true;
}

bool nqueen(bool a[][100], int n, int remaining) {
	if (remaining == 0) {
		return true;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!a[i][j] && isSafe(a, n, i, j)) {
				a[i][j] = true;
				bool done = nqueen(a, n, remaining - 1);
				if (done) {
					return true;
				}
				a[i][j] = false;
			}
		}
	}
	return false;
}

int main() {
	bool a[100][100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 0;
		}
	}
	bool ans = nqueen(a, n, n);	
	if (!ans) {
		cout << "Not possible" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
}

