#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	char arr[51] = { 0 };
	int len, cup, cpl = 0;
	scanf("%d", &len);
	scanf("%s", arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] == 'L') {
			cpl++;
		}
	}
	cup = len + 1 - (cpl / 2);
	if (cup > len) cup = len;
	printf("%d", cup);
	return 0;
}