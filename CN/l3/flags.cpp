#include <iostream>
using namespace std;



long long find_ways_helper(int N) {
	if (N == 0) {
		return 1;
	}
	if (N == 1) {
		return 1;
	}
	return find_ways_helper(N - 1) + find_ways_helper(N - 2);
}

long long find_Ways(int N)
{
	if (N == 0)
		return 1;
	return 2 * find_ways_helper(N -1);
}

int main() {

}

