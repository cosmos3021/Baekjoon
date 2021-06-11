#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	scanf("%[^\n]", arr);
	int len = strlen(arr), tmp;
	for (int i = 0; i < len; i++) {
		if ((int)arr[i] > 64 && (int)arr[i] < 78) {
			tmp = (int)arr[i] + 13;
			arr[i] = (char)tmp;
		}
		else if ((int)arr[i] > 77 && (int)arr[i] < 91) {
			tmp = (int)arr[i] - 13;
			arr[i] = (char)tmp;
		}
		else if ((int)arr[i] > 96 && (int)arr[i] < 110) {
			tmp = (int)arr[i] + 13;
			arr[i] = (char)tmp;
		}
		else if ((int)arr[i] > 109 && (int)arr[i] < 123) {
			tmp = (int)arr[i] - 13;
			arr[i] = (char)tmp;
		}
	}
	for (int i = 0; i < len; i++) printf("%c", arr[i]);
	return 0;
}