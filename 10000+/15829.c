#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[51] = { 0 };
	long long l, res = 0, r = 1, MOD = 1234567891;
	scanf("%lld %s", &l, arr);
	for (int i = 0; i < l; i++) {
		res = (res + r * (arr[i] - 'a' + 1)) % MOD;
		r = (r * 31) % MOD;
	}
	printf("%lld", res);
	return 0;
}