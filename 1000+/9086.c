#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	int n, len;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		len = strlen(arr);
		printf("%c%c\n", arr[0], arr[len - 1]);
	}
	return 0;
}