#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr1[1001], arr2[1001];
	scanf("%s", arr1);
	scanf("%s", arr2);
	if (strlen(arr1) < strlen(arr2)) printf("no");
	else printf("go");
	return 0;
}