#include <iostream>
using namespace std;

int interleavingReturn(char* first, char* second, char output[][100]) {
	if (first[0] == '\0' && second[0] == '\0') {
		output[0][0] = '\0';
		return 1;
	}

	int outputSize = 0;
	if (first[0] != '\0') {
		char output1[10000][100];
		int count1 = interleavingReturn(first + 1, second, output1);
		for (int i = 0; i < count1; i++) {
			output[i][0] = first[0];
			int c = 0;
			while (output1[i][c] != '\0') {
				output[i][c + 1] = output1[i][c];
				c++;
			}
			output[i][c + 1] = output1[i][c];
		}
		outputSize = count1;
	}

	if (second[0] != '\0') {
		char output1[10000][100];
		int count2 = interleavingReturn(first, second + 1, output1);
		for (int i = 0; i < count2; i++) {
			output[outputSize + i][0] = second[0];
			int c = 0;
			while (output1[i][c] != '\0') {
				output[outputSize + i][c + 1] = output1[i][c];
				c++;
			}
			output[outputSize + i][c + 1] = output1[i][c];
		}
		outputSize += count2;
	}
	return outputSize;
}


void interleaving(char* first, char* second, char* outputSoFar, int ni) {
	if (first[0] == '\0' && second[0] == '\0') {
		outputSoFar[ni] = '\0';
		cout << outputSoFar << endl;
		return;
	}
	if (first[0] != '\0') {
		outputSoFar[ni] = first[0];
		interleaving(first + 1, second, outputSoFar, ni + 1);
	}
	if (second[0] != '\0') {
		outputSoFar[ni] = second[0];
		interleaving(first, second + 1, outputSoFar, ni + 1);
	}
}

void interleaving(char* first, char* second) {
	char output[1000];
	interleaving(first, second, output, 0);
}

int main() {
	char a[] = "abc";
	char b[] = "def";
	interleaving(a, b);
}
