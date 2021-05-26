#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, i, j = 2, first, other, bo, mo;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &other);

		if (i == 0) {
			first = other;
			continue;
		}

		bo = first, mo = other;

		while (bo >= j && mo >= j) {
			while (bo % j == 0 && mo % j == 0) bo /= j, mo /= j;
			j++;
		}

		printf("%d/%d\n", bo, mo);
		j = 2;
	}
	return 0;
}