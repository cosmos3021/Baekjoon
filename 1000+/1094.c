#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int len = 64, x, reslen = 0, cnt = 0;
	scanf("%d", &x);

	if (len == x) {
		printf("%d", 1);
		return 0;
	}

	while (reslen != x) {
		len /= 2;
		if (reslen + len <= x) {
			reslen += len;
			cnt++;
		}
	}

	printf("%d", cnt);
	return 0;
}