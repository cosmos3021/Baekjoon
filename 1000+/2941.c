#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr), res = len;

	for (int i = 0; i < len; i++) {
		if (arr[i] == '=') {
			if (arr[i - 1] == 'c' || arr[i - 1] == 's') {
				res--;
			}
			if (arr[i - 1] == 'z') {
				res--;
				if (arr[i - 2] == 'd') {
					res--;
				}
			}
		}
		if (arr[i] == '-') {
			if (arr[i - 1] == 'c' || arr[i - 1] == 'd') {
				res--;
			}
		}
		if (arr[i] == 'j') {
			if (arr[i - 1] == 'l' || arr[i - 1] == 'n') {
				res--;
			}
		}
	}
	printf("%d", res);
	return 0;
}