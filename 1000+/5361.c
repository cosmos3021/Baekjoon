#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float a, b, c, d, e, sum;
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
		sum = a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90;
		printf("$%.2f\n", sum);
	}

	return 0;
}