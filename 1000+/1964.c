#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long l, sum = 12, m = 7;
	scanf("%lld", &l);

	if (l == 1) {
		printf("%d", 5);
		return 0;
	}
	if (l == 2) {
		printf("%d", 7);
		return 0;
	}

	for (int i = 0; i < l - 2; i++) {
		m += 3;
		sum += m;
	}

	sum %= 45678;

	printf("%lld", sum);
	return 0;
}