#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, x = 0;
	int i;

	scanf("%d %d", &n, &x);

	for (i = 0; i < n; i++) {
		int a = 0;

		scanf("%d", &a);
		if (x > a) {
			printf("%d ", a);
		}
	}
	return 0;
}