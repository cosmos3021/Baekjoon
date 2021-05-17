#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int arr, r = 0, k = 0, a, b, c, d, tmp;

	while (1) {
		scanf("%d", &arr);
		if (arr == 0) return 0;

		for (int i = 1; i <= 5; i++) {
			if (arr / pow(10, i) < 1) {
				r = i;
				break;
			}
		}

		for (int i = 1; i <= r / 2; i++) {
			tmp = r - i + 1;
			a = pow(10, i);
			b = pow(10, i - 1);
			c = pow(10, tmp);
			d = pow(10, tmp - 1);
			if (arr % a / b != arr % c / d) k++;
		}

		if (k == 0) printf("yes\n");
		else printf("no\n");

		k = 0, r = 0;
	}
}