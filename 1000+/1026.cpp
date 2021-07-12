#include <iostream>

using namespace std;

int main(void) {
	int a[51] = { 0 };
	int b[51] = { 0 };
	int n, tmp, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] < b[j]) {
				tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) sum += a[i] * b[i];
	cout << sum << endl;
	return 0;
}