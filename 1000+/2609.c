#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int m, n, i = 2, j, k = 0, G = 1;
	scanf("%d %d", &m, &n);
	int mn = m * n;
	int arr_m[13] = { 0 };
	int arr_n[13] = { 0 };
	int arr[13] = { 0 };

	while (1) {
		if (m % i == 0) {
			m /= i;
			arr_m[k] = i;
			k++;
		}
		else i++;

		if (m == 1) break;
	}

	k = 0, i = 2;

	while (1) {
		if (n % i == 0) {
			n /= i;
			arr_n[k] = i;
			k++;
		}
		else i++;

		if (n == 1) break;
	}

	k = -1;

	for (i = 0; i < 13; i++) {
		for (j = k + 1; j < 13; j++) {
			if (arr_m[i] == 0 || arr_n[j] == 0) break;
			if (arr_m[i] == arr_n[j]) {
				G *= arr_m[i];
				k = j;
				break;
			}
		}
	}

	printf("%d\n%d", G, mn / G);
	return 0;
}