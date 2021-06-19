#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d, e, sum;
	scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);

	if (a < 0) {
		a *= -1;
		sum = a * c + b * e + d;
	}
	else sum = (b - a) * e;

	printf("%d\n", sum);
}