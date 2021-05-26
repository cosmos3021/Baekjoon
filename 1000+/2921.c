#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n, sum = 0, i, j;
	scanf("%lld", &n);

	for (i = 1; i <= n; i++) {
		sum += i * (i + 1);
		for (j = 1; j <= i; j++) sum += j;
	}

	printf("%lld\n", sum);
	return 0;
}