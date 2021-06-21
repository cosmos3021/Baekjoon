#include <iostream>

using namespace std;

int main(void) {
	int n, gong, star;
	cin >> n;
	gong = n * 2 - 2, star = 1;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < star; j++) cout << "*";
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
		gong -= 2, star++;
	}

	for (int i = 0; i < n * 2; i++) cout << "*";
	cout << endl;

	for (int i = 0; i < n - 1; i++) {
		gong += 2, star--;
		for (int j = 0; j < star; j++) cout << "*";
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
	}
	return 0;
}