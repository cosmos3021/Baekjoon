#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arr[1000001] = { 0 };

int gum(int len) {
	int res = 0;
	for (int i = 0; i < len; i++) res += arr[i] - '0';
	return res;
}

int main(void) {
	scanf("%s", arr);
	int len;

	for (int i = 0; ; i++) {
		len = strlen(arr);
		if (len == 1) {
			printf("%d\n", i);
			if (atoi(arr) % 3 == 0) printf("YES\n");
			else printf("NO\n");
			break;
		}
		else sprintf(arr, "%d", gum(len));
	}
	return 0;
}