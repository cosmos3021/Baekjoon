#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = n - i - 1; j >= 0; j--) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}