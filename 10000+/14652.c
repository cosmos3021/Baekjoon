#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, k;
	scanf("%d %d %d", &y, &x, &k);
	int n = k / x, m = k % x;
	printf("%d %d", n, m);
	return 0;
}