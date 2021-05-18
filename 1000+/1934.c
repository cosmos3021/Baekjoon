#include <stdio.h>

int main(void) {
	int i, t, a, b, copy_a, copy_b, yes_we_scan = 2, sum = 1;
	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		copy_a = a, copy_b = b;

		while (yes_we_scan <= copy_a || yes_we_scan <= copy_b) {
			if (copy_a % yes_we_scan == 0 && copy_b % yes_we_scan == 0) {
				copy_a /= yes_we_scan;
				copy_b /= yes_we_scan;
				sum *= yes_we_scan;
			}

			else yes_we_scan++;
		}

		printf("%d\n", a * b / sum);
		yes_we_scan = 2, sum = 1;
	}
	return 0;
}