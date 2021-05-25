#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[81] = { 0 };
	int n, nn, len;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &nn, arr);
		len = strlen(arr);
		for (int i = 0; i < len; i++) {
			if (i != nn - 1) {
				printf("%c", arr[i]);
			}
		}
		printf("\n");
	}
	return 0;
}