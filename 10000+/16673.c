#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int c, k, p, sum = 0, n;
	scanf("%d %d %d", &c, &k, &p);
	for (n = 1; n <= c; n++) sum += n * k + p * n * n;
	printf("%d", sum);
	return 0;
}