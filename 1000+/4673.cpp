#include <iostream>

using namespace std;

int main(void) {
	int arr[10001] = { 0 };
	int sum, icopy;

	for (int i = 1; i < 10001; i++) {
		sum = i, icopy = i;
		while (icopy > 0) {
			sum += icopy % 10;
			icopy /= 10;
		}
		if (sum < 10001) arr[sum] = 1;
	}

	for (int i = 1; i < 10001; i++) {
		if (arr[i] != 1) cout << i << endl;
	}
	return 0;
}