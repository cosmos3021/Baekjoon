#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);
	if (n % 2 == 1) printf("SK\n");
	else printf("CY\n");
	return 0;
}