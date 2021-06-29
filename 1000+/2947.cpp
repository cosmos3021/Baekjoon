#include <iostream>

using namespace std;

int main(void) {
	int arr[5] = { 0 };
	int tmp;
	for (int i = 0; i < 5; i++) cin >> arr[i];

	for (int k = 0; k < 5; k++) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				for (int j = 0; j < 5; j++) cout << arr[j] << " ";
				cout << endl;
			}
		}
	}
	return 0;
}