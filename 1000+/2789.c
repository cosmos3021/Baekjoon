#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr);

	for (int i = 0; i < len; i++) {
		if (arr[i] == 'C') arr[i] = '0';
		if (arr[i] == 'A') arr[i] = '0';
		if (arr[i] == 'M') arr[i] = '0';
		if (arr[i] == 'B') arr[i] = '0';
		if (arr[i] == 'R') arr[i] = '0';
		if (arr[i] == 'I') arr[i] = '0';
		if (arr[i] == 'D') arr[i] = '0';
		if (arr[i] == 'G') arr[i] = '0';
		if (arr[i] == 'E') arr[i] = '0';
	}

	for (int i = 0; i < len; i++) {
		if (arr[i] != '0') {
			printf("%c", arr[i]);
		}
	}
	return 0;
}