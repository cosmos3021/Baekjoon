#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[51] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr), num = 0, res = 0, mode = 0;

	for (int i = 0; i < len; i++) {
		if (mode == 0) {
			if (arr[i] < 48) {
				res += num;
				num = 0;
				if (arr[i] == '-') mode = 1;
			}
			else num = num * 10 + arr[i] - '0';
		}
		else {
			if (arr[i] < 48) {
				res -= num;
				num = 0;
			}
			else num = num * 10 + arr[i] - '0';
		}
	}
	if (mode == 0) res += num;
	else res -= num;
	printf("%d", res);
	return 0;
}