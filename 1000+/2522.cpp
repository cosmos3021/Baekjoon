#include <iostream>

using namespace std;

int main(void) {
	int n, gong, star;
	cin >> n;
	star = 0, gong = n;

	for (int i = 0; i < n; i++) {
		star++, gong--;
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		star--, gong++;
		for (int j = 0; j < gong; j++) cout << " ";
		for (int j = 0; j < star; j++) cout << "*";
		cout << endl;
	}
	return 0;
}