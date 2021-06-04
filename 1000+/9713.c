#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t, n, res;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		res = 0;
		scanf("%d", &n);
		for (int j = 1; j <= n; j += 2) res += j;
		printf("%d\n", res);
	}
	return 0;
}