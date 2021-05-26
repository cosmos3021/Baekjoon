#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int e, f, c, all, res = 0;
	scanf("%d %d %d", &e, &f, &c);
	all = e + f;
	while (all >= c) all = all - c + 1, res++;
	printf("%d\n", res);
	return 0;
}