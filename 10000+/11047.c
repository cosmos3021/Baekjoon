#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int arr[11] = { 0 };
	int n, k, res = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		while (k >= arr[i]) {
			k -= arr[i];
			res++;
		}
		if (k == 0) {
			break;
		}
	}
	printf("%d\n", res);
	return 0;
}