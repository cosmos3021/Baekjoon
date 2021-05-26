#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[10001] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr), joi = 0, ioi = 0;
	for (int i = 0; i < len - 2; i++) {
		if (arr[i + 1] == 'O' && arr[i + 2] == 'I') {
			if (arr[i] == 'J') joi++;
			else if (arr[i] == 'I') ioi++;
		}
	}
	printf("%d\n%d\n", joi, ioi);
	return 0;
}