#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, i = 2;
	scanf("%d", &n);

	while (n != 1) {
		if (n % i == 0) {
			printf("%d\n", i);
			n /= i;
		}
		else i++;
	}

	return 0;
}