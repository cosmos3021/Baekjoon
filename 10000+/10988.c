#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr), pel = 1;

	for (int i = 0; i < len; i++) {
		if (arr[i] != arr[len - 1 - i]) {
			pel = 0;
			break;
		}
	}

	printf("%d\n", pel);
	return 0;
}