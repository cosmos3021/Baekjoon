#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[51] = { 0 };
	scanf("%s", &arr);
	int res = 10;

	for (int i = 1; i < strlen(arr); i++) {
		if (arr[i] == arr[i - 1]) res += 5;
		else res += 10;
	}
	printf("%d\n", res);
	return 0;
}