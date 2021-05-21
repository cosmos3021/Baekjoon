#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, k, t = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &k);

		for (int j = 2; ; j++) {

			if (k == 1) break;

			else if (k % j == 0) {

				while (k % j == 0) {
					k /= j;
					t++;
				}

				printf("%d %d\n", j, t);
				t = 0;
			}
		}
	}
	return 0;
}