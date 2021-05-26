#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t, k, sum = 0, min = 101;
	scanf("%d", &t);

	for (int j = 0; j < t; j++) {
		for (int i = 0; i < 7; i++) {
			scanf("%d", &k);
			if (k % 2 == 0) {
				sum += k;
				if (k < min) min = k;
			}
		}
		printf("%d %d\n", sum, min);
		sum = 0, min = 101;
	}
}
