#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n, k = 1;
	scanf("%lld", &n);

	for (int i = 0; i < 31; i++) {
		if (k == n) {
			printf("%d\n", 1);
			return 0;
		}
		k *= 2;
	}
	printf("%d\n", 0);
	return 0;
}