#include <iostream>

using namespace std;

int main(void) {
	int num[4] = { 0 };
	int n, ic, ja, cha, res = 0;
	cin >> n;
	res = n;

	for (int i = n; i > 0; i--) {
		ic = i, ja = 0;

		while (ic != 0) {
			num[ja] = ic % 10;
			ic /= 10;
			ja++;
		}

		cha = num[ja - 1] - num[ja - 2];

		while (ja > 2) {
			ja--;
			if (num[ja - 1] - num[ja - 2] != cha) {
				res--;
				break;
			}
		}

		for (int j = 0; j < 4; j++) num[j] = 0;
	}

	cout << res << endl;
	return 0;
}