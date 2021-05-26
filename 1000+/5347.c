#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	long long a, b, tmp, ab;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld %lld", &a, &b);
		ab = a * b;
		while (b != 0) tmp = a % b, a = b, b = tmp;
		long long lcm = ab / a;
		printf("%lld\n", lcm);
	}
	return 0;
}