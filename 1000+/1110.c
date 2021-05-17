#include <stdio.h>

int main(void) {
	int origin, copy_origin = 0, one, ten, n_one, result = 0, i = 0;
	int f;
	scanf("%d", &origin);

	copy_origin = origin;

	while (1) {
		if (origin < 10) {
			ten = 0;
		}

		one = origin % 10;

		ten = origin / 10;

		n_one = one + ten;

		if (n_one > 9) {
			int cn_one = n_one;
			n_one = cn_one % 10;
		}

		result = one * 10 + n_one;

		i++;

		if (copy_origin == result) {
			printf("%d", i);
			break;
		}

		else {
			origin = result;
		}
	}
	return 0;
}