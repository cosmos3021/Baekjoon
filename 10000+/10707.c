#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d, p, x, y;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

	x = a * p;
	if (p > c) y = b + d * (p - c);
	else y = b;

	if (x > y) printf("%d\n", y);
	else printf("%d\n", x);
}