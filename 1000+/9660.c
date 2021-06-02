#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);
	if (n % 7 == 1 || n % 7 == 3) printf("CY\n");
	else printf("SK\n");
	return 0;
}