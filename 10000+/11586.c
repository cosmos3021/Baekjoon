#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	char arr[101][101] = { 0 };
	int n, k;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}

	scanf("%d", &k);

	if (k == 1) {
		for (int i = 0; i < n; i++) {
			printf("%s\n", arr[i]);
		}
	}
	else if (k == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= 0; j--) {
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
	}
	else if (k == 3) {
		for (int i = n - 1; i >= 0; i--) {
			printf("%s\n", arr[i]);
		}
	}
	return 0;
}