#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n, sum = 0;
	scanf("%lld", &n);
	for (int i = 1; i < n; i++) sum += n * i + i;
	printf("%lld\n", sum);
}
