#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int t, n, k, tmp, res = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &k);
		for (int j = 0; j < n; j++) {
			scanf("%d", &tmp);
			res += tmp / k;
		}
		printf("%d\n", res);
		res = 0;
	}
	return 0;
}