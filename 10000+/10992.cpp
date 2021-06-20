#include <iostream>

using namespace std;

int main(void) {
	int n, b1, b2;
	cin >> n;
	b1 = n, b2 = -3;

	for (int i = 0; i < n - 1; i++) {
		b1--, b2 += 2;
		for (int j = 0; j < b1; j++) cout << " ";
		if (i != 0) cout << "*";
		for (int j = 0; j < b2; j++) cout << " ";
		cout << "*" << endl;
	}

	for (int i = 0; i < 2 * n - 1; i++) cout << "*";
	return 0;
}