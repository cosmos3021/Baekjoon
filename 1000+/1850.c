#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(long long a, long long b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(void) {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	int one = gcd(a, b);
	for (int i = 0; i < one; i++) printf("%d", 1);
	printf("\n");
	return 0;
}