#include <iostream>

using namespace std;

int main(void) {
	char res[5] = { 'E', 'A', 'B', 'C', 'D' };
	int tmp, cnt;
	for (int i = 0; i < 3; i++) {
		cnt = 0;
		for (int j = 0; j < 4; j++) {
			cin >> tmp;
			if (tmp == 0) cnt++;
		}
		cout << res[cnt] << endl;
	}
	return 0;
}