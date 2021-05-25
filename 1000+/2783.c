#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float xo, yo, ro, x, y, r;
	scanf("%f %f", &xo, &yo);
	ro = 1000 * xo / yo;
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%f %f", &x, &y);
		r = 1000 * x / y;
		if (r < ro) ro = r;
	}

	printf("%.2f", ro);
	return 0;
}