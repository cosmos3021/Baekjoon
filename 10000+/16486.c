#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float d1, d2, sum;
	scanf("%f", &d1);
	scanf("%f", &d2);
	sum = d1 + d2 * 3.141592;
	printf("%f\n", 2 * sum);
	return 0;
}