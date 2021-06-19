#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, sum;
	scanf("%d", &n);
	sum = n / 5;
	if (n % 5 != 0) sum++;
	printf("%d", sum);
	return 0;
}