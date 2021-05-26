#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[100] = { 0 };
	int n, tmp;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf(" %[^\n]", arr);
		if (arr[0] > 96) {
			tmp = (int)arr[0] - 32;
			arr[0] = (char)tmp;
		}
		printf("%s\n", arr);
	}

	return 0;
}