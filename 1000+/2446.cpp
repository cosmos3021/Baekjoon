#include <iostream>

using namespace std;

int main(void) {
	int n, gong, star;
	cin >> n;
	star = n * 2 - 1, gong = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
		star -= 2, gong++;
	}

	star += 2, gong--;

	for (int i = 0; i < n - 1; i++) {
		star += 2, gong--;
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
	}
	return 0;
}