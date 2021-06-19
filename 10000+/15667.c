#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i < 101; i++) {
		if (i + i * i == n - 1) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}