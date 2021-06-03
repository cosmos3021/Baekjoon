#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, n, befo = 1, befo2 = 0, befo2_c = 0;

	scanf("%d", &n);

	for (i = 0; i < n - 1; i++) {
		befo2_c = befo2;
		befo2 = befo;
		befo += befo2_c;
	}

	if (n == 0) befo = 0;
	printf("%d", befo);
	return 0;
}