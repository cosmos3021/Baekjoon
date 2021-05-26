#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);
	n = (n + 1) * n / 2;
	printf("%lld\n", n);
	return 0;
}