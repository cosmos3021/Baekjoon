#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, c, v, mock, nar;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &c, &v);
		mock = c / v;
		nar = c % v;
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", mock, nar);
	}

	return 0;
}