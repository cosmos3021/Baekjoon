#include <iostream>

using namespace std;

int main(void) {
	int n, ic, six;
	cin >> n;

	for (int i = 666; ; i++) {
		ic = i, six = 0;
		while (ic != 0) {
			if (ic % 10 == 6) six++;
			else six = 0;
			if (six == 3) n--;
			ic /= 10;
		}
		if (n == 0) {
			cout << i << endl;
			return 0;
		}
	}
}