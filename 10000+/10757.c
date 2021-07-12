#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char a[10001] = { 0 };
	char b[10001] = { 0 };
	int res[10002] = { 0 };
	scanf("%s %s", a, b);

	int alen = strlen(a) - 1, blen = strlen(b) - 1, reslen, plus = 0;

	for (int i = 0; ; i++) {
		if (alen < 0 && blen < 0) {
			reslen = i;
			break;
		}

		if (alen >= 0 && a[alen] != 0) res[i] += (int)a[alen] - 48;
		if (blen >= 0 && b[blen] != 0) res[i] += (int)b[blen] - 48;
		res[i] += plus;

		if (res[i] >= 10) res[i] -= 10, plus = 1;
		else plus = 0;

		alen--, blen--;
	}

	if (plus == 1) printf("1");

	for (int i = reslen - 1; i >= 0; i--) printf("%d", res[i]);
	return 0;
}