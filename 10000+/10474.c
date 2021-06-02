#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		c = a / b;
		d = a % b;
		printf("%d %d / %d\n", c, d, b);
	}
	return 0;
}