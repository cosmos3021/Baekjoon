#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);
	if ((n - 1) % 5 == 1 || (n - 1) % 5 == 4) printf("CY\n");
	else printf("SK\n");
	return 0;
}