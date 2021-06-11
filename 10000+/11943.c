#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d, sum;
	scanf("%d %d\n%d %d", &a, &b, &c, &d);
	if (a + d > b + c) sum = b + c;
	else sum = a + d;
	printf("%d", sum);
	return 0;
}