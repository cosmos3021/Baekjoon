#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int t, w, h, n, i;
	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		int x = n % h, y = n / h;

		if (x == 0) {
			x = h;
			y--;
		}

		printf("%d\n", 100 * x + y + 1);
	}
	return 0;
}