#include <iostream>

using namespace std;

int main(void) {
	int max[3] = { 0 };
	int min[3] = { 2011, 13, 32 };
	int psn[3] = { 0 };
	int n;
	string name, M, m;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name;
		for (int j = 2; j >= 0; j--) cin >> psn[j];

		for (int j = 0; j < 3; j++) {
			if (psn[j] > max[j]) {
				M = name;
				for (int k = 0; k < 3; k++) max[k] = psn[k];
				break;
			}
			else if (psn[j] < max[j]) break;
		}

		for (int j = 0; j < 3; j++) {
			if (psn[j] < min[j]) {
				m = name;
				for (int k = 0; k < 3; k++) min[k] = psn[k];
				break;
			}
			else if (psn[j] > min[j]) break;
		}
	}
	cout << M << endl << m << endl;
	return 0;
}