#include <iostream>

using namespace std;

int main(void) {
	int n, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		s++;
		for (int j = 0; j < s; j++) cout << "*";
		cout << endl;
	}
	for (int i = 0; i < n - 1; i++) {
		s--;
		for (int j = 0; j < s; j++) cout << "*";
		cout << endl;
	}
	return 0;
}