#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, n;
	long long arr[46] = { 0, 1, };
	scanf("%d", &n);

	for (i = 2; i < 46; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	printf("%lld", arr[n]);
}