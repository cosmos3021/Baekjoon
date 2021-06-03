#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long a, b, c, d, cnt, res;

void power(int ac, int bd) {
	cnt = 1;
	while (bd != 0) {
		bd = bd / 10;
		cnt *= 10;
	}
	res += ac * cnt;
}

int main(void) {
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	res = b + d;
	power(a, b);
	power(c, d);
	printf("%lld\n", res);
	return 0;
}