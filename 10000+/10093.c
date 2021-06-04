#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, tmp;
	scanf("%lld %lld", &a, &b);
	if (b > a) {
		tmp = b;
		b = a;
		a = tmp;
	}

	if (a == b) printf("0\n");
	else printf("%lld\n", a - b - 1);

	for (long long i = b + 1; i < a; i++) {
		printf("%lld ", i);
	}
	return 0;
}