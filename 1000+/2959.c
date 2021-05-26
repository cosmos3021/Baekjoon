#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d, sum, tmp;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int arr[5] = { a, b, c, d };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	sum = arr[1] * arr[3];
	printf("%d\n", sum);
	return 0;
}