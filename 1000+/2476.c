#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, sum, lar = 0, tmp, a, b, c;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);

		if (a > b) tmp = a;
		else tmp = b;

		if (tmp > c) sum = tmp * 100;
		else sum = c * 100;

		if (a == b) sum = 1000 + a * 100;
		if (b == c) sum = 1000 + b * 100;
		if (c == a) sum = 1000 + c * 100;

		if (a == b && b == c) sum = 10000 + a * 1000;

		if (sum > lar) lar = sum;
	}

	printf("%d\n", lar);
}