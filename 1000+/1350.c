#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	long long n, c, s = 0;
	long long p[1000] = { 0 };

	scanf("%lld", &n);
	for (int i = 0; i < n; i++) scanf("%lld", &p[i]);
	scanf("%lld", &c);

	for (int i = 0; i < n; i++) {
		if (p[i] != 0) {
			s += p[i] / c;
			if (p[i] % c != 0) s++;
		}
	}

	s *= c;

	printf("%lld\n", s);
	return 0;
}