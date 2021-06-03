#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[3] = { 0 };

void swap(int a, int b) {
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

int main(void) {
	for (int i = 0; i < 3; i++) scanf("%d", &arr[i]);
	if (arr[0] > arr[1]) swap(0, 1);
	if (arr[1] > arr[2]) swap(1, 2);
	if (arr[0] > arr[1]) swap(0, 1);
	printf("%d\n", arr[1]);
	return 0;
}