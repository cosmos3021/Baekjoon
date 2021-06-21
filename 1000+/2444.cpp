#include <iostream>

using namespace std;

int main(void) {
	int n, gong, star;
	cin >> n;
	gong = n - 1, star = 1;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
		gong--, star += 2;
	}

	gong = 0, star = 2 * n - 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
		gong++, star -= 2;
	}
	return 0;
}