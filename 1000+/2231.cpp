#include <iostream>

using namespace std;

int main(void) {
	int ic, n, ja;
	cin >> n;

	for (int i = 0; i < n; i++) {
		ja = i, ic = i;
		while (ic != 0) {
			ja += ic % 10;
			ic /= 10;
		}
		if (ja == n) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}