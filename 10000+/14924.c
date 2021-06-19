#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int s, t, d, f;
	scanf("%d %d %d", &s, &t, &d);
	f = d / (2 * s) * t;
	printf("%d\n", f);
	return 0;
}