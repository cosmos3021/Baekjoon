#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, tmp;
	int arr[6] = { 0 };

	for (i = 0; i < 6; i++) {
		scanf("%d", &tmp);
		arr[i] = tmp;
	}

	arr[0] = 1 - arr[0];
	arr[1] = 1 - arr[1];
	arr[2] = 2 - arr[2];
	arr[3] = 2 - arr[3];
	arr[4] = 2 - arr[4];
	arr[5] = 8 - arr[5];

	for (i = 0; i < 6; i++) printf("%d ", arr[i]);
	return 0;
}