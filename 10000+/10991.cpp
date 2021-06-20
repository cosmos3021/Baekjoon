#include <iostream>

using namespace std;

int main(void) {
	int n, b;
	cin >> n;
	b = n;

	for (int i = 0; i < n; i++) {
		b--;
		for (int j = 0; j < b; j++) cout << " ";
		for (int j = 0; j < n - b; j++) {
			cout << "*";
			if (j != n - b) cout << " ";
		}
		cout << endl;
	}
	return 0;
}