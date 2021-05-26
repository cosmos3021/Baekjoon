#include <stdio.h>

int main(void) {
	int i, j, t, musi = 0, n;
	int arr[10001] = { 0 };
	scanf("%d", &t);

	for (i = 1; i < 10002; i++) {
		for (j = 2; j < i + 1; j++) {
			if (i % j == 0) break;
		}
		if (i == j) arr[i] = 1;
	}

	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		for (j = 0; j < n / 2 + 1; j++) {
			if (arr[n / 2 - j] == 1 && arr[n / 2 + j] == 1) {
				printf("%d %d\n", n / 2 - j, n / 2 + j);
				break;
			}
		}
	}

	return 0;
}