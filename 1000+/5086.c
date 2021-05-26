#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int one, two;

	while (1) {
		scanf("%d %d", &one, &two);
		if (one == 0 && two == 0) return 0;

		if (two % one == 0) printf("factor\n");
		else if (one % two == 0) printf("multiple\n");
		else printf("neither\n");
	}

	return 0;
}