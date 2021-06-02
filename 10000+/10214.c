#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, y, k, y_sum = 0, k_sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d %d", &y, &k);
			y_sum += y;
			k_sum += k;
		}

		if (y_sum > k_sum) printf("Yonsei\n");
		else if (y_sum < k_sum) printf("Korea\n");
		else printf("Draw\n");

		y_sum = 0, k_sum = 0;
	}
	return 0;
}