#include <iostream>

using namespace std;

int main(void) {
	int n, tmp, cnt = 0;
	cin >> n;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		if (tmp == n) cnt++;
	}
	cout << cnt << endl;
	return 0;
}