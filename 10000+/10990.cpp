#include <iostream>

using namespace std;

int main(void) {
	int n, b;
	cin >> n;
	b = n;

	for (int i = 0; i < n; i++) {
		b--;
		for (int j = 0; j < b; j++) cout << " ";
		if (i != 0) cout << "*";
		for (int j = 0; j < i * 2 - 1; j++) cout << " ";
		cout << "*" << endl;
	}
	return 0;
}