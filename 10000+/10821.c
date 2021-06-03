#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { 0 };
	scanf("%[^\n]", arr);
	int len = strlen(arr), res = 1;
	for (int i = 0; i < len; i++) {
		if (arr[i] == ',') res++;
	}
	printf("%d\n", res);
	return 0;
}