#include <iostream>

using namespace std;

int main(void) {
	int arr[10] = { 0 };
	int n, tmp;
	cin >> n;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < 10; i++) cin >> arr[i];
		for (int i = 0; i < 10; i++) {
			for (int j = i; j < 10; j++) {
				if (arr[i] > arr[j]) {
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		cout << arr[7] << endl;
	}
	return 0;
}