#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, sum;
	scanf("%lld %lld", &a, &b);
	sum = a * a - b * b;
	printf("%lld\n", sum);
	return 0;
}