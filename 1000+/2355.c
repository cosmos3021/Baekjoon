#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, sum;
	scanf("%lld %lld", &a, &b);
	if (a <= b) sum = (a + b) * (b - a + 1) / 2;
	else sum = (a + b) * (a - b + 1) / 2;
	printf("%lld\n", sum);
	return 0;
}