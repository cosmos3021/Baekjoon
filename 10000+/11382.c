#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, c, sum;
	scanf("%lld %lld %lld", &a, &b, &c);
	sum = a + b + c;
	printf("%lld\n", sum);
	return 0;
}