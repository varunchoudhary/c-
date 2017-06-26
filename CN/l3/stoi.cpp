#include <iostream>
using namespace std;

int stoiH(char s[], int len) {
	if (len == 1) {
		return s[0] - '0';
	}
	int smallAns = stoiH(s, len - 1);
	return smallAns * 10 + s[len - 1] - '0';
}

int stoi(char s[]) {
	return stoiH(s, strlen(s));
}

int main() {

}

