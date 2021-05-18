#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n, res = 0, i = 1, cnt = 1;
	scanf("%lld", &n);

	if (n < 10) {
		printf("%lld", n);
		return 0;
	}

	for (i = 1; i < n; i *= 10) {
		if (n < 9 * i) break;
		n -= 9 * i;
		res += 9 * i * cnt;
		cnt++;
	}

	printf("%lld", res + n * cnt);
	return 0;
}