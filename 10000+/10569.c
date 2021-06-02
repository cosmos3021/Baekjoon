#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int t, v, e, sum;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &v, &e);
		sum = 2 + e - v;
		printf("%d\n", sum);
	}
}