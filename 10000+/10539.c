#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, sum = 0, k, res;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		res = k * (i + 1) - sum;
		printf("%d ", res);
		sum += res;
	}
	return 0;
}