#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, k = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j * i <= n; j++) {
			k++;
		}
	}

	printf("%d", k);
	return 0;
}