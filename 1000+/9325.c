#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int test, s, n, q, p, sum = 0;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d\n%d", &s, &n);
		sum += s;

		for (int j = 0; j < n; j++) {
			scanf("%d %d", &q, &p);
			sum += q * p;
		}

		printf("%d\n", sum);
		sum = 0;
	}
}