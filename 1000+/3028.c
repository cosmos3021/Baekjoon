#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char cup[3] = { '1', '0', '0' };
	char arr[51] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr), tmp;
	for (int i = 0; i < len; i++) {
		if (arr[i] == 'A') {
			tmp = cup[0];
			cup[0] = cup[1];
			cup[1] = tmp;
		}
		if (arr[i] == 'B') {
			tmp = cup[1];
			cup[1] = cup[2];
			cup[2] = tmp;
		}
		if (arr[i] == 'C') {
			tmp = cup[0];
			cup[0] = cup[2];
			cup[2] = tmp;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (cup[i] == '1') {
			printf("%d", i + 1);
		}
	}
	return 0;
}