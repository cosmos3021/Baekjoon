#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int m, n, i, j, k, res = 0;
	int arr[100];
	scanf("%d %d", &m, &n);

	for (i = 0; i < m; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < m; i++) {
		for (j = i + 1; j < m; j++) {
			for (k = j + 1; k < m; k++) {
				if (arr[i] + arr[j] + arr[k] > res && arr[i] + arr[j] + arr[k] <= n) {
					res = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}

	printf("%d", res);
	return 0;
}