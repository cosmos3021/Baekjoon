#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long t, a, b;
	scanf("%lld", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lld %lld", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}