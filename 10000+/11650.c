#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int x[100001] = { 0 };
int y[100001] = { 0 };

int qsorttt(int* arr, int* arr2, int left, int right) {
	if (left >= right) return 0;

	int pivot = left, L = left + 1, R = right, tmp;

	while (L <= R) {
		while (L <= right && arr[L] <= arr[pivot]) L++;
		while (R > left && arr[R] >= arr[pivot]) R--;
		if (L > R) {
			tmp = arr[R];
			arr[R] = arr[pivot];
			arr[pivot] = tmp;

			tmp = arr2[R];
			arr2[R] = arr2[pivot];
			arr2[pivot] = tmp;
		}
		else {
			tmp = arr[L];
			arr[L] = arr[R];
			arr[R] = tmp;

			tmp = arr2[L];
			arr2[L] = arr2[R];
			arr2[R] = tmp;
		}
	}
	qsorttt(arr, arr2, left, R - 1);
	qsorttt(arr, arr2, R + 1, right);
}

int main(void) {
	int n, bi = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}

	qsorttt(x, y, 0, n - 1);

	for (int i = 0; i < n - 1; i++) {
		if (x[i] != x[i + 1]) {
			qsorttt(y, x, bi, i);
			bi = i + 1;
		}
	}

	qsorttt(y, x, bi, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", x[i], y[i]);
	}
	return 0;
}