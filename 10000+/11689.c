#define CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main(void) {
	long long n, i = 2, k;
	scanf("%lld", &n);
	k = n;

	while (i * i <= n) {
		if (n % i == 0) {
			k = k / i * (i - 1);
		}
		while (n % i == 0) n /= i;
		i++;
	}

	if (n != 1) k = k / n * (n - 1);

	printf("%lld", k);
	return 0;
}