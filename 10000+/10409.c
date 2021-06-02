#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int n, t, r;
	scanf("%d %d", &n, &t);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &r);
		if (t - r < 0) {
			printf("%d\n", i - 1);
			return 0;
		}
		t -= r;
	}
	printf("%d\n", n);
	return 0;
}