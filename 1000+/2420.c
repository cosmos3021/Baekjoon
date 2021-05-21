#include <stdio.h>
#include <math.h>

int main(void) {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	long long res = llabs(n - m);
	printf("%lld\n", res);
}