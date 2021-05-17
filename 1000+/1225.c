#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char a[10001] = { 0 };
	char b[10001] = { 0 };
	scanf("%s %s", a, b);
	long long alen = strlen(a), blen = strlen(b), res = 0;
	for (int i = 0; i < alen; i++) {
		for (int j = 0; j < blen; j++) {
			res += (a[i] - '0') * (b[j] - '0');
		}
	}
	printf("%lld\n", res);
	return 0;
}