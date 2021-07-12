#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(void) {
	int n, x1, y1, r1, x2, y2, r2, zerotwo;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) == 0) {
			if (x1 == x2 && y1 == y2 && r1 == r2) zerotwo = -1;
			else zerotwo = 0;
		}
		else {
			if (abs(r1 - r2) < sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) && sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) < abs(r1 + r2)) zerotwo = 2;
			else if (abs(r1 - r2) == sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) zerotwo = 1;
			else if (abs(r1 + r2) == sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) zerotwo = 1;
			else zerotwo = 0;
		}
		cout << zerotwo << endl;
	}
	return 0;
}