#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[16] = { 0 };
	char b[4] = { 0 };
	int aa = 0, bb = 0, num = 1;
	scanf("%s %s", a, b);
	for (int i = 0; i < 3; i++) {
		aa += ((int)a[i] - 48) * num;
		bb += ((int)b[i] - 48) * num;
		num *= 10;
	}
	if (aa > bb) printf("%d", aa);
	else printf("%d", bb);
	return 0;
}