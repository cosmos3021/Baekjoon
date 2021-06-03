#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	int res[4] = { 0 };
	int len;

	while (gets(arr) != 0) {
		len = strlen(arr);
		for (int i = 0; i < len; i++) {
			if ((int)arr[i] >= 48 && (int)arr[i] <= 57) {
				res[2]++;
			}
			else if ((int)arr[i] >= 65 && (int)arr[i] <= 90) {
				res[1]++;
			}
			else if ((int)arr[i] >= 97 && (int)arr[i] <= 122) {
				res[0]++;
			}
			else res[3]++;
		}
		for (int i = 0; i < 4; i++) {
			printf("%d ", res[i]);
			res[i] = 0;
		}
		printf("\n");
	}
	return 0;
}