#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[9] = { 0 };
	int half, res = 0;
	scanf("%s", arr);
	half = strlen(arr) / 2;
	for (int i = 0; i < half; i++) {
		res += arr[i] - '0';
		res -= arr[i + half] - '0';
	}
	if (res == 0) printf("LUCKY");
	else printf("READY");
	return 0;
}