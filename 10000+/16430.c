#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, sum;
	scanf("%d %d", &a, &b);
	sum = b - a;
	printf("%d %d", sum, b);
}