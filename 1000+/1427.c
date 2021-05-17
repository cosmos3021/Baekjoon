#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	int arr[11] = { 0 };
	long long input;
	int len, tmp, j = 1;
	scanf("%lld", &input);

	for (int i = 0; ; i++) {
		if (input < j) {
			break;
		}
		j *= 10;
		arr[i] = (input % j) / (j / 10);
		len = i;
	}

	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j <= len; j++) {
			if (arr[i] < arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i <= len; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}